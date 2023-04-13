// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "PortfolioDemoCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "TeleporterBox.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIODEMO_API ATeleporterBox : public ATriggerBox
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	ATeleporterBox();

	UFUNCTION()
	void EnterTeleporter(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
	void ExitTeleporter(class AActor* overlappedActor, class AActor* otherActor);

	UPROPERTY(EditAnywhere, Category = "Teleporter")
	ATeleporterBox* otherTeleporter;

	UPROPERTY()
	bool bTeleporting;
	
};
