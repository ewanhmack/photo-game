// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotography_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Photography;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Photography()
	{
		if (!Z_Registration_Info_UPackage__Script_Photography.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Photography",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x06C51AD9,
				0xAB6AD47C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Photography.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Photography.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Photography(Z_Construct_UPackage__Script_Photography, TEXT("/Script/Photography"), Z_Registration_Info_UPackage__Script_Photography, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x06C51AD9, 0xAB6AD47C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
