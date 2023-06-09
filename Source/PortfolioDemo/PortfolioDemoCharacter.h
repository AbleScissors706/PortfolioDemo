// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PortfolioDemoCharacter.generated.h"

class UHealthComponent;

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

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Movement: Climb")
	float MaxClimbRange = 110.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	bool IsClimbing = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slide")
	bool IsSlide = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WallRun")
	bool bWallRunning = false;

	UFUNCTION()
	void ResetClimbToWalk(EMovementMode Movement);

	UFUNCTION()
	void ResetSlideToWalk();

	virtual void FellOutOfWorld(const class UDamageType& dmgType) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintCallable)
	const bool IsAlive() const;
	
	UFUNCTION(BlueprintCallable)
	void HandleItemCollected();

	UFUNCTION(BlueprintImplementableEvent)
	void ItemCollected();

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	int ItemsCollected = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WallRun)
	float WallRunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WallRun)
	float PlayerToWallDistance;

	void CountDown();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldTimer")
	int Minutes = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldTimer")
	int Secounds = 0;

protected:

	virtual void BeginPlay() override;

	void OnDeath(bool IsFellOut);

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Health")
	UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ClimbMontage = nullptr;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* SlideMontage = nullptr;

	void Slide();

	void DetectClimb();

	/*void AttachToWall(int Direction, float WallSpeed, FHitResult HitResult);
	void WallRun();*/

	void Sprint();
	void StopSprinting();

	virtual void CallCrouch();

	virtual void Jump();
	virtual void StopJumping();

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

	APlayerController* PC;

	UPROPERTY(EditAnyWhere, Category = "Effects")
	TSubclassOf<UCameraShakeBase> CamShake;

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

