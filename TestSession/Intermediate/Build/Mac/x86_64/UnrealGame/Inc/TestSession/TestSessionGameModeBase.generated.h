// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTSESSION_TestSessionGameModeBase_generated_h
#error "TestSessionGameModeBase.generated.h already included, missing '#pragma once' in TestSessionGameModeBase.h"
#endif
#define TESTSESSION_TestSessionGameModeBase_generated_h

#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_SPARSE_DATA
#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_RPC_WRAPPERS
#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestSessionGameModeBase(); \
	friend struct Z_Construct_UClass_ATestSessionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATestSessionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestSession"), NO_API) \
	DECLARE_SERIALIZER(ATestSessionGameModeBase)


#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestSessionGameModeBase(); \
	friend struct Z_Construct_UClass_ATestSessionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATestSessionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestSession"), NO_API) \
	DECLARE_SERIALIZER(ATestSessionGameModeBase)


#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestSessionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestSessionGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestSessionGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestSessionGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestSessionGameModeBase(ATestSessionGameModeBase&&); \
	NO_API ATestSessionGameModeBase(const ATestSessionGameModeBase&); \
public:


#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestSessionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestSessionGameModeBase(ATestSessionGameModeBase&&); \
	NO_API ATestSessionGameModeBase(const ATestSessionGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestSessionGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestSessionGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestSessionGameModeBase)


#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_12_PROLOG
#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_SPARSE_DATA \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_RPC_WRAPPERS \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_INCLASS \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_SPARSE_DATA \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSESSION_API UClass* StaticClass<class ATestSessionGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestSession_Source_TestSession_TestSessionGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
