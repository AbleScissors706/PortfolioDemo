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

	void TakeDamage(float Damage) { Health -= Damage; }
	bool IsDead() { return Health <= FLT_EPSILON; }

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	//Health - healing and adding more health to character
	//void IncreaseMaxHealth();
	//void IncreaseHealth();

	////Stamina - stamina and adding more stamina to character
	//void DecreaseStamina();
	//bool bNoStamina = false;
	//void IncreaseMaxStamina();
	//void IncreaseStamina();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Health")
	float DefaultHealth;

	UPROPERTY(BlueprintReadOnly)
	float Health;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stamina")
	float DefaultStamina;

	UPROPERTY(BlueprintReadOnly)
	float Stamina;
};
