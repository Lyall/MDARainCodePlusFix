#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_BackGround

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_BackGround.WBP_Menu_BackGround_C
// 0x0048 (0x0338 - 0x02F0)
class UWBP_Menu_BackGround_C final : public URCUiMenuBackground
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Frame_BK;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_L;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_L_1;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_L_2;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_R;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_R_1;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Curtain_R_2;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Floor;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_BackGround(int32 EntryPoint);
	void OnShowFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_BackGround_C">();
	}
	static class UWBP_Menu_BackGround_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_BackGround_C>();
	}
};
static_assert(alignof(UWBP_Menu_BackGround_C) == 0x000008, "Wrong alignment on UWBP_Menu_BackGround_C");
static_assert(sizeof(UWBP_Menu_BackGround_C) == 0x000338, "Wrong size on UWBP_Menu_BackGround_C");
static_assert(offsetof(UWBP_Menu_BackGround_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_Menu_BackGround_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Frame_BK) == 0x0002F8, "Member 'UWBP_Menu_BackGround_C::Frame_BK' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_L) == 0x000300, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_L' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_L_1) == 0x000308, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_L_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_L_2) == 0x000310, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_L_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_R) == 0x000318, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_R' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_R_1) == 0x000320, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_R_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Curtain_R_2) == 0x000328, "Member 'UWBP_Menu_BackGround_C::Image_Curtain_R_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_BackGround_C, Image_Floor) == 0x000330, "Member 'UWBP_Menu_BackGround_C::Image_Floor' has a wrong offset!");

}
