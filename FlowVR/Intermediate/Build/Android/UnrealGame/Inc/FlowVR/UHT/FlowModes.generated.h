// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlowModes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWVR_FlowModes_generated_h
#error "FlowModes.generated.h already included, missing '#pragma once' in FlowModes.h"
#endif
#define FLOWVR_FlowModes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ali_Ken_Roosens_Documents_Unreal_Projects_flow_vr_demo_Plugins_FlowVR_Source_FlowVR_Public_FlowModes_h


#define FOREACH_ENUM_EFLOWMODES(op) \
	op(EFlowModes::Off) \
	op(EFlowModes::Vignette) \
	op(EFlowModes::Flow) 

enum class EFlowModes : uint8;
template<> struct TIsUEnumClass<EFlowModes> { enum { Value = true }; };
template<> FLOWVR_API UEnum* StaticEnum<EFlowModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
