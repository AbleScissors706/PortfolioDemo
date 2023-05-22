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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoCharacter();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoCharacter_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	DEFINE_FUNCTION(APortfolioDemoCharacter::execHandleItemCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleItemCollected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortfolioDemoCharacter::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
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
	static FName NAME_APortfolioDemoCharacter_ItemCollected = FName(TEXT("ItemCollected"));
	void APortfolioDemoCharacter::ItemCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortfolioDemoCharacter_ItemCollected),NULL);
	}
	void APortfolioDemoCharacter::StaticRegisterNativesAPortfolioDemoCharacter()
	{
		UClass* Class = APortfolioDemoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleItemCollected", &APortfolioDemoCharacter::execHandleItemCollected },
			{ "IsAlive", &APortfolioDemoCharacter::execIsAlive },
			{ "ResetClimbToWalk", &APortfolioDemoCharacter::execResetClimbToWalk },
			{ "ResetSlideToWalk", &APortfolioDemoCharacter::execResetSlideToWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "HandleItemCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics
	{
		struct PortfolioDemoCharacter_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PortfolioDemoCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PortfolioDemoCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "IsAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::PortfolioDemoCharacter_eventIsAlive_Parms), Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortfolioDemoCharacter, nullptr, "ItemCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected_Statics::FuncParams);
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PortfolioDemoCharacter_eventResetClimbToWalk_Parms, Movement), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) }; // 1544502984
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsClimbing_MetaData[];
#endif
		static void NewProp_IsClimbing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClimbing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSlide_MetaData[];
#endif
		static void NewProp_IsSlide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSlide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallRunning_MetaData[];
#endif
		static void NewProp_bWallRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsCollected_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemsCollected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallRunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WallRunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToWallDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerToWallDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secounds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Secounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlideMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CamShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortfolioDemoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortfolioDemoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_HandleItemCollected, "HandleItemCollected" }, // 3498701723
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_IsAlive, "IsAlive" }, // 92268720
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_ItemCollected, "ItemCollected" }, // 3908314330
		{ &Z_Construct_UFunction_APortfolioDemoCharacter_ResetClimbToWalk, "ResetClimbToWalk" }, // 664439053
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom_MetaData)) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
		{ "ToolTip", "Gun muzzle offset from the camera location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData[] = {
		{ "Category", "Character Movement: Climb" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange = { "MaxClimbRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, MaxClimbRange), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing_SetBit(void* Obj)
	{
		((APortfolioDemoCharacter*)Obj)->IsClimbing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing = { "IsClimbing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APortfolioDemoCharacter), &Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide_SetBit(void* Obj)
	{
		((APortfolioDemoCharacter*)Obj)->IsSlide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide = { "IsSlide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APortfolioDemoCharacter), &Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning_SetBit(void* Obj)
	{
		((APortfolioDemoCharacter*)Obj)->bWallRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning = { "bWallRunning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APortfolioDemoCharacter), &Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ItemsCollected_MetaData[] = {
		{ "Category", "PortfolioDemoCharacter" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ItemsCollected = { "ItemsCollected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, ItemsCollected), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ItemsCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ItemsCollected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_WallRunSpeed_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_WallRunSpeed = { "WallRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, WallRunSpeed), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_WallRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_WallRunSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_PlayerToWallDistance_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_PlayerToWallDistance = { "PlayerToWallDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, PlayerToWallDistance), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_PlayerToWallDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_PlayerToWallDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "WorldTimer" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, Minutes), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Secounds_MetaData[] = {
		{ "Category", "WorldTimer" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Secounds = { "Secounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, Secounds), METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Secounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Secounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage = { "ClimbMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, ClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage = { "SlideMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, SlideMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CamShake_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "PortfolioDemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CamShake = { "CamShake", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortfolioDemoCharacter, CamShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CamShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CamShake_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortfolioDemoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SprintSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_MaxClimbRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsClimbing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_IsSlide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_bWallRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ItemsCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_WallRunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_PlayerToWallDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_Secounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_ClimbMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_SlideMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortfolioDemoCharacter_Statics::NewProp_CamShake,
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
	APortfolioDemoCharacter::~APortfolioDemoCharacter() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortfolioDemoCharacter, APortfolioDemoCharacter::StaticClass, TEXT("APortfolioDemoCharacter"), &Z_Registration_Info_UClass_APortfolioDemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolioDemoCharacter), 3604663464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_595680474(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
