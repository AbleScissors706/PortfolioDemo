// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleporterBox.h"

ATeleporterBox::ATeleporterBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ATeleporterBox::EnterTeleporter);
	OnActorEndOverlap.AddDynamic(this, &ATeleporterBox::ExitTeleporter);

	bTeleporting = false;

}

void ATeleporterBox::EnterTeleporter(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		if (otherTeleporter)
		{
			APortfolioDemoCharacter* character = Cast<APortfolioDemoCharacter>(otherActor);
			if (character && !otherTeleporter->bTeleporting)
			{
				bTeleporting = true;
				character->SetActorRotation(otherTeleporter->GetActorRotation());
				character->GetController()->SetControlRotation(character->GetActorRotation());
				character->SetActorLocation(otherTeleporter->GetActorLocation());
			}
		}
	}
}

void ATeleporterBox::ExitTeleporter(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		if (otherTeleporter && !bTeleporting)
		{
			otherTeleporter->bTeleporting = false;
		}
	}
}

void ATeleporterBox::BeginPlay()
{
	Super::BeginPlay();
}
