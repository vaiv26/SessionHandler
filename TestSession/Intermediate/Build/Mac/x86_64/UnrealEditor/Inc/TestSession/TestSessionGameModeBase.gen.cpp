// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestSession/TestSessionGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSessionGameModeBase() {}
// Cross Module References
	TESTSESSION_API UClass* Z_Construct_UClass_ATestSessionGameModeBase_NoRegister();
	TESTSESSION_API UClass* Z_Construct_UClass_ATestSessionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestSession();
// End Cross Module References
	void ATestSessionGameModeBase::StaticRegisterNativesATestSessionGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestSessionGameModeBase);
	UClass* Z_Construct_UClass_ATestSessionGameModeBase_NoRegister()
	{
		return ATestSessionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestSessionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestSessionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestSessionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestSessionGameModeBase.h" },
		{ "ModuleRelativePath", "TestSessionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestSessionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestSessionGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestSessionGameModeBase_Statics::ClassParams = {
		&ATestSessionGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestSessionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestSessionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestSessionGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATestSessionGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestSessionGameModeBase.OuterSingleton, Z_Construct_UClass_ATestSessionGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestSessionGameModeBase.OuterSingleton;
	}
	template<> TESTSESSION_API UClass* StaticClass<ATestSessionGameModeBase>()
	{
		return ATestSessionGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestSessionGameModeBase);
	struct Z_CompiledInDeferFile_FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestSessionGameModeBase, ATestSessionGameModeBase::StaticClass, TEXT("ATestSessionGameModeBase"), &Z_Registration_Info_UClass_ATestSessionGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestSessionGameModeBase), 3688372197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_1090843751(TEXT("/Script/TestSession"),
		Z_CompiledInDeferFile_FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestSession_Source_TestSession_TestSessionGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
