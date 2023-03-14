// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SweepTrace.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIODEMO_API USweepTrace : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USweepTrace();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	 //Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Trace")
	float TraceDistance = 150.f;
		
};
