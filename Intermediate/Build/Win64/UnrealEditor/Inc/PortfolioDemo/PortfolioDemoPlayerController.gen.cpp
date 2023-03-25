// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/PortfolioDemoPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolioDemoPlayerController() {}
// Cross Module References
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoPlayerController_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_APortfolioDemoPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	void APortfolioDemoPlayerController::StaticRegisterNativesAPortfolioDemoPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortfolioDemoPlayerController);
	UClass* Z_Construct_UClass_APortfolioDemoPlayerController_NoRegister()
	{
		return APortfolioDemoPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APortfolioDemoPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortfolioDemoPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioDemoPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PortfolioDemoPlayerController.h" },
		{ "ModuleRelativePath", "PortfolioDemoPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortfolioDemoPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortfolioDemoPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortfolioDemoPlayerController_Statics::ClassParams = {
		&APortfolioDemoPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortfolioDemoPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioDemoPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortfolioDemoPlayerController()
	{
		if (!Z_Registration_Info_UClass_APortfolioDemoPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortfolioDemoPlayerController.OuterSingleton, Z_Construct_UClass_APortfolioDemoPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortfolioDemoPlayerController.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<APortfolioDemoPlayerController>()
	{
		return APortfolioDemoPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortfolioDemoPlayerController);
	struct Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortfolioDemoPlayerController, APortfolioDemoPlayerController::StaticClass, TEXT("APortfolioDemoPlayerController"), &Z_Registration_Info_UClass_APortfolioDemoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolioDemoPlayerController), 1371884947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoPlayerController_h_545397996(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_PortfolioDemoPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
