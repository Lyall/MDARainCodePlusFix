#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_Language_Window_Item

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_Language_Window_Item.WBP_Title_Language_Window_Item_C
// 0x0008 (0x0360 - 0x0358)
class UWBP_Title_Language_Window_Item_C final : public URCTItleLanguageWindowItem
{
public:
	class UImage*                                 Window_Flame;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_Language_Window_Item_C">();
	}
	static class UWBP_Title_Language_Window_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_Language_Window_Item_C>();
	}
};
static_assert(alignof(UWBP_Title_Language_Window_Item_C) == 0x000008, "Wrong alignment on UWBP_Title_Language_Window_Item_C");
static_assert(sizeof(UWBP_Title_Language_Window_Item_C) == 0x000360, "Wrong size on UWBP_Title_Language_Window_Item_C");
static_assert(offsetof(UWBP_Title_Language_Window_Item_C, Window_Flame) == 0x000358, "Member 'UWBP_Title_Language_Window_Item_C::Window_Flame' has a wrong offset!");

}
