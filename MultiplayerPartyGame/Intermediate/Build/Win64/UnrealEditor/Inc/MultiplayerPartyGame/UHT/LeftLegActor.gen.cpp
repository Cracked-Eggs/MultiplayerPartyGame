// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/LeftLegActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeftLegActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftLegActor();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftLegActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class ALeftLegActor
void ALeftLegActor::StaticRegisterNativesALeftLegActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeftLegActor);
UClass* Z_Construct_UClass_ALeftLegActor_NoRegister()
{
	return ALeftLegActor::StaticClass();
}
struct Z_Construct_UClass_ALeftLegActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeftLegActor.h" },
		{ "ModuleRelativePath", "LeftLegActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LeftLegActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeftLegActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeftLegActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeftLegActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeftLegActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeftLegActor_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftLegActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeftLegActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftLegActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeftLegActor_Statics::ClassParams = {
	&ALeftLegActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeftLegActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeftLegActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftLegActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeftLegActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeftLegActor()
{
	if (!Z_Registration_Info_UClass_ALeftLegActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeftLegActor.OuterSingleton, Z_Construct_UClass_ALeftLegActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeftLegActor.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<ALeftLegActor>()
{
	return ALeftLegActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeftLegActor);
ALeftLegActor::~ALeftLegActor() {}
// End Class ALeftLegActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftLegActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeftLegActor, ALeftLegActor::StaticClass, TEXT("ALeftLegActor"), &Z_Registration_Info_UClass_ALeftLegActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeftLegActor), 1834018805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftLegActor_h_3687193611(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftLegActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_LeftLegActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
