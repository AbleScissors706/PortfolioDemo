// Copyright Epic Games, Inc. All Rights Reserved.

#include "PortfolioDemoCharacter.h"
#include "HealthComponent.h"
#include "GameFramework/DamageType.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include <Kismet/KismetMathLibrary.h>

#define LEFT -90
#define RIGHT 90

//////////////////////////////////////////////////////////////////////////
// APortfolioDemoCharacter

APortfolioDemoCharacter::APortfolioDemoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	SprintSpeedMultiplier = 2.0f;
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

//////////////////////////////////////////////////////////////////////////
// Input

void APortfolioDemoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APortfolioDemoCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APortfolioDemoCharacter::StopJumping);

	//PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APortfolioDemoCharacter::InteractPressed);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &APortfolioDemoCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &APortfolioDemoCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &APortfolioDemoCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &APortfolioDemoCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &APortfolioDemoCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &APortfolioDemoCharacter::TouchStopped);
	 
	//Crouch
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APortfolioDemoCharacter::CallCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APortfolioDemoCharacter::CallCrouch);
	
	//Sprint
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APortfolioDemoCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APortfolioDemoCharacter::StopSprinting);

	//Slide
	PlayerInputComponent->BindAction("Slide", IE_Pressed, this, &APortfolioDemoCharacter::Slide);

}

void APortfolioDemoCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	//Jump();
}

void APortfolioDemoCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	//StopJumping();
}
 
void APortfolioDemoCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void APortfolioDemoCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void APortfolioDemoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!IsClimbing)
	{
		DetectClimb();
	}
	if(!bWallRunning)
	{
		WallRun();
	}
}

void APortfolioDemoCharacter::ResetClimbToWalk(EMovementMode Movement)
{
	GetCharacterMovement()->SetMovementMode(Movement);	

	IsClimbing = false;
}

void APortfolioDemoCharacter::ResetSlideToWalk()
{
	IsSlide = false;
	IsClimbing = false;
	if (GetCharacterMovement()->IsCrouching())
	{
		UnCrouch();
	}
	//GetCharacterMovement()->GravityScale = 1;
	
}

void APortfolioDemoCharacter::FellOutOfWorld(const UDamageType& dmgType)
{
	OnDeath(true);
}

float APortfolioDemoCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	UE_LOG(LogTemp, Warning, TEXT("PortfolioDemoCharacter::TakeDamage Damage %.2f"), Damage);

	if (HealthComponent)
	{
		HealthComponent->TakeDamage(Damage);
		if (HealthComponent->IsDead())
		{
			OnDeath(false);
		}
	}
	return Damage;
}

void APortfolioDemoCharacter::HandleItemCollected()
{
	ItemsCollected++;

	//playing effects
	PC->PlayerCameraManager->StartCameraShake(CamShake, 1.0f);

	ItemCollected();
}

void APortfolioDemoCharacter::BeginPlay()
{
	Super::BeginPlay();

	PC = GetWorld()->GetFirstPlayerController();
}

void APortfolioDemoCharacter::AttachToWall(int Direction, float WallSpeed, FHitResult HitResult)
{
	//Stop Character
	GetCharacterMovement()->StopMovementKeepPathing();

	// Set rotation of character 90 or -90 degrees of the normal rotation.
	FRotator RotationOf90Degrees(0, Direction, 0);
	FRotator LeftOrRightDirection = RotationOf90Degrees.RotateVector(HitResult.Normal).Rotation();
	FRotator newRotation(0, LeftOrRightDirection.Yaw, 0);
	SetActorRotation(newRotation, ETeleportType::TeleportPhysics);
	// Next we are going to take the normal vector and grab its rotation and grab its right vector.
	// We times it by with wallspeed, then add the actors current location.
	FVector NewLoc = FRotationMatrix(HitResult.Normal.Rotation()).GetScaledAxis(EAxis::Y) * WallSpeed;
	if (Direction == LEFT)
	{
		NewLoc = (- NewLoc) + GetActorLocation();
	}		
	else
	{
		NewLoc = NewLoc + GetActorLocation();		
	}

	SetActorLocation(NewLoc);
}

void APortfolioDemoCharacter::OnDeath(bool IsFellOut)
{
	APlayerController* PlayerController = GetController<APlayerController>();

	if (PlayerController)
	{
		PlayerController->RestartLevel();
	}
}

void APortfolioDemoCharacter::Slide()
{
	//crouch and we slide, trigger on startcrouch.
	if (!GetCharacterMovement()->IsCrouching())
	{
		IsClimbing = true;
		Crouch();
	}
	//GetCharacterMovement()->GravityScale = 0;

	float SlideDuration = PlayAnimMontage(SlideMontage, 0.6f);

	if (SlideDuration > 0)
	{
		FTimerDelegate MyDelegate;
		FTimerHandle MyHandle;
		//set timer		
		MyDelegate.BindUObject(this, &APortfolioDemoCharacter::ResetSlideToWalk);
		GetWorld()->GetTimerManager().SetTimer(MyHandle, MyDelegate, SlideDuration + 1, false);
	}
	else
	{
		return;
	}
}

void APortfolioDemoCharacter::DetectClimb()
{
	//forward trace
	FVector Start = GetActorLocation();
	FVector End = Start + (GetActorForwardVector() * 150.0f);
	FHitResult Hit;

	FCollisionShape Capsule;
	Capsule.SetCapsule(GetCapsuleComponent()->GetScaledCapsuleRadius(), GetCapsuleComponent()->GetScaledCapsuleHalfHeight());

	bool bIsBlockingHit = GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, ECC_Visibility, Capsule);

	if (bIsBlockingHit)
	{
		//DrawDebugCapsule(GetWorld(), Hit.ImpactPoint, GetCapsuleComponent()->GetScaledCapsuleHalfHeight(), GetCapsuleComponent()->GetScaledCapsuleRadius(), FQuat::Identity, FColor::Green);
	}
	else
	{
		//DrawDebugCapsule(GetWorld(), End, GetCapsuleComponent()->GetScaledCapsuleHalfHeight(), GetCapsuleComponent()->GetScaledCapsuleRadius(), FQuat::Identity, FColor::Red);
	}

	//sphere trace here is getting the distance and height for the ledge trace
	if (bIsBlockingHit)
	{
		FVector WallNormal = Hit.ImpactPoint;
		FVector WallLocation = Hit.ImpactPoint;

		//perform height trace
		FVector StartHeight = GetActorLocation() + FVector(0.0, 0.0, 500.0f) + (GetActorForwardVector() * GetCapsuleComponent()->GetScaledCapsuleRadius());
		FVector EndHeight = StartHeight - FVector(0.0f, 0.0f, 1000.0f);
		FHitResult HitHeight;

		FCollisionShape CapsuleHeight;
		CapsuleHeight.SetCapsule(GetCapsuleComponent()->GetScaledCapsuleRadius(), GetCapsuleComponent()->GetScaledCapsuleHalfHeight());

		bool bIsBlockingHitHeight = GetWorld()->SweepSingleByChannel(HitHeight, StartHeight, EndHeight, FQuat::Identity, ECC_Visibility, CapsuleHeight);

		if (bIsBlockingHitHeight)
		{
			//DrawDebugCapsule(GetWorld(), HitHeight.ImpactPoint + FVector(0, 0, GetCapsuleComponent()->GetScaledCapsuleHalfHeight()),
				//GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
				//GetCapsuleComponent()->GetScaledCapsuleRadius(),
				//FQuat::Identity, FColor::Blue);
		}
		else
		{
			/*DrawDebugCapsule(GetWorld(), EndHeight, GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
				GetCapsuleComponent()->GetScaledCapsuleRadius(),
				FQuat::Identity, FColor::Orange);*/
		}

		if (bIsBlockingHitHeight)
		{
			const FVector FloorHitLocation = HitHeight.ImpactPoint;
			float DistanceZ = FloorHitLocation.Z - WallLocation.Z; //fill this in
			const float MinRange = 0;
			const float MaxRange = MaxClimbRange;


			FVector ActorLocation = GetActorLocation();
			if (FMath::Abs(ActorLocation.Z) > FMath::Abs(FloorHitLocation.Z))
			{
				//DrawDebugLine(GetWorld(), ActorLocation, FloorHitLocation, FColor::Yellow, false, 2.0f);
				return;
			}
			//the character gets stuck on slopes, walls or any surfaces that is not the floor
			//step height should not be climable
			//waist height should be ignored
			const float MinWaist = 80.0f;
			const float MaxWaist = 200.0f;
			FVector DistanceZ2 = FloorHitLocation - ActorLocation;
			if (FMath::Abs(DistanceZ2.Z) < MinWaist && FMath::Abs(DistanceZ2.Z) < MaxWaist)
			{
				//DrawDebugLine(GetWorld(), ActorLocation, FloorHitLocation, FColor::Orange, false, 2.0f);
				return;
			}
			if (DistanceZ > MinRange && DistanceZ < MaxRange)
			{
				//DrawDebugCapsule(GetWorld(), FloorHitLocation + FVector(0, 0, DistanceZ), GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
					//GetCapsuleComponent()->GetScaledCapsuleRadius(), FQuat::Identity, FColor::Purple, false, 2.0f);

				IsClimbing = true;

				GetCharacterMovement()->SetMovementMode(MOVE_Flying);
				//play a montage with rootmotion
				float ClimbDuration = PlayAnimMontage(ClimbMontage, 1.0f);
				//ok will climb and Not dont climb
				if (ClimbDuration > 0)
				{
					FTimerDelegate MyDelegate;
					FTimerHandle MyHandle;
					//set timer		
					MyDelegate.BindUObject(this, &APortfolioDemoCharacter::ResetClimbToWalk, MOVE_Walking);
					GetWorld()->GetTimerManager().SetTimer(MyHandle, MyDelegate,  ClimbDuration + 0.4f, false);					
				}
				else
				{
					return;
				}
			}
		}
	}
}

void APortfolioDemoCharacter::WallRun()
{
	if (GetCharacterMovement()->IsFalling())
	{
		FHitResult HitResultForward;
		FHitResult HitResultLeft;
		FHitResult HitResulRight;
		FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);

		ECollisionChannel Channel = ECC_WorldStatic;

		FVector Start = GetActorLocation();
		FVector End = GetActorRightVector() * PlayerToWallDistance;
		FVector ForwardEnd = GetActorForwardVector() * PlayerToWallDistance;

		if (GetWorld()->LineTraceSingleByChannel(HitResultLeft, Start, Start + (-End), Channel, TraceParams))
		{
			if (GetWorld()->LineTraceSingleByChannel(HitResultForward, Start, Start + ForwardEnd, Channel, TraceParams))
				AttachToWall(LEFT, WallRunSpeed, HitResultForward);
			else
				AttachToWall(LEFT, WallRunSpeed, HitResultLeft);
		}
		else if (GetWorld()->LineTraceSingleByChannel(HitResulRight, Start, Start + End, Channel, TraceParams))
		{
			if (GetWorld()->LineTraceSingleByChannel(HitResultForward, Start, Start + ForwardEnd, Channel, TraceParams))
				AttachToWall(RIGHT, WallRunSpeed, HitResultForward);
			else
				AttachToWall(RIGHT, WallRunSpeed, HitResulRight);
		}
	}

	/*DrawDebugLine(GetWorld(),GetActorLocation(),GetActorLocation() + (GetActorForwardVector() * PlayerToWallDistance),FColor(255, 0, 0),false, -1, 0, 12.333);

	DrawDebugLine(GetWorld(),GetActorLocation(),GetActorLocation() + (GetActorRightVector() * PlayerToWallDistance),FColor(0, 255, 0),false, -1, 0, 12.333);

	DrawDebugLine(GetWorld(),GetActorLocation(),GetActorLocation() + (-GetActorRightVector() * PlayerToWallDistance),FColor(0, 0, 255),false, -1, 0, 12.333);*/
}

void APortfolioDemoCharacter::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed *= SprintSpeedMultiplier;
}

void APortfolioDemoCharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed /= SprintSpeedMultiplier;
}

void APortfolioDemoCharacter::CallCrouch()
{
	if (!GetCharacterMovement()->IsCrouching())
	{	
		Crouch();
	}
	else
	{		
		UnCrouch();
	}
}

void APortfolioDemoCharacter::Jump()
{
	Super::Jump();
}

void APortfolioDemoCharacter::StopJumping()
{
	Super::StopJumping();

}

void APortfolioDemoCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APortfolioDemoCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
