// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BassBallGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BassBallGameMode_generated_h
#error "BassBallGameMode.generated.h already included, missing '#pragma once' in BassBallGameMode.h"
#endif
#define BASEBALL_BassBallGameMode_generated_h

#define FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMessageFromClient); \
	DECLARE_FUNCTION(execGenerateNewNumbers);


#define FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABassBallGameMode(); \
	friend struct Z_Construct_UClass_ABassBallGameMode_Statics; \
public: \
	DECLARE_CLASS(ABassBallGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABassBallGameMode)


#define FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABassBallGameMode(ABassBallGameMode&&); \
	ABassBallGameMode(const ABassBallGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABassBallGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABassBallGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABassBallGameMode) \
	NO_API virtual ~ABassBallGameMode();


#define FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_7_PROLOG
#define FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABassBallGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
