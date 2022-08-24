// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongPlayer() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongPlayer_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References
	void APongPlayer::StaticRegisterNativesAPongPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongPlayer);
	UClass* Z_Construct_UClass_APongPlayer_NoRegister()
	{
		return APongPlayer::StaticClass();
	}
	struct Z_Construct_UClass_APongPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PongPlayer.h" },
		{ "ModuleRelativePath", "PongPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongPlayer_Statics::ClassParams = {
		&APongPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APongPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongPlayer()
	{
		if (!Z_Registration_Info_UClass_APongPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongPlayer.OuterSingleton, Z_Construct_UClass_APongPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongPlayer.OuterSingleton;
	}
	template<> PONG_API UClass* StaticClass<APongPlayer>()
	{
		return APongPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongPlayer);
	struct Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongPlayer, APongPlayer::StaticClass, TEXT("APongPlayer"), &Z_Registration_Info_UClass_APongPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongPlayer), 2114950087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongPlayer_h_1552782696(TEXT("/Script/Pong"),
		Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
