// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	DefaultHealth = 100.0f;
	Health = DefaultHealth;

	RespawnLocation = FVector(950, 850, 122);
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();

	if (Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}
	
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0)
	{
		Health = 0.0f;
		Die();
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
}
void UHealthComponent::Die()
{
	Respawn();
}

void UHealthComponent::Respawn()
{
	Health = 100.0f;
	RespawnLocation;
}