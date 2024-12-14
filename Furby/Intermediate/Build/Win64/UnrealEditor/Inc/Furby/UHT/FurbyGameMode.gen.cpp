// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Furby/FurbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurbyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FURBY_API UClass* Z_Construct_UClass_AFurbyGameMode();
FURBY_API UClass* Z_Construct_UClass_AFurbyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Furby();
// End Cross Module References

// Begin Class AFurbyGameMode
void AFurbyGameMode::StaticRegisterNativesAFurbyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFurbyGameMode);
UClass* Z_Construct_UClass_AFurbyGameMode_NoRegister()
{
	return AFurbyGameMode::StaticClass();
}
struct Z_Construct_UClass_AFurbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FurbyGameMode.h" },
		{ "ModuleRelativePath", "FurbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFurbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFurbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Furby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFurbyGameMode_Statics::ClassParams = {
	&AFurbyGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFurbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFurbyGameMode()
{
	if (!Z_Registration_Info_UClass_AFurbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFurbyGameMode.OuterSingleton, Z_Construct_UClass_AFurbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFurbyGameMode.OuterSingleton;
}
template<> FURBY_API UClass* StaticClass<AFurbyGameMode>()
{
	return AFurbyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFurbyGameMode);
AFurbyGameMode::~AFurbyGameMode() {}
// End Class AFurbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GAMINGPC_STORE_Desktop_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFurbyGameMode, AFurbyGameMode::StaticClass, TEXT("AFurbyGameMode"), &Z_Registration_Info_UClass_AFurbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFurbyGameMode), 945272276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GAMINGPC_STORE_Desktop_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyGameMode_h_3717759451(TEXT("/Script/Furby"),
	Z_CompiledInDeferFile_FID_Users_GAMINGPC_STORE_Desktop_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GAMINGPC_STORE_Desktop_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
