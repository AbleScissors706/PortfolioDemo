// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultHealth = 100.0f;
	Health = DefaultHealth;

	DefaultStamina = 50.0f;
	Stamina = DefaultStamina;

}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* MyOwner = GetOwner();
	if (MyOwner) 
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}

}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
}


