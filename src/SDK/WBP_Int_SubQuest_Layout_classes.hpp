#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Int_SubQuest_Layout

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Int_SubQuest_Layout.WBP_Int_SubQuest_Layout_C
// 0x0010 (0x0308 - 0x02F8)
class UWBP_Int_SubQuest_Layout_C final : public URCUiIntSubQuest
{
public:
	class UWBP_Int_SubQuest_C*                    WBP_Int_SubQuest;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Int_TextPl_C*                      WBP_Int_TextPl;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Int_SubQuest_Layout_C">();
	}
	static class UWBP_Int_SubQuest_Layout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Int_SubQuest_Layout_C>();
	}
};
static_assert(alignof(UWBP_Int_SubQuest_Layout_C) == 0x000008, "Wrong alignment on UWBP_Int_SubQuest_Layout_C");
static_assert(sizeof(UWBP_Int_SubQuest_Layout_C) == 0x000308, "Wrong size on UWBP_Int_SubQuest_Layout_C");
static_assert(offsetof(UWBP_Int_SubQuest_Layout_C, WBP_Int_SubQuest) == 0x0002F8, "Member 'UWBP_Int_SubQuest_Layout_C::WBP_Int_SubQuest' has a wrong offset!");
static_assert(offsetof(UWBP_Int_SubQuest_Layout_C, WBP_Int_TextPl) == 0x000300, "Member 'UWBP_Int_SubQuest_Layout_C::WBP_Int_TextPl' has a wrong offset!");

}
