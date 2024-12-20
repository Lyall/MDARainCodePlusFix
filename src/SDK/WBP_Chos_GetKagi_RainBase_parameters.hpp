#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chos_GetKagi_RainBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Chos_GetKagi_RainBase.WBP_Chos_GetKagi_RainBase_C.ExecuteUbergraph_WBP_Chos_GetKagi_RainBase
// 0x0068 (0x0068 - 0x0000)
struct WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Chos_GetKagi_RainEff_C*            CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox2D                                 CallFunc_MakeBox2D_ReturnValue;                    // 0x0054(0x0014)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase) == 0x000008, "Wrong alignment on WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase");
static_assert(sizeof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase) == 0x000068, "Wrong size on WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, EntryPoint) == 0x000000, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, Temp_int_Variable) == 0x000004, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_AddChildToCanvas_ReturnValue) == 0x000018, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_RandomFloatInRange_ReturnValue) == 0x000020, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_GetSize_ReturnValue) == 0x000030, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_GetPosition_ReturnValue) == 0x000038, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000040, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000044, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase, CallFunc_MakeBox2D_ReturnValue) == 0x000054, "Member 'WBP_Chos_GetKagi_RainBase_C_ExecuteUbergraph_WBP_Chos_GetKagi_RainBase::CallFunc_MakeBox2D_ReturnValue' has a wrong offset!");

}

