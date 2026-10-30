// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyPauseManager_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	EASYPAUSEMANAGER_API UFunction* Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyPauseManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyPauseManager()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyPauseManager.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/EasyPauseManager",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x87D2EAF5,
			0x289AA5C9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyPauseManager.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_EasyPauseManager.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyPauseManager(Z_Construct_UPackage__Script_EasyPauseManager, TEXT("/Script/EasyPauseManager"), Z_Registration_Info_UPackage__Script_EasyPauseManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x87D2EAF5, 0x289AA5C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
