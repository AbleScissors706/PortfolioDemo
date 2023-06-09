// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/SweepTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSweepTrace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_USweepTrace();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_USweepTrace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	void USweepTrace::StaticRegisterNativesUSweepTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USweepTrace);
	UClass* Z_Construct_UClass_USweepTrace_NoRegister()
	{
		return USweepTrace::StaticClass();
	}
	struct Z_Construct_UClass_USweepTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USweepTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USweepTrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SweepTrace.h" },
		{ "ModuleRelativePath", "SweepTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USweepTrace_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "SweepTrace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USweepTrace_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USweepTrace, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_USweepTrace_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USweepTrace_Statics::NewProp_TraceDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USweepTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USweepTrace_Statics::NewProp_TraceDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USweepTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USweepTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USweepTrace_Statics::ClassParams = {
		&USweepTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USweepTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USweepTrace_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USweepTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USweepTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USweepTrace()
	{
		if (!Z_Registration_Info_UClass_USweepTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USweepTrace.OuterSingleton, Z_Construct_UClass_USweepTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USweepTrace.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<USweepTrace>()
	{
		return USweepTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USweepTrace);
	USweepTrace::~USweepTrace() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_SweepTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_SweepTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USweepTrace, USweepTrace::StaticClass, TEXT("USweepTrace"), &Z_Registration_Info_UClass_USweepTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USweepTrace), 3553591363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_SweepTrace_h_542668936(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_SweepTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_SweepTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
