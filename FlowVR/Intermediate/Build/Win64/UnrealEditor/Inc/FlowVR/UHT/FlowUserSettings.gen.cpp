// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowVR/Public/FlowUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowUserSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
FLOWVR_API UClass* Z_Construct_UClass_UFlowUserSettings();
FLOWVR_API UClass* Z_Construct_UClass_UFlowUserSettings_NoRegister();
FLOWVR_API UEnum* Z_Construct_UEnum_FlowVR_EFlowModes();
UPackage* Z_Construct_UPackage__Script_FlowVR();
// End Cross Module References

// Begin Class UFlowUserSettings Function GetCountervectionIntensity
struct Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics
{
	struct FlowUserSettings_eventGetCountervectionIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetCountervectionIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetCountervectionIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::FlowUserSettings_eventGetCountervectionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::FlowUserSettings_eventGetCountervectionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetCountervectionIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCountervectionIntensity();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetCountervectionIntensity

// Begin Class UFlowUserSettings Function GetDistortionIntensity
struct Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics
{
	struct FlowUserSettings_eventGetDistortionIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetDistortionIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetDistortionIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::FlowUserSettings_eventGetDistortionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::FlowUserSettings_eventGetDistortionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetDistortionIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistortionIntensity();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetDistortionIntensity

// Begin Class UFlowUserSettings Function GetFlowUserSettings
struct Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics
{
	struct FlowUserSettings_eventGetFlowUserSettings_Parms
	{
		UFlowUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetFlowUserSettings_Parms, ReturnValue), Z_Construct_UClass_UFlowUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetFlowUserSettings", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::FlowUserSettings_eventGetFlowUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::FlowUserSettings_eventGetFlowUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetFlowUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFlowUserSettings**)Z_Param__Result=UFlowUserSettings::GetFlowUserSettings();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetFlowUserSettings

// Begin Class UFlowUserSettings Function GetHaloIntensity
struct Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics
{
	struct FlowUserSettings_eventGetHaloIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetHaloIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetHaloIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::FlowUserSettings_eventGetHaloIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::FlowUserSettings_eventGetHaloIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetHaloIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHaloIntensity();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetHaloIntensity

// Begin Class UFlowUserSettings Function GetMode
struct Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics
{
	struct FlowUserSettings_eventGetMode_Parms
	{
		EFlowModes ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetMode_Parms, ReturnValue), Z_Construct_UEnum_FlowVR_EFlowModes, METADATA_PARAMS(0, nullptr) }; // 844463101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetMode", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::FlowUserSettings_eventGetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::FlowUserSettings_eventGetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFlowModes*)Z_Param__Result=P_THIS->GetMode();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetMode

// Begin Class UFlowUserSettings Function GetUseCountervection3D
struct Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics
{
	struct FlowUserSettings_eventGetUseCountervection3D_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlowUserSettings_eventGetUseCountervection3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlowUserSettings_eventGetUseCountervection3D_Parms), &Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetUseCountervection3D", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::FlowUserSettings_eventGetUseCountervection3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::FlowUserSettings_eventGetUseCountervection3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetUseCountervection3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseCountervection3D();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetUseCountervection3D

// Begin Class UFlowUserSettings Function GetVignetteIntensity
struct Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics
{
	struct FlowUserSettings_eventGetVignetteIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventGetVignetteIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "GetVignetteIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::FlowUserSettings_eventGetVignetteIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::FlowUserSettings_eventGetVignetteIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execGetVignetteIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVignetteIntensity();
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function GetVignetteIntensity

// Begin Class UFlowUserSettings Function SetCountervectionIntensity
struct Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics
{
	struct FlowUserSettings_eventSetCountervectionIntensity_Parms
	{
		float new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventSetCountervectionIntensity_Parms, new_value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetCountervectionIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::FlowUserSettings_eventSetCountervectionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::FlowUserSettings_eventSetCountervectionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetCountervectionIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCountervectionIntensity(Z_Param_new_value);
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetCountervectionIntensity

// Begin Class UFlowUserSettings Function SetDistortionIntensity
struct Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics
{
	struct FlowUserSettings_eventSetDistortionIntensity_Parms
	{
		float new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventSetDistortionIntensity_Parms, new_value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetDistortionIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::FlowUserSettings_eventSetDistortionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::FlowUserSettings_eventSetDistortionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetDistortionIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistortionIntensity(Z_Param_new_value);
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetDistortionIntensity

// Begin Class UFlowUserSettings Function SetHaloIntensity
struct Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics
{
	struct FlowUserSettings_eventSetHaloIntensity_Parms
	{
		float new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventSetHaloIntensity_Parms, new_value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetHaloIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::FlowUserSettings_eventSetHaloIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::FlowUserSettings_eventSetHaloIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetHaloIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHaloIntensity(Z_Param_new_value);
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetHaloIntensity

// Begin Class UFlowUserSettings Function SetMode
struct Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics
{
	struct FlowUserSettings_eventSetMode_Parms
	{
		EFlowModes new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getters & setters\n" },
#endif
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters & setters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_new_value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::NewProp_new_value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventSetMode_Parms, new_value), Z_Construct_UEnum_FlowVR_EFlowModes, METADATA_PARAMS(0, nullptr) }; // 844463101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::NewProp_new_value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetMode", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::FlowUserSettings_eventSetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::FlowUserSettings_eventSetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetMode)
{
	P_GET_ENUM(EFlowModes,Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMode(EFlowModes(Z_Param_new_value));
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetMode

// Begin Class UFlowUserSettings Function SetUseCountervection3D
struct Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics
{
	struct FlowUserSettings_eventSetUseCountervection3D_Parms
	{
		bool new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_new_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::NewProp_new_value_SetBit(void* Obj)
{
	((FlowUserSettings_eventSetUseCountervection3D_Parms*)Obj)->new_value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlowUserSettings_eventSetUseCountervection3D_Parms), &Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::NewProp_new_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetUseCountervection3D", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::FlowUserSettings_eventSetUseCountervection3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::FlowUserSettings_eventSetUseCountervection3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetUseCountervection3D)
{
	P_GET_UBOOL(Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseCountervection3D(Z_Param_new_value);
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetUseCountervection3D

// Begin Class UFlowUserSettings Function SetVignetteIntensity
struct Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics
{
	struct FlowUserSettings_eventSetVignetteIntensity_Parms
	{
		float new_value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowVR" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_new_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::NewProp_new_value = { "new_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowUserSettings_eventSetVignetteIntensity_Parms, new_value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::NewProp_new_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowUserSettings, nullptr, "SetVignetteIntensity", nullptr, nullptr, Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::FlowUserSettings_eventSetVignetteIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::FlowUserSettings_eventSetVignetteIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowUserSettings::execSetVignetteIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_new_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVignetteIntensity(Z_Param_new_value);
	P_NATIVE_END;
}
// End Class UFlowUserSettings Function SetVignetteIntensity

// Begin Class UFlowUserSettings
void UFlowUserSettings::StaticRegisterNativesUFlowUserSettings()
{
	UClass* Class = UFlowUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCountervectionIntensity", &UFlowUserSettings::execGetCountervectionIntensity },
		{ "GetDistortionIntensity", &UFlowUserSettings::execGetDistortionIntensity },
		{ "GetFlowUserSettings", &UFlowUserSettings::execGetFlowUserSettings },
		{ "GetHaloIntensity", &UFlowUserSettings::execGetHaloIntensity },
		{ "GetMode", &UFlowUserSettings::execGetMode },
		{ "GetUseCountervection3D", &UFlowUserSettings::execGetUseCountervection3D },
		{ "GetVignetteIntensity", &UFlowUserSettings::execGetVignetteIntensity },
		{ "SetCountervectionIntensity", &UFlowUserSettings::execSetCountervectionIntensity },
		{ "SetDistortionIntensity", &UFlowUserSettings::execSetDistortionIntensity },
		{ "SetHaloIntensity", &UFlowUserSettings::execSetHaloIntensity },
		{ "SetMode", &UFlowUserSettings::execSetMode },
		{ "SetUseCountervection3D", &UFlowUserSettings::execSetUseCountervection3D },
		{ "SetVignetteIntensity", &UFlowUserSettings::execSetVignetteIntensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowUserSettings);
UClass* Z_Construct_UClass_UFlowUserSettings_NoRegister()
{
	return UFlowUserSettings::StaticClass();
}
struct Z_Construct_UClass_UFlowUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FlowUserSettings.h" },
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vignette_intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_countervection_intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_halo_intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distortion_intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_use_countervection_3d_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_vignette_intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_countervection_intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_halo_intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distortion_intensity;
	static void NewProp_use_countervection_3d_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_use_countervection_3d;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowUserSettings_GetCountervectionIntensity, "GetCountervectionIntensity" }, // 2885652648
		{ &Z_Construct_UFunction_UFlowUserSettings_GetDistortionIntensity, "GetDistortionIntensity" }, // 1864152677
		{ &Z_Construct_UFunction_UFlowUserSettings_GetFlowUserSettings, "GetFlowUserSettings" }, // 3263092287
		{ &Z_Construct_UFunction_UFlowUserSettings_GetHaloIntensity, "GetHaloIntensity" }, // 2246538132
		{ &Z_Construct_UFunction_UFlowUserSettings_GetMode, "GetMode" }, // 808974573
		{ &Z_Construct_UFunction_UFlowUserSettings_GetUseCountervection3D, "GetUseCountervection3D" }, // 2109912278
		{ &Z_Construct_UFunction_UFlowUserSettings_GetVignetteIntensity, "GetVignetteIntensity" }, // 958123104
		{ &Z_Construct_UFunction_UFlowUserSettings_SetCountervectionIntensity, "SetCountervectionIntensity" }, // 3464209291
		{ &Z_Construct_UFunction_UFlowUserSettings_SetDistortionIntensity, "SetDistortionIntensity" }, // 4251107250
		{ &Z_Construct_UFunction_UFlowUserSettings_SetHaloIntensity, "SetHaloIntensity" }, // 3331724349
		{ &Z_Construct_UFunction_UFlowUserSettings_SetMode, "SetMode" }, // 1471106053
		{ &Z_Construct_UFunction_UFlowUserSettings_SetUseCountervection3D, "SetUseCountervection3D" }, // 2186968621
		{ &Z_Construct_UFunction_UFlowUserSettings_SetVignetteIntensity, "SetVignetteIntensity" }, // 1686091070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowUserSettings, mode), Z_Construct_UEnum_FlowVR_EFlowModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mode_MetaData), NewProp_mode_MetaData) }; // 844463101
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_vignette_intensity = { "vignette_intensity", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowUserSettings, vignette_intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vignette_intensity_MetaData), NewProp_vignette_intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_countervection_intensity = { "countervection_intensity", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowUserSettings, countervection_intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_countervection_intensity_MetaData), NewProp_countervection_intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_halo_intensity = { "halo_intensity", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowUserSettings, halo_intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_halo_intensity_MetaData), NewProp_halo_intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_distortion_intensity = { "distortion_intensity", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowUserSettings, distortion_intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distortion_intensity_MetaData), NewProp_distortion_intensity_MetaData) };
void Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_use_countervection_3d_SetBit(void* Obj)
{
	((UFlowUserSettings*)Obj)->use_countervection_3d = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_use_countervection_3d = { "use_countervection_3d", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlowUserSettings), &Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_use_countervection_3d_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_use_countervection_3d_MetaData), NewProp_use_countervection_3d_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_vignette_intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_countervection_intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_halo_intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_distortion_intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowUserSettings_Statics::NewProp_use_countervection_3d,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FlowVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowUserSettings_Statics::ClassParams = {
	&UFlowUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlowUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowUserSettings_Statics::PropPointers),
	0,
	0x408000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowUserSettings()
{
	if (!Z_Registration_Info_UClass_UFlowUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowUserSettings.OuterSingleton, Z_Construct_UClass_UFlowUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowUserSettings.OuterSingleton;
}
template<> FLOWVR_API UClass* StaticClass<UFlowUserSettings>()
{
	return UFlowUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowUserSettings);
UFlowUserSettings::~UFlowUserSettings() {}
// End Class UFlowUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowUserSettings, UFlowUserSettings::StaticClass, TEXT("UFlowUserSettings"), &Z_Registration_Info_UClass_UFlowUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowUserSettings), 2172698201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_3369766684(TEXT("/Script/FlowVR"),
	Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
