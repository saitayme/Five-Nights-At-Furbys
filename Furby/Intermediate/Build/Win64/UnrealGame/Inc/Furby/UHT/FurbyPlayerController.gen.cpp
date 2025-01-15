// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Furby/FurbyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurbyPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FURBY_API UClass* Z_Construct_UClass_AFurbyPlayerController();
FURBY_API UClass* Z_Construct_UClass_AFurbyPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Furby();
// End Cross Module References

// Begin Class AFurbyPlayerController
void AFurbyPlayerController::StaticRegisterNativesAFurbyPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFurbyPlayerController);
UClass* Z_Construct_UClass_AFurbyPlayerController_NoRegister()
{
	return AFurbyPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFurbyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FurbyPlayerController.h" },
		{ "ModuleRelativePath", "FurbyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "FurbyPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFurbyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurbyPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFurbyPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFurbyPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurbyPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFurbyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Furby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFurbyPlayerController_Statics::ClassParams = {
	&AFurbyPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFurbyPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFurbyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFurbyPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFurbyPlayerController()
{
	if (!Z_Registration_Info_UClass_AFurbyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFurbyPlayerController.OuterSingleton, Z_Construct_UClass_AFurbyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFurbyPlayerController.OuterSingleton;
}
template<> FURBY_API UClass* StaticClass<AFurbyPlayerController>()
{
	return AFurbyPlayerController::StaticClass();
}
AFurbyPlayerController::AFurbyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFurbyPlayerController);
AFurbyPlayerController::~AFurbyPlayerController() {}
// End Class AFurbyPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFurbyPlayerController, AFurbyPlayerController::StaticClass, TEXT("AFurbyPlayerController"), &Z_Registration_Info_UClass_AFurbyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFurbyPlayerController), 1021708676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyPlayerController_h_2700272087(TEXT("/Script/Furby"),
	Z_CompiledInDeferFile_FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
