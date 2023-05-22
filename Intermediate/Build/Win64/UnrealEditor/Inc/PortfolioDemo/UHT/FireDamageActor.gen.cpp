// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/FireDamageActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireDamageActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_AFireDamageActor();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_AFireDamageActor_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_UDealDamageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	void AFireDamageActor::StaticRegisterNativesAFireDamageActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireDamageActor);
	UClass* Z_Construct_UClass_AFireDamageActor_NoRegister()
	{
		return AFireDamageActor::StaticClass();
	}
	struct Z_Construct_UClass_AFireDamageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToggleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DealDamageComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DealDamageComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireDamageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireDamageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireDamageActor.h" },
		{ "ModuleRelativePath", "FireDamageActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ToggleTime_MetaData[] = {
		{ "Category", "FireDamageActor" },
		{ "ModuleRelativePath", "FireDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ToggleTime = { "ToggleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFireDamageActor, ToggleTime), METADATA_PARAMS(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ToggleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ToggleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireDamageActor_Statics::NewProp_DealDamageComponent_MetaData[] = {
		{ "Category", "FireDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FireDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireDamageActor_Statics::NewProp_DealDamageComponent = { "DealDamageComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFireDamageActor, DealDamageComponent), Z_Construct_UClass_UDealDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_DealDamageComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_DealDamageComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "FireDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FireDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFireDamageActor, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ParticleSystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireDamageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ToggleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireDamageActor_Statics::NewProp_DealDamageComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireDamageActor_Statics::NewProp_ParticleSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireDamageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireDamageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireDamageActor_Statics::ClassParams = {
		&AFireDamageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireDamageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireDamageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireDamageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireDamageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireDamageActor()
	{
		if (!Z_Registration_Info_UClass_AFireDamageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireDamageActor.OuterSingleton, Z_Construct_UClass_AFireDamageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireDamageActor.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<AFireDamageActor>()
	{
		return AFireDamageActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireDamageActor);
	AFireDamageActor::~AFireDamageActor() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_FireDamageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_FireDamageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireDamageActor, AFireDamageActor::StaticClass, TEXT("AFireDamageActor"), &Z_Registration_Info_UClass_AFireDamageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireDamageActor), 1323390905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_FireDamageActor_h_3641232645(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_FireDamageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_FireDamageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
