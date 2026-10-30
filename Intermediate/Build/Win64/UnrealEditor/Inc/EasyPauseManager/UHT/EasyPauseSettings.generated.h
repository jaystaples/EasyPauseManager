// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyPauseSettings.h"

#ifdef EASYPAUSEMANAGER_EasyPauseSettings_generated_h
#error "EasyPauseSettings.generated.h already included, missing '#pragma once' in EasyPauseSettings.h"
#endif
#define EASYPAUSEMANAGER_EasyPauseSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEasyPauseSettings *******************************************************
struct Z_Construct_UClass_UEasyPauseSettings_Statics;
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UEasyPauseSettings_NoRegister();

#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyPauseSettings(); \
	friend struct ::Z_Construct_UClass_UEasyPauseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYPAUSEMANAGER_API UClass* ::Z_Construct_UClass_UEasyPauseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEasyPauseSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyPauseManager"), Z_Construct_UClass_UEasyPauseSettings_NoRegister) \
	DECLARE_SERIALIZER(UEasyPauseSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEasyPauseSettings(UEasyPauseSettings&&) = delete; \
	UEasyPauseSettings(const UEasyPauseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyPauseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyPauseSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEasyPauseSettings) \
	NO_API virtual ~UEasyPauseSettings();


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_16_PROLOG
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEasyPauseSettings;

// ********** End Class UEasyPauseSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
