// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSProjectile.h"
#include "PortfolioDemoCharacter.generated.h"

UCLASS(config=Game)
class APortfolioDemoCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	APortfolioDemoCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character Movement: Walking")
	float SprintSpeedMultiplier;

	// Function that handles firing projectiles.
	UFUNCTION()
	void Fire();

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Movement: Climb")
	float MaxClimbRange = 120.0f;

	bool IsClimbing = false;
	bool IsSlide = false;

	UFUNCTION()
	void ResetClimbToWalk(EMovementMode Movement);

	UFUNCTION()
	void ResetSlideToWalk(ECollisionEnabled::Type CollisionEnabled);

protected:

	UPROPERTY(EditAnywhere)
	UAnimMontage* ClimbMontage = nullptr;

	UPROPERTY(EditAnywhere)
	UAnimMontage* SlideProtoType_Montage = nullptr;

	void Slide();

	void DetectClimb();

	void Sprint();
	void StopSprinting();

	virtual void CallCrouch();

	//Called for forwards/backward input
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

