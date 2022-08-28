// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameModeBase() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongGameModeBase_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References
	void APongGameModeBase::StaticRegisterNativesAPongGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongGameModeBase);
	UClass* Z_Construct_UClass_APongGameModeBase_NoRegister()
	{
		return APongGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APongGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PongGameModeBase.h" },
		{ "ModuleRelativePath", "PongGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongGameModeBase_Statics::ClassParams = {
		&APongGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APongGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongGameModeBase.OuterSingleton, Z_Construct_UClass_APongGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongGameModeBase.OuterSingleton;
	}
	template<> PONG_API UClass* StaticClass<APongGameModeBase>()
	{
		return APongGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameModeBase);
	struct Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongGameModeBase, APongGameModeBase::StaticClass, TEXT("APongGameModeBase"), &Z_Registration_Info_UClass_APongGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongGameModeBase), 3511025381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongGameModeBase_h_649216314(TEXT("/Script/Pong"),
		Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pong_Source_Pong_PongGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
