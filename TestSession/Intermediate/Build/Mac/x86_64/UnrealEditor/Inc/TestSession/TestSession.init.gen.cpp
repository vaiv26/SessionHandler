// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSession_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestSession;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestSession()
	{
		if (!Z_Registration_Info_UPackage__Script_TestSession.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestSession",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE48DF2D6,
				0x4BB78D66,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestSession.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestSession.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestSession(Z_Construct_UPackage__Script_TestSession, TEXT("/Script/TestSession"), Z_Registration_Info_UPackage__Script_TestSession, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE48DF2D6, 0x4BB78D66));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
