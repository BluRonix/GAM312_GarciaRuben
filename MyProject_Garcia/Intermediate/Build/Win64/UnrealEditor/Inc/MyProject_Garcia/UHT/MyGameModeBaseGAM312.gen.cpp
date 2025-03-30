// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Garcia/Public/MyGameModeBaseGAM312.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBaseGAM312() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT_GARCIA_API UClass* Z_Construct_UClass_AMyGameModeBaseGAM312();
MYPROJECT_GARCIA_API UClass* Z_Construct_UClass_AMyGameModeBaseGAM312_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Garcia();
// End Cross Module References

// Begin Class AMyGameModeBaseGAM312
void AMyGameModeBaseGAM312::StaticRegisterNativesAMyGameModeBaseGAM312()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBaseGAM312);
UClass* Z_Construct_UClass_AMyGameModeBaseGAM312_NoRegister()
{
	return AMyGameModeBaseGAM312::StaticClass();
}
struct Z_Construct_UClass_AMyGameModeBaseGAM312_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBaseGAM312.h" },
		{ "ModuleRelativePath", "Public/MyGameModeBaseGAM312.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBaseGAM312>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Garcia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::ClassParams = {
	&AMyGameModeBaseGAM312::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameModeBaseGAM312()
{
	if (!Z_Registration_Info_UClass_AMyGameModeBaseGAM312.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBaseGAM312.OuterSingleton, Z_Construct_UClass_AMyGameModeBaseGAM312_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameModeBaseGAM312.OuterSingleton;
}
template<> MYPROJECT_GARCIA_API UClass* StaticClass<AMyGameModeBaseGAM312>()
{
	return AMyGameModeBaseGAM312::StaticClass();
}
AMyGameModeBaseGAM312::AMyGameModeBaseGAM312(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBaseGAM312);
AMyGameModeBaseGAM312::~AMyGameModeBaseGAM312() {}
// End Class AMyGameModeBaseGAM312

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_MyGameModeBaseGAM312_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBaseGAM312, AMyGameModeBaseGAM312::StaticClass, TEXT("AMyGameModeBaseGAM312"), &Z_Registration_Info_UClass_AMyGameModeBaseGAM312, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBaseGAM312), 734699636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_MyGameModeBaseGAM312_h_4041608063(TEXT("/Script/MyProject_Garcia"),
	Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_MyGameModeBaseGAM312_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_MyGameModeBaseGAM312_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
