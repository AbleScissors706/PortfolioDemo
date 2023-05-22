// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/InteractableDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_AInteractableDoor();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_AInteractableDoor_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
// End Cross Module References
	void AInteractableDoor::StaticRegisterNativesAInteractableDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableDoor);
	UClass* Z_Construct_UClass_AInteractableDoor_NoRegister()
	{
		return AInteractableDoor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorInteractionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorInteractionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractableDoor.h" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData[] = {
		{ "Category", "InteractableDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent = { "DoorInteractionComponent", nullptr, (EPropertyFlags)0x0020080002080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableDoor, DoorInteractionComponent), Z_Construct_UClass_UDoorInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoor_Statics::ClassParams = {
		&AInteractableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableDoor()
	{
		if (!Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton, Z_Construct_UClass_AInteractableDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<AInteractableDoor>()
	{
		return AInteractableDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoor);
	AInteractableDoor::~AInteractableDoor() {}
	struct Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_InteractableDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_InteractableDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableDoor, AInteractableDoor::StaticClass, TEXT("AInteractableDoor"), &Z_Registration_Info_UClass_AInteractableDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableDoor), 110219661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_InteractableDoor_h_474578084(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_InteractableDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSPECTRUM___PROGRAMMING_ProjectPortfolioDemo_PortfolioDemo_Source_PortfolioDemo_InteractableDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
