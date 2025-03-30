// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject_Garcia_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyProject_Garcia;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyProject_Garcia()
	{
		if (!Z_Registration_Info_UPackage__Script_MyProject_Garcia.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyProject_Garcia",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD5E67B9D,
				0xE92A90C3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyProject_Garcia.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyProject_Garcia.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyProject_Garcia(Z_Construct_UPackage__Script_MyProject_Garcia, TEXT("/Script/MyProject_Garcia"), Z_Registration_Info_UPackage__Script_MyProject_Garcia, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD5E67B9D, 0xE92A90C3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
