#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1F0 - 0x138)
// BlueprintGeneratedClass BP_ActionDeath.BP_ActionDeath_C
class UBP_ActionDeath_C : public UPalActionBase
{
public:
	uint8                                        Pad_425A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DestoryInterval;                                   // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            DefaultTransform;                                  // 0x150(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DestoryHandle;                                     // 0x1B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DownForceAble;                                     // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoEffect;                                          // 0x1B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PreLocation;                                       // 0x1C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x1D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionDeath_C* GetDefaultObj();

	void InWaterFloat(const struct FVector& Force, double Damp, double DeltaZ, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class FName CallFunc_GetPhysicsRootBoneName_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Vector_Up_ReturnValue, double CallFunc_FClamp_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_GetWaterPlaneLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void SetLiftUpAble(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterLiftupObjectComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFriend_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void BlowScale(double* Scale, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetMass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void BlowCharacter(const struct FVector& BlowVelocity, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class FName CallFunc_GetBoneName_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BlowScale_Scale, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BlowScale_Scale_1, const struct FVector& CallFunc_GetActionVelocity_ReturnValue_1, const struct FVector& CallFunc_GetActionVelocity_ReturnValue_2, double CallFunc_VSizeSquared_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1);
	void OnLoaded_262CCA3245DB10CE95CE098A425EF51F(class UObject* Loaded);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void ShowEffect();
	void ExecuteUbergraph_BP_ActionDeath(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_PlayAkEventSoundByActor_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class FName CallFunc_GetPhysicsRootBoneName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class APalNPC* K2Node_DynamicCast_AsPal_NPC, bool K2Node_DynamicCast_bSuccess_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_11, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_12, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool CallFunc_IsEnteredWater_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_13, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_14, class FName CallFunc_GetPhysicsRootBoneName_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_15, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, TArray<class UPalSkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPalDeathPenaltyManager* CallFunc_GetDeathPenaltyManager_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_16, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_18, bool CallFunc_IsServer_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_19, bool CallFunc_IsServer_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_20, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_21, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_22, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_23, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


