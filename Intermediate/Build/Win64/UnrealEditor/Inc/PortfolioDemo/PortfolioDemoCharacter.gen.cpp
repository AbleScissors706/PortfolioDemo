// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/PortfolioDemoCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolioDemoCharacter() {}
// Cross Module References
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoCharacter_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APortfolioDemoCharacter::execResetSlideToWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSlideToWalk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortfolioDemoCharacter::execResetClimbToWalk)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Movement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetClimbToWalk(EMovementMode(Z_Param_Movement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortfolioDemoCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void APortfolioDemoCharacter::StaticRegisterNativesAPortfolioDemoCharacter()
	{
		UClass* Class = APortfolioDemoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &APortfolioDemoCharacter::execFire },
			{ "ResetClimbToWalk", &APortfolioDemoCharacter::execResetClimbToWalk },
			{ "ResetSlideToWalk", &APortfolioDemoCharacter::execResetSlideToWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that handles firing projectiles.\n" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Function that handles firing projectiles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics
	{
		struct PortfolioDemoCharacter_eventResetClimbToWalk_Parms
		{
			TEnumAsByte<EMovementMode> Movement;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Movement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortfolioDemoCharacter_eventResetClimbToWalk_Parms, Movement), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) }; // 1544502984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::NewProp_Movement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "ResetClimbToWalk", nullptr, nullptr, sizeof(Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::PortfolioDemoCharacter_eventResetClimbToWalk_Parms), Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "ResetSlideToWalk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortfolioDemoCharacter);
	UClass* Z_Construct_UClass_APortfolioDemoCharacter_NoRegister()
	{
		return APortfolioDemoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APortfolioDemoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlideMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortfolioDemoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortfolioDemoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_Fire, "Fire" }, // 2743759998
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk, "ResetClimbToWalk" }, // 2675047589
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_ResetSlideToWalk, "ResetSlideToWalk" }, // 205106213
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PortfolioDemoCharacter.h" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Gun muzzle offset from the camera location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// Projectile class to spawn.\n" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Projectile class to spawn." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData[] = {
		{ "Category", "Character Movement: Climb" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange = { "MaxClimbRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, MaxClimbRange), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData[] = {
		{ "Category", "PortfolioDemoCharacter" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage = { "ClimbMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, ClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData[] = {
		{ "Category", "PortfolioDemoCharacter" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage = { "SlideMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortfolioDemoCharacter, SlideMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortfolioDemoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortfolioDemoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortfolioDemoCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::ClassParams = {
		&APortfolioDemoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortfolioDemoCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortfolioDemoCharacter()
	{
		if (!Z_Registration_Info_UClass_APortfolioDemoCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortfolioDemoCharacter.OuterSingleton, Z_Construct_UClass_APortfolioDemoCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortfolioDemoCharacter.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<APortfolioDemoCharacter>()
	{
		return APortfolioDemoCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortfolioDemoCharacter);
	struct Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortfolioDemoCharacter, APortfolioDemoCharacter::StaticClass, TEXT("APortfolioDemoCharacter"), &Z_Registration_Info_UClass_APortfolioDemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolioDemoCharacter), 60996206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_2198927508(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
