// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIODEMO_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

	void TakeDamage(float Damage) { CurrentHealth -= Damage; }
	bool IsDead() { return CurrentHealth <= FLT_EPSILON; }
	const float GetCurrentHealth() { return CurrentHealth; }
	void SetCurrentHealth(float health) { CurrentHealth = health; }

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth = 100.0f;

	UPROPERTY(BlueprintReadOnly)
	float CurrentHealth = 0.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stamina")
	float MaxStamina = 100.0f;

	UPROPERTY(BlueprintReadOnly)
	float CurrentStamina = 0.0f;

};
