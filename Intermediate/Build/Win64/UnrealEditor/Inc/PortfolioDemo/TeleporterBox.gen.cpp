// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioDemo/TeleporterBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporterBox() {}
// Cross Module References
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_ATeleporterBox_NoRegister();
	PORTFOLIODEMO_API UClass* Z_Construct_UClass_ATeleporterBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_PortfolioDemo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeleporterBox::execExitTeleporter)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitTeleporter(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATeleporterBox::execEnterTeleporter)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterTeleporter(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	void ATeleporterBox::StaticRegisterNativesATeleporterBox()
	{
		UClass* Class = ATeleporterBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterTeleporter", &ATeleporterBox::execEnterTeleporter },
			{ "ExitTeleporter", &ATeleporterBox::execExitTeleporter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics
	{
		struct TeleporterBox_eventEnterTeleporter_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterBox_eventEnterTeleporter_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterBox_eventEnterTeleporter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TeleporterBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporterBox, nullptr, "EnterTeleporter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::TeleporterBox_eventEnterTeleporter_Parms), Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporterBox_EnterTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporterBox_EnterTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics
	{
		struct TeleporterBox_eventExitTeleporter_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterBox_eventExitTeleporter_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterBox_eventExitTeleporter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TeleporterBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporterBox, nullptr, "ExitTeleporter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::TeleporterBox_eventExitTeleporter_Parms), Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporterBox_ExitTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporterBox_ExitTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleporterBox);
	UClass* Z_Construct_UClass_ATeleporterBox_NoRegister()
	{
		return ATeleporterBox::StaticClass();
	}
	struct Z_Construct_UClass_ATeleporterBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherTeleporter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherTeleporter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleporting_MetaData[];
#endif
		static void NewProp_bTeleporting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleporting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleporterBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeleporterBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeleporterBox_EnterTeleporter, "EnterTeleporter" }, // 1368845585
		{ &Z_Construct_UFunction_ATeleporterBox_ExitTeleporter, "ExitTeleporter" }, // 2000962873
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TeleporterBox.h" },
		{ "ModuleRelativePath", "TeleporterBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterBox_Statics::NewProp_otherTeleporter_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "TeleporterBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporterBox_Statics::NewProp_otherTeleporter = { "otherTeleporter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporterBox, otherTeleporter), Z_Construct_UClass_ATeleporterBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporterBox_Statics::NewProp_otherTeleporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterBox_Statics::NewProp_otherTeleporter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting_MetaData[] = {
		{ "ModuleRelativePath", "TeleporterBox.h" },
	};
#endif
	void Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting_SetBit(void* Obj)
	{
		((ATeleporterBox*)Obj)->bTeleporting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting = { "bTeleporting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATeleporterBox), &Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporterBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporterBox_Statics::NewProp_otherTeleporter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporterBox_Statics::NewProp_bTeleporting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleporterBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporterBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleporterBox_Statics::ClassParams = {
		&ATeleporterBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeleporterBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleporterBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleporterBox()
	{
		if (!Z_Registration_Info_UClass_ATeleporterBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleporterBox.OuterSingleton, Z_Construct_UClass_ATeleporterBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeleporterBox.OuterSingleton;
	}
	template<> PORTFOLIODEMO_API UClass* StaticClass<ATeleporterBox>()
	{
		return ATeleporterBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporterBox);
	struct Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeleporterBox, ATeleporterBox::StaticClass, TEXT("ATeleporterBox"), &Z_Registration_Info_UClass_ATeleporterBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleporterBox), 401160503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_3261253272(TEXT("/Script/PortfolioDemo"),
		Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
