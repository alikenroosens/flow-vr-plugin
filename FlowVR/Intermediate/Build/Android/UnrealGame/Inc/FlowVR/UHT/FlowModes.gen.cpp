// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowVR/Public/FlowModes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowModes() {}

// Begin Cross Module References
FLOWVR_API UEnum* Z_Construct_UEnum_FlowVR_EFlowModes();
UPackage* Z_Construct_UPackage__Script_FlowVR();
// End Cross Module References

// Begin Enum EFlowModes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowModes;
static UEnum* EFlowModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlowModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlowModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FlowVR_EFlowModes, (UObject*)Z_Construct_UPackage__Script_FlowVR(), TEXT("EFlowModes"));
	}
	return Z_Registration_Info_UEnum_EFlowModes.OuterSingleton;
}
template<> FLOWVR_API UEnum* StaticEnum<EFlowModes>()
{
	return EFlowModes_StaticEnum();
}
struct Z_Construct_UEnum_FlowVR_EFlowModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flow.DisplayName", "Flow" },
		{ "Flow.Name", "EFlowModes::Flow" },
		{ "ModuleRelativePath", "Public/FlowModes.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EFlowModes::Off" },
		{ "Vignette.DisplayName", "Vignette" },
		{ "Vignette.Name", "EFlowModes::Vignette" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowModes::Off", (int64)EFlowModes::Off },
		{ "EFlowModes::Vignette", (int64)EFlowModes::Vignette },
		{ "EFlowModes::Flow", (int64)EFlowModes::Flow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FlowVR_EFlowModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FlowVR,
	nullptr,
	"EFlowModes",
	"EFlowModes",
	Z_Construct_UEnum_FlowVR_EFlowModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FlowVR_EFlowModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FlowVR_EFlowModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FlowVR_EFlowModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FlowVR_EFlowModes()
{
	if (!Z_Registration_Info_UEnum_EFlowModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowModes.InnerSingleton, Z_Construct_UEnum_FlowVR_EFlowModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlowModes.InnerSingleton;
}
// End Enum EFlowModes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowModes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFlowModes_StaticEnum, TEXT("EFlowModes"), &Z_Registration_Info_UEnum_EFlowModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 844463101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowModes_h_4261048934(TEXT("/Script/FlowVR"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowModes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowModes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
