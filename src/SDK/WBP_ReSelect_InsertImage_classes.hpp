#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReSelect_InsertImage

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReSelect_InsertImage.WBP_ReSelect_InsertImage_C
// 0x0020 (0x0290 - 0x0270)
class UWBP_ReSelect_InsertImage_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       AN_Wait;                                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AN_Finish;                                         // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AN_Start;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_ChoicedImage;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReSelect_InsertImage_C">();
	}
	static class UWBP_ReSelect_InsertImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReSelect_InsertImage_C>();
	}
};
static_assert(alignof(UWBP_ReSelect_InsertImage_C) == 0x000008, "Wrong alignment on UWBP_ReSelect_InsertImage_C");
static_assert(sizeof(UWBP_ReSelect_InsertImage_C) == 0x000290, "Wrong size on UWBP_ReSelect_InsertImage_C");
static_assert(offsetof(UWBP_ReSelect_InsertImage_C, AN_Wait) == 0x000270, "Member 'UWBP_ReSelect_InsertImage_C::AN_Wait' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_InsertImage_C, AN_Finish) == 0x000278, "Member 'UWBP_ReSelect_InsertImage_C::AN_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_InsertImage_C, AN_Start) == 0x000280, "Member 'UWBP_ReSelect_InsertImage_C::AN_Start' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_InsertImage_C, Img_ChoicedImage) == 0x000288, "Member 'UWBP_ReSelect_InsertImage_C::Img_ChoicedImage' has a wrong offset!");

}

