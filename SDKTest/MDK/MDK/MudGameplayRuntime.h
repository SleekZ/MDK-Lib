
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/MudGameplayRuntime.FortPawnComponent_Mud
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UFortPawnComponent_Mud : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTag)                              CurieFireTag                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FGameplayTag)                              SlidingTag                                                  OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FGameplayTag)                              SprintingTag                                                OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FGameplayTag)                              AttachParentCoveredEventTag                                 OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FGameplayTag)                              CreatureSprintingTag                                        OFFSET(getStruct<T>, {0xB8, 4, 0, 0})


	/// Functions
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnSprintingTagCountChanged
	// void OnSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnSlidingTagCountChanged
	// void OnSlidingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                       // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnExitedMud
	// void OnExitedMud();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnEnteredMud
	// void OnEnteredMud();                                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnCurieFireTagCountChanged
	// void OnCurieFireTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnCreatureSprintingTagCountChanged
	// void OnCreatureSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                             // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnAttachedParentCoveredInMud
	// void OnAttachedParentCoveredInMud(FGameplayEventData& Payload);                                                          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.HandleSurfaceTypeChanged
	// void HandleSurfaceTypeChanged(AActor* SurfaceActor, TEnumAsByte<EPhysicalSurface> CurrentSurfaceType, TEnumAsByte<EPhysicalSurface> PrevSurfaceType); // [0x26d2274] Final|Native|Private 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.HandleASCInitialized
	// void HandleASCInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn);           // [0x2b7be2c] Final|Native|Private 
};

