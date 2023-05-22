// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/PortFolioDemoGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortFolioDemoGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortFolioDemoGameModeBase();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortFolioDemoGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	void APortFolioDemoGameModeBase::StaticRegisterNativesAPortFolioDemoGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortFolioDemoGameModeBase);
	UClass* Z_Construct_UClass_APortFolioDemoGameModeBase_NoRegister()
	{
		return APortFolioDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APortFolioDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PortFolioDemoGameModeBase.h" },
		{ "ModuleRelativePath", "PortFolioDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "PortFolioDemoGameModeBase" },
		{ "ModuleRelativePath", "PortFolioDemoGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APortFolioDemoGameModeBase, ObjectiveWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::NewProp_ObjectiveWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortFolioDemoGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::ClassParams = {
		&APortFolioDemoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortFolioDemoGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APortFolioDemoGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortFolioDemoGameModeBase.OuterSingleton, Z_Construct_UClass_APortFolioDemoGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortFolioDemoGameModeBase.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<APortFolioDemoGameModeBase>()
	{
		return APortFolioDemoGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortFolioDemoGameModeBase);
	APortFolioDemoGameModeBase::~APortFolioDemoGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortFolioDemoGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortFolioDemoGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortFolioDemoGameModeBase, APortFolioDemoGameModeBase::StaticClass, TEXT("APortFolioDemoGameModeBase"), &Z_Registration_Info_UClass_APortFolioDemoGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortFolioDemoGameModeBase), 1513926381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortFolioDemoGameModeBase_h_2637456934(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortFolioDemoGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_PortFolioDemoGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
