// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FurbyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FURBY_FurbyProjectile_generated_h
#error "FurbyProjectile.generated.h already included, missing '#pragma once' in FurbyProjectile.h"
#endif
#define FURBY_FurbyProjectile_generated_h

#define FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFurbyProjectile(); \
	friend struct Z_Construct_UClass_AFurbyProjectile_Statics; \
public: \
	DECLARE_CLASS(AFurbyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Furby"), NO_API) \
	DECLARE_SERIALIZER(AFurbyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFurbyProjectile(AFurbyProjectile&&); \
	AFurbyProjectile(const AFurbyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurbyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurbyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFurbyProjectile) \
	NO_API virtual ~AFurbyProjectile();


#define FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_12_PROLOG
#define FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURBY_API UClass* StaticClass<class AFurbyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_David_OneDrive_Dokumente_GitHub_Five_Nights_At_Furbys_Furby_Source_Furby_FurbyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
