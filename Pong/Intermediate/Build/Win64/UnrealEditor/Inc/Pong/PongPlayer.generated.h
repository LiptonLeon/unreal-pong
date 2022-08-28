// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongPlayer_generated_h
#error "PongPlayer.generated.h already included, missing '#pragma once' in PongPlayer.h"
#endif
#define PONG_PongPlayer_generated_h

#define FID_Pong_Source_Pong_PongPlayer_h_12_SPARSE_DATA
#define FID_Pong_Source_Pong_PongPlayer_h_12_RPC_WRAPPERS
#define FID_Pong_Source_Pong_PongPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pong_Source_Pong_PongPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongPlayer(); \
	friend struct Z_Construct_UClass_APongPlayer_Statics; \
public: \
	DECLARE_CLASS(APongPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayer)


#define FID_Pong_Source_Pong_PongPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPongPlayer(); \
	friend struct Z_Construct_UClass_APongPlayer_Statics; \
public: \
	DECLARE_CLASS(APongPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayer)


#define FID_Pong_Source_Pong_PongPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayer(APongPlayer&&); \
	NO_API APongPlayer(const APongPlayer&); \
public:


#define FID_Pong_Source_Pong_PongPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayer(APongPlayer&&); \
	NO_API APongPlayer(const APongPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongPlayer)


#define FID_Pong_Source_Pong_PongPlayer_h_9_PROLOG
#define FID_Pong_Source_Pong_PongPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pong_Source_Pong_PongPlayer_h_12_SPARSE_DATA \
	FID_Pong_Source_Pong_PongPlayer_h_12_RPC_WRAPPERS \
	FID_Pong_Source_Pong_PongPlayer_h_12_INCLASS \
	FID_Pong_Source_Pong_PongPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pong_Source_Pong_PongPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pong_Source_Pong_PongPlayer_h_12_SPARSE_DATA \
	FID_Pong_Source_Pong_PongPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pong_Source_Pong_PongPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Pong_Source_Pong_PongPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class APongPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pong_Source_Pong_PongPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
