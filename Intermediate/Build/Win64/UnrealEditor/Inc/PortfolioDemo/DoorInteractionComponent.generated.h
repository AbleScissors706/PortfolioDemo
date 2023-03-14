// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIODEMO_DoorInteractionComponent_generated_h
#error "DoorInteractionComponent.generated.h already included, missing '#pragma once' in DoorInteractionComponent.h"
#endif
#define PORTFOLIODEMO_DoorInteractionComponent_generated_h

#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_SPARSE_DATA
#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_RPC_WRAPPERS
#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioDemo"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public:


#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorInteractionComponent)


#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_21_PROLOG
#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_RPC_WRAPPERS \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_INCLASS \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_SPARSE_DATA \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIODEMO_API UClass* StaticClass<class UDoorInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioDemo_Source_PortfolioDemo_DoorInteractionComponent_h


#define FOREACH_ENUM_EDOORSTATE(op) \
	op(EDoorState::DS_Closed) \
	op(EDoorState::DS_Open) \
	op(EDoorState::DS_Locked) 

enum class EDoorState;
template<> PORTFOLIODEMO_API UEnum* StaticEnum<EDoorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
