#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReTalk_Cursor_Key

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReTalk_Cursor_Key.WBP_ReTalk_Cursor_Key_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_ReTalk_Cursor_Key_C final : public URCReUiMessageCursorParts
{
public:
	class UImage*                                 Cursor_Key;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReTalk_Cursor_Key_C">();
	}
	static class UWBP_ReTalk_Cursor_Key_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReTalk_Cursor_Key_C>();
	}
};
static_assert(alignof(UWBP_ReTalk_Cursor_Key_C) == 0x000008, "Wrong alignment on UWBP_ReTalk_Cursor_Key_C");
static_assert(sizeof(UWBP_ReTalk_Cursor_Key_C) == 0x0002E8, "Wrong size on UWBP_ReTalk_Cursor_Key_C");
static_assert(offsetof(UWBP_ReTalk_Cursor_Key_C, Cursor_Key) == 0x0002E0, "Member 'UWBP_ReTalk_Cursor_Key_C::Cursor_Key' has a wrong offset!");

}
