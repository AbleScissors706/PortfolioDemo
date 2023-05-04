// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoorWithLerp.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AOpenDoorWithLerp::AOpenDoorWithLerp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Open = false;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MY BOX COMPONENT"));
	BoxComponent->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	RootComponent = BoxComponent;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MY DOOR"));
	Door->SetRelativeLocation(FVector(0.0f, 50.0f, -50.0f));
	Door->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AOpenDoorWithLerp::OnOverlapBegin);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &AOpenDoorWithLerp::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AOpenDoorWithLerp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpenDoorWithLerp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// maybe in UE5,RelativeRotation is private
	DoorRotation = Door->GetRelativeRotation();

	if (Open)
	{
		Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorRotation), FQuat(FRotator(0.0f, RotateValue, 0.0f)), 0.01f));
	}
	else
	{
		Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorRotation), FQuat(FRotator(0.0f, 0.0f, 0.0f)), 0.01f));
	}

}

void AOpenDoorWithLerp::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		FVector PawnLocation = OtherActor->GetActorLocation();
		FVector Direction = GetActorLocation() - PawnLocation;
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		if (Direction.X > 0.0f)
		{
			RotateValue = 90.0f;
		}
		else
		{
			RotateValue = -90.0f;
		}

		Open = true;
	}
}

void AOpenDoorWithLerp::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		Open = false;
	}
}

