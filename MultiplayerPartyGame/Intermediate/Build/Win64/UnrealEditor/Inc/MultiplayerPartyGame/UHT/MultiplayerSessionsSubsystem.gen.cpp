// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/MultiplayerSessionsSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class UMultiplayerSessionsSubsystem
void UMultiplayerSessionsSubsystem::StaticRegisterNativesUMultiplayerSessionsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerSessionsSubsystem);
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister()
{
	return UMultiplayerSessionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultiplayerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams = {
	&UMultiplayerSessionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<UMultiplayerSessionsSubsystem>()
{
	return UMultiplayerSessionsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionsSubsystem);
UMultiplayerSessionsSubsystem::~UMultiplayerSessionsSubsystem() {}
// End Class UMultiplayerSessionsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GDWProject_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionsSubsystem, UMultiplayerSessionsSubsystem::StaticClass, TEXT("UMultiplayerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionsSubsystem), 2432064672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GDWProject_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_3368035136(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_GDWProject_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GDWProject_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
