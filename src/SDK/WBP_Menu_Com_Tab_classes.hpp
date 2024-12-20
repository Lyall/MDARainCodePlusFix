#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Com_Tab

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Com_Tab.WBP_Menu_Com_Tab_C
// 0x0070 (0x0370 - 0x0300)
class UWBP_Menu_Com_Tab_C final : public URCUiMenuCommonTab
{
public:
	class UWBP_ButtonGuide_C*                     ButtonGuide_L;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonGuide_C*                     ButtonGuide_R;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_10;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_11;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_00;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_01;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_02;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_03;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_04;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_05;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_06;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_07;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_08;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Tab_Set_C*                Tab_Set_09;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Com_Tab_C">();
	}
	static class UWBP_Menu_Com_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Com_Tab_C>();
	}
};
static_assert(alignof(UWBP_Menu_Com_Tab_C) == 0x000008, "Wrong alignment on UWBP_Menu_Com_Tab_C");
static_assert(sizeof(UWBP_Menu_Com_Tab_C) == 0x000370, "Wrong size on UWBP_Menu_Com_Tab_C");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, ButtonGuide_L) == 0x000300, "Member 'UWBP_Menu_Com_Tab_C::ButtonGuide_L' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, ButtonGuide_R) == 0x000308, "Member 'UWBP_Menu_Com_Tab_C::ButtonGuide_R' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_10) == 0x000310, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_11) == 0x000318, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_11' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_00) == 0x000320, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_01) == 0x000328, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_02) == 0x000330, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_03) == 0x000338, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_04) == 0x000340, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_04' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_05) == 0x000348, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_05' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_06) == 0x000350, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_06' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_07) == 0x000358, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_07' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_08) == 0x000360, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_08' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Com_Tab_C, Tab_Set_09) == 0x000368, "Member 'UWBP_Menu_Com_Tab_C::Tab_Set_09' has a wrong offset!");

}

