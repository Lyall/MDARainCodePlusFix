#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chos_GetKagi_RainEff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.Area Set
// 0x0058 (0x0058 - 0x0000)
struct WBP_Chos_GetKagi_RainEff_C_Area_Set final
{
public:
	struct FBox2D                                 New_Area;                                          // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox2D                                 CallFunc_MakeBox2D_ReturnValue;                    // 0x0040(0x0014)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_Chos_GetKagi_RainEff_C_Area_Set) == 0x000008, "Wrong alignment on WBP_Chos_GetKagi_RainEff_C_Area_Set");
static_assert(sizeof(WBP_Chos_GetKagi_RainEff_C_Area_Set) == 0x000058, "Wrong size on WBP_Chos_GetKagi_RainEff_C_Area_Set");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, New_Area) == 0x000000, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::New_Area' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000028, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000030, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000038, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Area_Set, CallFunc_MakeBox2D_ReturnValue) == 0x000040, "Member 'WBP_Chos_GetKagi_RainEff_C_Area_Set::CallFunc_MakeBox2D_ReturnValue' has a wrong offset!");

// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.Start
// 0x0020 (0x0020 - 0x0000)
struct WBP_Chos_GetKagi_RainEff_C_Start final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chos_GetKagi_RainEff_C_Start) == 0x000008, "Wrong alignment on WBP_Chos_GetKagi_RainEff_C_Start");
static_assert(sizeof(WBP_Chos_GetKagi_RainEff_C_Start) == 0x000020, "Wrong size on WBP_Chos_GetKagi_RainEff_C_Start");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Start, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'WBP_Chos_GetKagi_RainEff_C_Start::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Start, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Chos_GetKagi_RainEff_C_Start::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Start, CallFunc_GetEndTime_ReturnValue) == 0x000010, "Member 'WBP_Chos_GetKagi_RainEff_C_Start::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Start, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'WBP_Chos_GetKagi_RainEff_C_Start::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_Start, CallFunc_K2_SetTimer_ReturnValue) == 0x000018, "Member 'WBP_Chos_GetKagi_RainEff_C_Start::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.PositionSet
// 0x0030 (0x0030 - 0x0000)
struct WBP_Chos_GetKagi_RainEff_C_PositionSet final
{
public:
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chos_GetKagi_RainEff_C_PositionSet) == 0x000008, "Wrong alignment on WBP_Chos_GetKagi_RainEff_C_PositionSet");
static_assert(sizeof(WBP_Chos_GetKagi_RainEff_C_PositionSet) == 0x000030, "Wrong size on WBP_Chos_GetKagi_RainEff_C_PositionSet");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_RandomFloat_ReturnValue) == 0x000000, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_BreakVector2D_X) == 0x000010, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_BreakVector2D_X_1) == 0x000018, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_BreakVector2D_Y_1) == 0x00001C, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_RandomFloatInRange_ReturnValue) == 0x000020, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000024, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainEff_C_PositionSet, CallFunc_MakeVector2D_ReturnValue) == 0x000028, "Member 'WBP_Chos_GetKagi_RainEff_C_PositionSet::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}
