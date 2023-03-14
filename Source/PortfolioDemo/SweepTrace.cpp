// Fill out your copyright notice in the Description page of Project Settings.


#include "SweepTrace.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
USweepTrace::USweepTrace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USweepTrace::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void USweepTrace::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Start = GetOwner()->GetActorLocation();
	FVector End = ((GetForwardVector() * 150.0f) + Start);

	FHitResult Hit;

	FCollisionShape Sphere;
	Sphere.SetSphere(10.0f);

	bool bHit = GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, ECC_Visibility, Sphere);

	DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 5.0f);

	if (bHit)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Trace Hit: %s"), *Hit.GetActor()->GetName()));

		FVector WallNormal = Hit.ImpactNormal;
		FVector WallLocation = Hit.Location;
		
		//perform trace
		FVector StartHeight = GetOwner()->GetActorLocation() + FVector(0.0, 0.0, 500.0f);
		FVector EndHeight = ((GetForwardVector() * 75.0f) - FVector(0.0, 0.0, 500.0f)) + StartHeight;
		FHitResult HitHeight;

		FCollisionShape SphereHeight;
		Sphere.SetSphere(10.0f);

		bool bhit = GetWorld()->SweepSingleByChannel(HitHeight, StartHeight, EndHeight, FQuat::Identity, ECC_Visibility, SphereHeight);

		DrawDebugLine(GetWorld(), StartHeight, EndHeight, FColor::Green, false, 5.0f);
	}

	//bool bIsClimbing = false;
	//float Min = -50.0f;
	//float Max = 0.0f;

	//if (Min < -50)
	//{
	//	bIsClimbing = true;

	//}
	//else if (Max == 0)
	//{
	//	bIsClimbing = true;
	//}
	//else
	//{
	//	GetOwner()->GetActorLocation();
	//	GetSocketLocation("pelvisSocket") - Hit.Location - Min - Max;

	//	bIsClimbing = true;
	//}
	// ...
}

