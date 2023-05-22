// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/DoorInteractionComponent.h"
#include "Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractionComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_UDoorInteractionComponent();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister();
	PORTFOLIODEMO_API UEnum* Z_Construct_UEnum_PortfolioDemo_EDoorState();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorState;
	static UEnum* EDoorState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDoorState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDoorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PortfolioDemo_EDoorState, Z_Construct_UPackage__Script_PortfolioDemo(), TEXT("EDoorState"));
		}
		return Z_Registration_Info_UEnum_EDoorState.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UEnum* StaticEnum<EDoorState>()
	{
		return EDoorState_StaticEnum();
	}
	struct Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enumerators[] = {
		{ "EDoorState::DS_Closed", (int64)EDoorState::DS_Closed },
		{ "EDoorState::DS_Open", (int64)EDoorState::DS_Open },
		{ "EDoorState::DS_Locked", (int64)EDoorState::DS_Locked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enum_MetaDataParams[] = {
		{ "DS_Closed.Displayname", "Closed" },
		{ "DS_Closed.Name", "EDoorState::DS_Closed" },
		{ "DS_Locked.Displayname", "Locked" },
		{ "DS_Locked.Name", "EDoorState::DS_Locked" },
		{ "DS_Open.Displayname", "Open" },
		{ "DS_Open.Name", "EDoorState::DS_Open" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PortfolioDemo,
		nullptr,
		"EDoorState",
		"EDoorState",
		Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PortfolioDemo_EDoorState()
	{
		if (!Z_Registration_Info_UEnum_EDoorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorState.InnerSingleton, Z_Construct_UEnum_PortfolioDemo_EDoorState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDoorState.InnerSingleton;
	}
	void UDoorInteractionComponent::StaticRegisterNativesUDoorInteractionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorInteractionComponent);
	UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToRotate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpenCurve;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DoorState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorInteractionComponent.h" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDoorInteractionComponent, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeToRotate_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeToRotate = { "TimeToRotate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDoorInteractionComponent, TimeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeToRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDoorInteractionComponent, TriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenCurve_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenCurve = { "OpenCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDoorInteractionComponent, OpenCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "DoorInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState = { "DoorState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDoorInteractionComponent, DoorState), Z_Construct_UEnum_PortfolioDemo_EDoorState, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState_MetaData)) }; // 435300694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeToRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TriggerBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams = {
		&UDoorInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton, Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<UDoorInteractionComponent>()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteractionComponent);
	UDoorInteractionComponent::~UDoorInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::EnumInfo[] = {
		{ EDoorState_StaticEnum, TEXT("EDoorState"), &Z_Registration_Info_UEnum_EDoorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 435300694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorInteractionComponent, UDoorInteractionComponent::StaticClass, TEXT("UDoorInteractionComponent"), &Z_Registration_Info_UClass_UDoorInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorInteractionComponent), 1056539390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_4139815132(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
