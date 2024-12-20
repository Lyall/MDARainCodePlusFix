#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_raindrop

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_raindrop.WBP_Title_raindrop_C
// 0x0040 (0x02B0 - 0x0270)
class UWBP_Title_raindrop_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       AN_RaindropEffect;                                 // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_RenderSize;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasAngle;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Raindrop;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Raindrop;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBox2D                                 Area;                                              // 0x0298(0x0014)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)

public:
	void Start();
	void SetArea(const struct FBox2D& ReferArea);
	void SetPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_raindrop_C">();
	}
	static class UWBP_Title_raindrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_raindrop_C>();
	}
};
static_assert(alignof(UWBP_Title_raindrop_C) == 0x000008, "Wrong alignment on UWBP_Title_raindrop_C");
static_assert(sizeof(UWBP_Title_raindrop_C) == 0x0002B0, "Wrong size on UWBP_Title_raindrop_C");
static_assert(offsetof(UWBP_Title_raindrop_C, AN_RaindropEffect) == 0x000270, "Member 'UWBP_Title_raindrop_C::AN_RaindropEffect' has a wrong offset!");
static_assert(offsetof(UWBP_Title_raindrop_C, Canvas_RenderSize) == 0x000278, "Member 'UWBP_Title_raindrop_C::Canvas_RenderSize' has a wrong offset!");
static_assert(offsetof(UWBP_Title_raindrop_C, CanvasAngle) == 0x000280, "Member 'UWBP_Title_raindrop_C::CanvasAngle' has a wrong offset!");
static_assert(offsetof(UWBP_Title_raindrop_C, CanvasPanel_Raindrop) == 0x000288, "Member 'UWBP_Title_raindrop_C::CanvasPanel_Raindrop' has a wrong offset!");
static_assert(offsetof(UWBP_Title_raindrop_C, Img_Raindrop) == 0x000290, "Member 'UWBP_Title_raindrop_C::Img_Raindrop' has a wrong offset!");
static_assert(offsetof(UWBP_Title_raindrop_C, Area) == 0x000298, "Member 'UWBP_Title_raindrop_C::Area' has a wrong offset!");

}

