#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_NzSkill_Detail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_NzSkill_Detail.WBP_Menu_NzSkill_Detail_C
// 0x01F0 (0x05F8 - 0x0408)
class UWBP_Menu_NzSkill_Detail_C final : public URCUiMenuSkillTreeDetail
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bar_Line;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Com_Icon_Colon_SkillPoint;                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Com_Icon_Colon_TRank;                              // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Com_Icon_Slash_Memory;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_AssistTime_Lv1;                               // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_AssistTime_Lv1_Not;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_AssistTime_Lv2;                               // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_AssistTime_Lv2_Not;                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Condition;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv1;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv1_Not;                                 // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv2;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv2_Not;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv3;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv3_Not;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv4;                                     // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv4_Not;                                 // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv5;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_HPUp_Lv5_Not;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_kagi_Lv1;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_kagi_Lv1_Not;                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_kagi_Lv2;                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_kagi_Lv2_Not;                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Puzzle_Lv1;                          // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Puzzle_Lv1_Not;                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Puzzle_Lv2;                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Puzzle_Lv2_Not;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Suiri_Lv1;                           // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Suiri_Lv1_Not;                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Suiri_Lv2;                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_KagiDown_Suiri_Lv2_Not;                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Sts_Icon_Memory_C*            Icon_Memory;                                       // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Memory_Lv1;                                   // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MissWord_Lv1;                                 // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MissWord_Lv1_Not;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MissWord_Lv2;                                 // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MissWord_Lv2_Not;                             // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MoveSpeed_Lv1;                                // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_MoveSpeed_Lv1_Not;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_RotationSpeed;                                // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_RotationSpeed_Not;                            // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_TextColour_Lv1;                               // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_TextColour_Lv1_Not;                           // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_TextSpeed_Lv1;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_TextSpeed_Lv1_Not;                            // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_NzSkill_SetIcon_Class_C*      SetIcon_Class;                                     // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_NzSkill_SetIcon_Equip_C*      SetIcon_Equip;                                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_NzSkill_SetIcon_Get_C*        SetIcon_Get;                                       // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skill_Info_BG;                                     // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skill_Info_Frame_Caption_001;                      // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Info_BG;                                    // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_SkilIcon;                                 // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_GetSkillPoint;                                // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Memory;                                       // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_MemoryCost;                                   // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SkillPoint;                                   // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TRank;                                        // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           SkillTextIDs;                                      // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTextBlock*>                     TextBlockArray;                                    // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WBP_Menu_NzSkill_Detail(int32 EntryPoint);
	void Construct();
	void SetTextID(TArray<class FName>& TextID, TArray<class UTextBlock*>& TextBlock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_NzSkill_Detail_C">();
	}
	static class UWBP_Menu_NzSkill_Detail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_NzSkill_Detail_C>();
	}
};
static_assert(alignof(UWBP_Menu_NzSkill_Detail_C) == 0x000008, "Wrong alignment on UWBP_Menu_NzSkill_Detail_C");
static_assert(sizeof(UWBP_Menu_NzSkill_Detail_C) == 0x0005F8, "Wrong size on UWBP_Menu_NzSkill_Detail_C");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, UberGraphFrame) == 0x000408, "Member 'UWBP_Menu_NzSkill_Detail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Bar_Line) == 0x000410, "Member 'UWBP_Menu_NzSkill_Detail_C::Bar_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Com_Icon_Colon_SkillPoint) == 0x000418, "Member 'UWBP_Menu_NzSkill_Detail_C::Com_Icon_Colon_SkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Com_Icon_Colon_TRank) == 0x000420, "Member 'UWBP_Menu_NzSkill_Detail_C::Com_Icon_Colon_TRank' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Com_Icon_Slash_Memory) == 0x000428, "Member 'UWBP_Menu_NzSkill_Detail_C::Com_Icon_Slash_Memory' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_AssistTime_Lv1) == 0x000430, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_AssistTime_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_AssistTime_Lv1_Not) == 0x000438, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_AssistTime_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_AssistTime_Lv2) == 0x000440, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_AssistTime_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_AssistTime_Lv2_Not) == 0x000448, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_AssistTime_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_Condition) == 0x000450, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_Condition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv1) == 0x000458, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv1_Not) == 0x000460, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv2) == 0x000468, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv2_Not) == 0x000470, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv3) == 0x000478, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv3_Not) == 0x000480, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv3_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv4) == 0x000488, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv4_Not) == 0x000490, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv4_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv5) == 0x000498, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_HPUp_Lv5_Not) == 0x0004A0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_HPUp_Lv5_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_kagi_Lv1) == 0x0004A8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_kagi_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_kagi_Lv1_Not) == 0x0004B0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_kagi_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_kagi_Lv2) == 0x0004B8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_kagi_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_kagi_Lv2_Not) == 0x0004C0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_kagi_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Puzzle_Lv1) == 0x0004C8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Puzzle_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Puzzle_Lv1_Not) == 0x0004D0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Puzzle_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Puzzle_Lv2) == 0x0004D8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Puzzle_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Puzzle_Lv2_Not) == 0x0004E0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Puzzle_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Suiri_Lv1) == 0x0004E8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Suiri_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Suiri_Lv1_Not) == 0x0004F0, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Suiri_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Suiri_Lv2) == 0x0004F8, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Suiri_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_KagiDown_Suiri_Lv2_Not) == 0x000500, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_KagiDown_Suiri_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_Memory) == 0x000508, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_Memory' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_Memory_Lv1) == 0x000510, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_Memory_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MissWord_Lv1) == 0x000518, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MissWord_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MissWord_Lv1_Not) == 0x000520, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MissWord_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MissWord_Lv2) == 0x000528, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MissWord_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MissWord_Lv2_Not) == 0x000530, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MissWord_Lv2_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MoveSpeed_Lv1) == 0x000538, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MoveSpeed_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_MoveSpeed_Lv1_Not) == 0x000540, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_MoveSpeed_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_RotationSpeed) == 0x000548, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_RotationSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_RotationSpeed_Not) == 0x000550, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_RotationSpeed_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_TextColour_Lv1) == 0x000558, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_TextColour_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_TextColour_Lv1_Not) == 0x000560, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_TextColour_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_TextSpeed_Lv1) == 0x000568, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_TextSpeed_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Icon_TextSpeed_Lv1_Not) == 0x000570, "Member 'UWBP_Menu_NzSkill_Detail_C::Icon_TextSpeed_Lv1_Not' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, SetIcon_Class) == 0x000578, "Member 'UWBP_Menu_NzSkill_Detail_C::SetIcon_Class' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, SetIcon_Equip) == 0x000580, "Member 'UWBP_Menu_NzSkill_Detail_C::SetIcon_Equip' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, SetIcon_Get) == 0x000588, "Member 'UWBP_Menu_NzSkill_Detail_C::SetIcon_Get' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Skill_Info_BG) == 0x000590, "Member 'UWBP_Menu_NzSkill_Detail_C::Skill_Info_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Skill_Info_Frame_Caption_001) == 0x000598, "Member 'UWBP_Menu_NzSkill_Detail_C::Skill_Info_Frame_Caption_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Status_Info_BG) == 0x0005A0, "Member 'UWBP_Menu_NzSkill_Detail_C::Status_Info_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Switcher_SkilIcon) == 0x0005A8, "Member 'UWBP_Menu_NzSkill_Detail_C::Switcher_SkilIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Text_GetSkillPoint) == 0x0005B0, "Member 'UWBP_Menu_NzSkill_Detail_C::Text_GetSkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Text_Memory) == 0x0005B8, "Member 'UWBP_Menu_NzSkill_Detail_C::Text_Memory' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Text_MemoryCost) == 0x0005C0, "Member 'UWBP_Menu_NzSkill_Detail_C::Text_MemoryCost' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Text_SkillPoint) == 0x0005C8, "Member 'UWBP_Menu_NzSkill_Detail_C::Text_SkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, Text_TRank) == 0x0005D0, "Member 'UWBP_Menu_NzSkill_Detail_C::Text_TRank' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, SkillTextIDs) == 0x0005D8, "Member 'UWBP_Menu_NzSkill_Detail_C::SkillTextIDs' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_Detail_C, TextBlockArray) == 0x0005E8, "Member 'UWBP_Menu_NzSkill_Detail_C::TextBlockArray' has a wrong offset!");

}
