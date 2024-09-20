// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/LeftArmActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeftArmActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftArmActor();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftArmActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class ALeftArmActor
void ALeftArmActor::StaticRegisterNativesALeftArmActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeftArmActor);
UClass* Z_Construct_UClass_ALeftArmActor_NoRegister()
{
	return ALeftArmActor::StaticClass();
}
struct Z_Construct_UClass_ALeftArmActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeftArmActor.h" },
		{ "ModuleRelativePath", "LeftArmActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LeftArmActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeftArmActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeftArmActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeftArmActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeftArmActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeftArmActor_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftArmActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeftArmActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftArmActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeftArmActor_Statics::ClassParams = {
	&ALeftArmActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeftArmActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeftArmActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftArmActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeftArmActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeftArmActor()
{
	if (!Z_Registration_Info_UClass_ALeftArmActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeftArmActor.OuterSingleton, Z_Construct_UClass_ALeftArmActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeftArmActor.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<ALeftArmActor>()
{
	return ALeftArmActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeftArmActor);
ALeftArmActor::~ALeftArmActor() {}
// End Class ALeftArmActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftArmActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeftArmActor, ALeftArmActor::StaticClass, TEXT("ALeftArmActor"), &Z_Registration_Info_UClass_ALeftArmActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeftArmActor), 2727835358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftArmActor_h_3788804514(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftArmActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftArmActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
