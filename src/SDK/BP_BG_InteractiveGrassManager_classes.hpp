#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BG_InteractiveGrassManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BG_InteractiveGrassManager.BP_BG_InteractiveGrassManager_C
// 0x00C0 (0x02E0 - 0x0220)
class ABP_BG_InteractiveGrassManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Icon;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382; // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382; // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D[0x3];                                      // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WindStrengthChanger;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WindDirectionChanger;                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WindDirection;                                     // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  univMaterialInteractionChannels;                   // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	int32                                         currentDispInteractingActors;                      // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         maxDisplacementInteractingActors;                  // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         newWindTextureRotationAngle;                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         newWindTextureRotationValue;                       // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         previousWindStrength;                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         DirectionChangeDuration;                           // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StrengthChangeDuration;                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransformOptimizeStrength;                         // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransformOptimizeStartRadius;                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFoliageInstancedStaticMeshComponent*   FoliageComponent;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkSize;                                  // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkDeactivateRadius;                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AInteractiveFoliageChunk_BP_C*>  interactiveFoliageChunks;                          // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         FoliageChunkDetectionInterval;                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkDeactivateInterval;                    // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         originalCloudShadowOpacity;                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UINTERACTIVE_FoliageComp_BP_C*>  componentsToSpawnWith;                             // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_BP_BG_InteractiveGrassManager(int32 EntryPoint);
	void SmoothlyChangeWindStrength(float newStrength);
	void SmoothlyChangeWindDirection(const struct FVector& newDirection);
	void ReceiveBeginPlay();
	void WindStrengthChanger__Change__EventFunc();
	void WindStrengthChanger__UpdateFunc();
	void WindStrengthChanger__FinishedFunc();
	void WindDirectionChanger__ChangeDirection__EventFunc();
	void WindDirectionChanger__UpdateFunc();
	void WindDirectionChanger__FinishedFunc();
	void SpawnFoliage(bool spawnUnderCursor, const struct FVector& locationIfNotUnderCursor, const struct FVector& normalIfNotUnderCursor, const struct FVector& minScale, const struct FVector& MaxScale, const struct FFoliageToSpawn_Struct& foliageToSpawn);
	void SpawnFoliageCluster(const struct FVector& centerLocation, float sizeX_, float sizeY_, float density_, float nonUniformDistribution, const struct FFoliageToSpawn_Struct& foliageToSpawn, const struct FVector& minScale, const struct FVector& MaxScale, bool useGrassSpawnAreas, class AGrassSpawnArea_BP_C* grassSpawnArea);
	void GetFreeMaterialInteractionChannel(bool* found, int32* foundChannel);
	void FreeUpMaterialInteractionChannel(int32 nrOfChannel);
	void DistanceToViewTarget(const struct FVector& fromLocation, float* Distance);
	void AddFoliageChunkActor(const struct FVector& ChunkCenter, class UINTERACTIVE_FoliageComp_BP_C* SourceComponent, bool replaceWithSourceComponent, bool leaveDefaultComponent, class AInteractiveFoliageChunk_BP_C** addedChunk);
	void PopulateMapWithGrass();
	void GetUpdateInterval(float DistanceToViewTarget, int32 updatesPerSecond, float* UpdateInterval);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BG_InteractiveGrassManager_C">();
	}
	static class ABP_BG_InteractiveGrassManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BG_InteractiveGrassManager_C>();
	}
};
static_assert(alignof(ABP_BG_InteractiveGrassManager_C) == 0x000008, "Wrong alignment on ABP_BG_InteractiveGrassManager_C");
static_assert(sizeof(ABP_BG_InteractiveGrassManager_C) == 0x0002E0, "Wrong size on ABP_BG_InteractiveGrassManager_C");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, UberGraphFrame) == 0x000220, "Member 'ABP_BG_InteractiveGrassManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, Icon) == 0x000228, "Member 'ABP_BG_InteractiveGrassManager_C::Icon' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_BG_InteractiveGrassManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382) == 0x000238, "Member 'ABP_BG_InteractiveGrassManager_C::WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382) == 0x00023C, "Member 'ABP_BG_InteractiveGrassManager_C::WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindStrengthChanger) == 0x000240, "Member 'ABP_BG_InteractiveGrassManager_C::WindStrengthChanger' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF) == 0x000248, "Member 'ABP_BG_InteractiveGrassManager_C::WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF) == 0x00024C, "Member 'ABP_BG_InteractiveGrassManager_C::WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindDirectionChanger) == 0x000250, "Member 'ABP_BG_InteractiveGrassManager_C::WindDirectionChanger' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindDirection) == 0x000258, "Member 'ABP_BG_InteractiveGrassManager_C::WindDirection' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, WindStrength) == 0x000264, "Member 'ABP_BG_InteractiveGrassManager_C::WindStrength' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, univMaterialInteractionChannels) == 0x000268, "Member 'ABP_BG_InteractiveGrassManager_C::univMaterialInteractionChannels' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, currentDispInteractingActors) == 0x000278, "Member 'ABP_BG_InteractiveGrassManager_C::currentDispInteractingActors' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, maxDisplacementInteractingActors) == 0x00027C, "Member 'ABP_BG_InteractiveGrassManager_C::maxDisplacementInteractingActors' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, newWindTextureRotationAngle) == 0x000280, "Member 'ABP_BG_InteractiveGrassManager_C::newWindTextureRotationAngle' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, newWindTextureRotationValue) == 0x000284, "Member 'ABP_BG_InteractiveGrassManager_C::newWindTextureRotationValue' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, previousWindStrength) == 0x000288, "Member 'ABP_BG_InteractiveGrassManager_C::previousWindStrength' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, DirectionChangeDuration) == 0x00028C, "Member 'ABP_BG_InteractiveGrassManager_C::DirectionChangeDuration' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, StrengthChangeDuration) == 0x000290, "Member 'ABP_BG_InteractiveGrassManager_C::StrengthChangeDuration' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, TransformOptimizeStrength) == 0x000294, "Member 'ABP_BG_InteractiveGrassManager_C::TransformOptimizeStrength' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, TransformOptimizeStartRadius) == 0x000298, "Member 'ABP_BG_InteractiveGrassManager_C::TransformOptimizeStartRadius' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, FoliageComponent) == 0x0002A0, "Member 'ABP_BG_InteractiveGrassManager_C::FoliageComponent' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, FoliageChunkSize) == 0x0002A8, "Member 'ABP_BG_InteractiveGrassManager_C::FoliageChunkSize' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, FoliageChunkDeactivateRadius) == 0x0002AC, "Member 'ABP_BG_InteractiveGrassManager_C::FoliageChunkDeactivateRadius' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, interactiveFoliageChunks) == 0x0002B0, "Member 'ABP_BG_InteractiveGrassManager_C::interactiveFoliageChunks' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, FoliageChunkDetectionInterval) == 0x0002C0, "Member 'ABP_BG_InteractiveGrassManager_C::FoliageChunkDetectionInterval' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, FoliageChunkDeactivateInterval) == 0x0002C4, "Member 'ABP_BG_InteractiveGrassManager_C::FoliageChunkDeactivateInterval' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, originalCloudShadowOpacity) == 0x0002C8, "Member 'ABP_BG_InteractiveGrassManager_C::originalCloudShadowOpacity' has a wrong offset!");
static_assert(offsetof(ABP_BG_InteractiveGrassManager_C, componentsToSpawnWith) == 0x0002D0, "Member 'ABP_BG_InteractiveGrassManager_C::componentsToSpawnWith' has a wrong offset!");

}
