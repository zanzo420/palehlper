#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x190 - 0x180)
// BlueprintGeneratedClass BP_ActionWatering_Player.BP_ActionWatering_Player_C
class UBP_ActionWatering_Player_C : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x180(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionWatering_Player_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionWatering_Player(int32 EntryPoint, class UAnimMontage* CallFunc_FindMontage_Montage, bool CallFunc_FindMontage_Exist, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_WateringCan_C* CallFunc_FinishSpawningActor_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


