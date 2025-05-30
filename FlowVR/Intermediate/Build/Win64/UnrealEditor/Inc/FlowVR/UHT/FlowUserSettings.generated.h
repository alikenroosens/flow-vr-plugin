// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlowUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlowUserSettings;
enum class EFlowModes : uint8;
#ifdef FLOWVR_FlowUserSettings_generated_h
#error "FlowUserSettings.generated.h already included, missing '#pragma once' in FlowUserSettings.h"
#endif
#define FLOWVR_FlowUserSettings_generated_h

#define FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDistortionIntensity); \
	DECLARE_FUNCTION(execSetDistortionIntensity); \
	DECLARE_FUNCTION(execGetUseCountervection3D); \
	DECLARE_FUNCTION(execSetUseCountervection3D); \
	DECLARE_FUNCTION(execGetHaloIntensity); \
	DECLARE_FUNCTION(execSetHaloIntensity); \
	DECLARE_FUNCTION(execGetCountervectionIntensity); \
	DECLARE_FUNCTION(execSetCountervectionIntensity); \
	DECLARE_FUNCTION(execGetVignetteIntensity); \
	DECLARE_FUNCTION(execSetVignetteIntensity); \
	DECLARE_FUNCTION(execGetMode); \
	DECLARE_FUNCTION(execSetMode); \
	DECLARE_FUNCTION(execGetFlowUserSettings);


#define FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFlowUserSettings(); \
	friend struct Z_Construct_UClass_UFlowUserSettings_Statics; \
public: \
	DECLARE_CLASS(UFlowUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowVR"), NO_API) \
	DECLARE_SERIALIZER(UFlowUserSettings)


#define FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlowUserSettings(UFlowUserSettings&&); \
	UFlowUserSettings(const UFlowUserSettings&); \
public: \
	NO_API virtual ~UFlowUserSettings();


#define FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_13_PROLOG
#define FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_RPC_WRAPPERS \
	FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_INCLASS \
	FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWVR_API UClass* StaticClass<class UFlowUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
