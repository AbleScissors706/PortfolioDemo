// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TeleporterBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PORTFOLIODEMO_TeleporterBox_generated_h
#error "TeleporterBox.generated.h already included, missing '#pragma once' in TeleporterBox.h"
#endif
#define PORTFOLIODEMO_TeleporterBox_generated_h

#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_SPARSE_DATA
#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitTeleporter); \
	DECLARE_FUNCTION(execEnterTeleporter);


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitTeleporter); \
	DECLARE_FUNCTION(execEnterTeleporter);


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_ACCESSORS
#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporterBox(); \
	friend struct Z_Construct_UClass_ATeleporterBox_Statics; \
public: \
	DECLARE_CLASS(ATeleporterBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterBox)


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATeleporterBox(); \
	friend struct Z_Construct_UClass_ATeleporterBox_Statics; \
public: \
	DECLARE_CLASS(ATeleporterBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterBox)


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporterBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporterBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterBox(ATeleporterBox&&); \
	NO_API ATeleporterBox(const ATeleporterBox&); \
public: \
	NO_API virtual ~ATeleporterBox();


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterBox(ATeleporterBox&&); \
	NO_API ATeleporterBox(const ATeleporterBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporterBox) \
	NO_API virtual ~ATeleporterBox();


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_15_PROLOG
#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_RPC_WRAPPERS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_ACCESSORS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_INCLASS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_ACCESSORS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_INCLASS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIODEMO_API UClass* StaticClass<class ATeleporterBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioDemo_Source_PortfolioDemo_TeleporterBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
