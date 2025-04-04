// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Garcia/Public/PlayerChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MYPROJECT_GARCIA_API UClass* Z_Construct_UClass_APlayerChar();
MYPROJECT_GARCIA_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Garcia();
// End Cross Module References

// Begin Class APlayerChar Function DecreaseStats
struct Z_Construct_UFunction_APlayerChar_DecreaseStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_DecreaseStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "DecreaseStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_DecreaseStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_DecreaseStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_DecreaseStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_DecreaseStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execDecreaseStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseStats();
	P_NATIVE_END;
}
// End Class APlayerChar Function DecreaseStats

// Begin Class APlayerChar Function FindObject
struct Z_Construct_UFunction_APlayerChar_FindObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_FindObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "FindObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_FindObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_FindObject_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_FindObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_FindObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execFindObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindObject();
	P_NATIVE_END;
}
// End Class APlayerChar Function FindObject

// Begin Class APlayerChar Function GiveResource
struct Z_Construct_UFunction_APlayerChar_GiveResource_Statics
{
	struct PlayerChar_eventGiveResource_Parms
	{
		float amount;
		FString resourceType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_resourceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_GiveResource_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventGiveResource_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerChar_GiveResource_Statics::NewProp_resourceType = { "resourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventGiveResource_Parms, resourceType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_GiveResource_Statics::NewProp_amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_GiveResource_Statics::NewProp_resourceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_GiveResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "GiveResource", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PlayerChar_eventGiveResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_GiveResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_GiveResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_GiveResource_Statics::PlayerChar_eventGiveResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_GiveResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_GiveResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execGiveResource)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_GET_PROPERTY(FStrProperty,Z_Param_resourceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveResource(Z_Param_amount,Z_Param_resourceType);
	P_NATIVE_END;
}
// End Class APlayerChar Function GiveResource

// Begin Class APlayerChar Function MoveForward
struct Z_Construct_UFunction_APlayerChar_MoveForward_Statics
{
	struct PlayerChar_eventMoveForward_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_MoveForward_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventMoveForward_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_MoveForward_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PlayerChar_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PlayerChar_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class APlayerChar Function MoveForward

// Begin Class APlayerChar Function MoveRight
struct Z_Construct_UFunction_APlayerChar_MoveRight_Statics
{
	struct PlayerChar_eventMoveRight_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_MoveRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventMoveRight_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_MoveRight_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PlayerChar_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PlayerChar_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class APlayerChar Function MoveRight

// Begin Class APlayerChar Function SetHealth
struct Z_Construct_UFunction_APlayerChar_SetHealth_Statics
{
	struct PlayerChar_eventSetHealth_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_SetHealth_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventSetHealth_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_SetHealth_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PlayerChar_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_SetHealth_Statics::PlayerChar_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_amount);
	P_NATIVE_END;
}
// End Class APlayerChar Function SetHealth

// Begin Class APlayerChar Function SetHunger
struct Z_Construct_UFunction_APlayerChar_SetHunger_Statics
{
	struct PlayerChar_eventSetHunger_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_SetHunger_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventSetHunger_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_SetHunger_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_SetHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "SetHunger", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PlayerChar_eventSetHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_SetHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_SetHunger_Statics::PlayerChar_eventSetHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_SetHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_SetHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execSetHunger)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHunger(Z_Param_amount);
	P_NATIVE_END;
}
// End Class APlayerChar Function SetHunger

// Begin Class APlayerChar Function SetStamina
struct Z_Construct_UFunction_APlayerChar_SetStamina_Statics
{
	struct PlayerChar_eventSetStamina_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_SetStamina_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventSetStamina_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_SetStamina_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PlayerChar_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_SetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_SetStamina_Statics::PlayerChar_eventSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_SetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_SetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStamina(Z_Param_amount);
	P_NATIVE_END;
}
// End Class APlayerChar Function SetStamina

// Begin Class APlayerChar Function StartJump
struct Z_Construct_UFunction_APlayerChar_StartJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "StartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_StartJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execStartJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump();
	P_NATIVE_END;
}
// End Class APlayerChar Function StartJump

// Begin Class APlayerChar Function StopJump
struct Z_Construct_UFunction_APlayerChar_StopJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "StopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_StopJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execStopJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump();
	P_NATIVE_END;
}
// End Class APlayerChar Function StopJump

// Begin Class APlayerChar
void APlayerChar::StaticRegisterNativesAPlayerChar()
{
	UClass* Class = APlayerChar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseStats", &APlayerChar::execDecreaseStats },
		{ "FindObject", &APlayerChar::execFindObject },
		{ "GiveResource", &APlayerChar::execGiveResource },
		{ "MoveForward", &APlayerChar::execMoveForward },
		{ "MoveRight", &APlayerChar::execMoveRight },
		{ "SetHealth", &APlayerChar::execSetHealth },
		{ "SetHunger", &APlayerChar::execSetHunger },
		{ "SetStamina", &APlayerChar::execSetStamina },
		{ "StartJump", &APlayerChar::execStartJump },
		{ "StopJump", &APlayerChar::execStopJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerChar);
UClass* Z_Construct_UClass_APlayerChar_NoRegister()
{
	return APlayerChar::StaticClass();
}
struct Z_Construct_UClass_APlayerChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerChar.h" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamComp_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wood_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stone_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Berry_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesArray_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesNameArray_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitDecal_MetaData[] = {
		{ "Category", "HitMarker" },
		{ "ModuleRelativePath", "Public/PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wood;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Berry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResourcesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourcesArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResourcesNameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourcesNameArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitDecal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerChar_DecreaseStats, "DecreaseStats" }, // 766322204
		{ &Z_Construct_UFunction_APlayerChar_FindObject, "FindObject" }, // 1295749639
		{ &Z_Construct_UFunction_APlayerChar_GiveResource, "GiveResource" }, // 2021108862
		{ &Z_Construct_UFunction_APlayerChar_MoveForward, "MoveForward" }, // 2733431017
		{ &Z_Construct_UFunction_APlayerChar_MoveRight, "MoveRight" }, // 1545234809
		{ &Z_Construct_UFunction_APlayerChar_SetHealth, "SetHealth" }, // 2838028771
		{ &Z_Construct_UFunction_APlayerChar_SetHunger, "SetHunger" }, // 2008281243
		{ &Z_Construct_UFunction_APlayerChar_SetStamina, "SetStamina" }, // 182049353
		{ &Z_Construct_UFunction_APlayerChar_StartJump, "StartJump" }, // 1312139135
		{ &Z_Construct_UFunction_APlayerChar_StopJump, "StopJump" }, // 1006919319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamComp = { "PlayerCamComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, PlayerCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamComp_MetaData), NewProp_PlayerCamComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Hunger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Wood = { "Wood", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Wood), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wood_MetaData), NewProp_Wood_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Stone = { "Stone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Stone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stone_MetaData), NewProp_Stone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Berry = { "Berry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, Berry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Berry_MetaData), NewProp_Berry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesArray_Inner = { "ResourcesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesArray = { "ResourcesArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, ResourcesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourcesArray_MetaData), NewProp_ResourcesArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesNameArray_Inner = { "ResourcesNameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesNameArray = { "ResourcesNameArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, ResourcesNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourcesNameArray_MetaData), NewProp_ResourcesNameArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_hitDecal = { "hitDecal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, hitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitDecal_MetaData), NewProp_hitDecal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Wood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Stone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Berry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesNameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ResourcesNameArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_hitDecal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Garcia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerChar_Statics::ClassParams = {
	&APlayerChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerChar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerChar()
{
	if (!Z_Registration_Info_UClass_APlayerChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerChar.OuterSingleton, Z_Construct_UClass_APlayerChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerChar.OuterSingleton;
}
template<> MYPROJECT_GARCIA_API UClass* StaticClass<APlayerChar>()
{
	return APlayerChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerChar);
APlayerChar::~APlayerChar() {}
// End Class APlayerChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_PlayerChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerChar, APlayerChar::StaticClass, TEXT("APlayerChar"), &Z_Registration_Info_UClass_APlayerChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerChar), 992314821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_PlayerChar_h_3938559930(TEXT("/Script/MyProject_Garcia"),
	Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_PlayerChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_GAM312TEST_MyProject_Garcia_Source_MyProject_Garcia_Public_PlayerChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
