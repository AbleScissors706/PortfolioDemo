// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenDoorWithLerp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PORTFOLIODEMO_OpenDoorWithLerp_generated_h
#error "OpenDoorWithLerp.generated.h already included, missing '#pragma once' in OpenDoorWithLerp.h"
#endif
#define PORTFOLIODEMO_OpenDoorWithLerp_generated_h

#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_SPARSE_DATA
#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_ACCESSORS
#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenDoorWithLerp(); \
	friend struct Z_Construct_UClass_AOpenDoorWithLerp_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorWithLerp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorWithLerp)


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAOpenDoorWithLerp(); \
	friend struct Z_Construct_UClass_AOpenDoorWithLerp_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorWithLerp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorWithLerp)


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenDoorWithLerp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenDoorWithLerp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorWithLerp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorWithLerp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorWithLerp(AOpenDoorWithLerp&&); \
	NO_API AOpenDoorWithLerp(const AOpenDoorWithLerp&); \
public: \
	NO_API virtual ~AOpenDoorWithLerp();


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorWithLerp(AOpenDoorWithLerp&&); \
	NO_API AOpenDoorWithLerp(const AOpenDoorWithLerp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorWithLerp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorWithLerp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenDoorWithLerp) \
	NO_API virtual ~AOpenDoorWithLerp();


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_10_PROLOG
#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_RPC_WRAPPERS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_ACCESSORS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_INCLASS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_ACCESSORS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_INCLASS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIODEMO_API UClass* StaticClass<class AOpenDoorWithLerp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioDemo_Source_PortfolioDemo_OpenDoorWithLerp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
