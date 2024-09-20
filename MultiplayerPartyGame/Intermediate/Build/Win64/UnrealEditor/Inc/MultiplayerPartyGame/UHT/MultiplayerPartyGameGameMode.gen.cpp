// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/MultiplayerPartyGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPartyGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_AMultiplayerPartyGameGameMode();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_AMultiplayerPartyGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class AMultiplayerPartyGameGameMode
void AMultiplayerPartyGameGameMode::StaticRegisterNativesAMultiplayerPartyGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerPartyGameGameMode);
UClass* Z_Construct_UClass_AMultiplayerPartyGameGameMode_NoRegister()
{
	return AMultiplayerPartyGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerPartyGameGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerPartyGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerPartyGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::ClassParams = {
	&AMultiplayerPartyGameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerPartyGameGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiplayerPartyGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerPartyGameGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerPartyGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerPartyGameGameMode.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<AMultiplayerPartyGameGameMode>()
{
	return AMultiplayerPartyGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerPartyGameGameMode);
AMultiplayerPartyGameGameMode::~AMultiplayerPartyGameGameMode() {}
// End Class AMultiplayerPartyGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerPartyGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerPartyGameGameMode, AMultiplayerPartyGameGameMode::StaticClass, TEXT("AMultiplayerPartyGameGameMode"), &Z_Registration_Info_UClass_AMultiplayerPartyGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerPartyGameGameMode), 3320958185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerPartyGameGameMode_h_620834787(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerPartyGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerPartyGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
