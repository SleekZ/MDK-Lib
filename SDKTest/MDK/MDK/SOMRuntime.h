
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortScriptedObjectMovement_GridProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
/// Size: 0x01C8 (0x000290 - 0x000458)
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(TArray<FFortScriptedObjectMovementPhaseData>) Phases                                                   OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FScalableFloat)                            NumSimulatenousMovingObjects                                OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            PhaseIntervalSeconds                                        OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScriptedObjectMovement_Grid)              BaseGrid                                                    OFFSET(getStruct<T>, {0x318, 200, 0, 0})
	SMember(FScriptedObjectMovement_DynamicPathContext) InProgressPath                                             OFFSET(getStruct<T>, {0x3E0, 56, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) LeavingSlotStack                                            OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) DestinationSlotStack                                        OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) OverflowSlotStack                                           OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TArray<AFortScriptedObjectMovement_MovableObjectBase*>) CurrentlyMovingObjects                         OFFSET(get<T>, {0x448, 16, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_SlotDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ScriptedObjectClass                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ObjectScale                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Slot
/// Size: 0x0020 (0x000620 - 0x000640)
class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	CMember(UFortScriptedObjectMovement_SlotDefinition*) SlotDefinition                                            OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(int32_t)                                   ObjectRemoveOrder                                           OFFSET(get<int32_t>, {0x628, 4, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) SlottedObject                                          OFFSET(get<T>, {0x630, 8, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Structure
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFortScriptedObjectMovement_Structure : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) CachedObjectSlots                                           OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_SlotDefinition*>) CachedSlotDefinitions                             OFFSET(get<T>, {0x2A0, 16, 0, 0})
};

/// Class /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<AFortScriptedObjectMovement_WorldPhaseSite*>) WorldPhaseSites                                   OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<AScriptedObjectMovement_StaticPath*>) RegisteredStaticPaths                                     OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(AScriptedObjectMovement_StaticPath*)       CurrentlyMovingStaticPath                                   OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FScalableFloat)                            StaticPathCooldownBetweenMoves                              OFFSET(getStruct<T>, {0x190, 40, 0, 0})


	/// Functions
	// Function /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
	// void HandleCurrentPlaylistReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x9b0edd4] Final|Native|Private|HasOutParms 
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
/// Size: 0x0218 (0x000978 - 0x000B90)
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	DMember(int32_t)                                   Editor_SkipMasterPathIndex                                  OFFSET(get<int32_t>, {0x9F0, 4, 0, 0})
	DMember(int32_t)                                   Editor_SkipSubPathIndex                                     OFFSET(get<int32_t>, {0x9F4, 4, 0, 0})
	DMember(int32_t)                                   Editor_NumStepsPerClick                                     OFFSET(get<int32_t>, {0x9F8, 4, 0, 0})
	CMember(UFortScriptedObjectMovement_SlotDefinition*) AssignedSlotDefinition                                    OFFSET(get<T>, {0xA20, 8, 0, 0})
	SMember(FScriptedObjectMovement_DynamicPathContext) MovementPath                                               OFFSET(getStruct<T>, {0xA28, 56, 0, 0})
	CMember(UStaticMesh*)                              ScriptedObjectMesh                                          OFFSET(get<T>, {0xA68, 8, 0, 0})
	DMember(bool)                                      bDebugStaticMovement                                        OFFSET(get<bool>, {0xA88, 1, 0, 0})
	DMember(bool)                                      bWaitingForBeginPlaySkip                                    OFFSET(get<bool>, {0xA89, 1, 0, 0})
	CMember(AScriptedObjectMovement_StaticPath*)       StaticFollowPath                                            OFFSET(get<T>, {0xA90, 8, 0, 0})
	SMember(FScriptedObjectMovement_StaticPathStepData) CurrentStepData                                            OFFSET(getStruct<T>, {0xAA0, 240, 0, 0})


	/// Functions
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, UActorComponent* TargetActorComponent);                   // [0x9b0f050] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
	// void OnRep_CurrentStepData();                                                                                            // [0x9b0f03c] Final|Native|Private 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
	// void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep);                                                       // [0x9b0efbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
	// void HandleSlotDefinitionSlotted(UFortScriptedObjectMovement_SlotDefinition* SlotDefinition);                            // [0x9b0ef04] Native|Event|Public|BlueprintEvent 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
	// float GetStaticPathZOffsetHeight();                                                                                      // [0x9b0cf48] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
	// void GetStaticPathTravelingBounds(FVector& OutBoxExtent);                                                                // [0x9b0cebc] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
	// UStaticMeshComponent* GetScriptedObjectStaticMeshComponent();                                                            // [0x9b0ce94] Native|Event|Public|BlueprintEvent 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
	// void Editor_TryJumpToStartStep();                                                                                        // [0x9b0ce6c] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
	// void Editor_ResetObject();                                                                                               // [0x9b0cdfc] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
	// void Editor_PreviousStep();                                                                                              // [0x2cf4738] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
	// void Editor_NextStep();                                                                                                  // [0x2cf4738] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
	// void Editor_DebugLogStaticPathTravelIndex();                                                                             // [0x9b0cde8] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
	// void Editor_ClearResetObjectLocation();                                                                                  // [0x9b0cdc4] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
	// void ConfigureStaticMeshToSlotDefinition(UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, UStaticMeshComponent* StaticMeshComponent); // [0x9b0ccf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
	// void CheatDrawKeyframes();                                                                                               // [0x2cf4738] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
	// void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime);                       // [0x9b0cc28] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
	// bool BlockOverlappingStaticPathSteps();                                                                                  // [0x9b0cc00] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
	// void BeginMovingToStaticPathNode(FScriptedObjectMovement_StaticPathStepData& StepData);                                  // [0x9b0cb40] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData>) CheatCalendarEvents             OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_StaticPath
/// Size: 0x0250 (0x000290 - 0x0004E0)
class AScriptedObjectMovement_StaticPath : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(USplineComponent*)                         MasterSplinePath                                            OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StaticPathTravelerData>) PathTravelers                                  OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StaticPathSplineInputKeyData>) SplineData                               OFFSET(get<T>, {0x2C0, 16, 0, 0})
	DMember(float)                                     StepSpacingDistance                                         OFFSET(get<float>, {0x2D0, 4, 0, 0})
	CMember(TWeakObjectPtr<UScriptedObjectMovement_CalendarCheatDefinition*>) CheatCalendarEventDefinition         OFFSET(get<T>, {0x2D8, 32, 0, 0})
	SMember(FGameplayTag)                              MovementStyleTag                                            OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FString)                                   EnterSplineCalendarEvent                                    OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FString)                                   ExitSplineCalendarEvent                                     OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	CMember(TArray<FStaticPathCalendarSplinePointGroup>) OrderedCalendarEventPointGroups                           OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(UFortAsyncAction_CalendarMultiEventWatcher*) CalendarWatcherAction                                     OFFSET(get<T>, {0x4D0, 8, 0, 0})


	/// Functions
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
	// void UnlockAllPathsFromBeingRegenerated();                                                                               // [0x9b0f114] Final|Native|Public  
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
	// void LockAllPathNodesFromBeingRegenerated();                                                                             // [0x9b0ef88] Final|Native|Public  
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
	// void HandleCalendarEventUpdated(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x9b0e3b4] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
	// void HandleCalendarEventEnded(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x9b0d994] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
	// void HandleCalendarEventActive(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x9b0cf74] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
	// void GeneratePathData();                                                                                                 // [0x9b0ce80] Final|Native|Public  
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
class FScriptedObjectMovement_AStarGraphWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_DynamicPathContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FScriptedObjectMovement_DynamicPathContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortScriptedObjectMovement_Slot*)         SourceSlot                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFortScriptedObjectMovement_Slot*)         DestinationSlot                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   GridProvider                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_Grid
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FScriptedObjectMovement_Grid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   CellSize                                                    OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/SOMRuntime.FortScriptedObjectMovementPhaseData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortScriptedObjectMovementPhaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AFortScriptedObjectMovement_Structure*>) Structures                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovementCalendarEventData
/// Size: 0x0028 (0x000000 - 0x000028)
class FScriptedObjectMovementCalendarEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
/// Size: 0x0018 (0x000000 - 0x000018)
class FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     DurationTimeSeconds                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DelayStartTimeSeconds                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathStepData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FScriptedObjectMovement_StaticPathStepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                StartWorldTransform                                         OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                EndWorldTransform                                           OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	DMember(int32_t)                                   MasterPathStartSplinePoint                                  OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   SubSplineStartPoint                                         OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     MoveAtServerTimeSecs                                        OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) PathTraveler                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FGameplayTag)                              MoveStyleTag                                                OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bIsSkipStep                                                 OFFSET(get<bool>, {0xE5, 1, 0, 0})
};

/// Struct /Script/SOMRuntime.StaticPathCalendarSplinePointGroup
/// Size: 0x0030 (0x000000 - 0x000030)
class FStaticPathCalendarSplinePointGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
/// Size: 0x0028 (0x000000 - 0x000028)
class FScriptedObjectMovement_StaticPathSplineInputKeyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bLockGeneratedData                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   CalendarEvent                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   PauseCalendarEvent                                          OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StepMetaData
/// Size: 0x0001 (0x000000 - 0x000001)
class FScriptedObjectMovement_StepMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bSkipStep                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FScriptedObjectMovement_StaticPathTravelerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<USplineComponent*>)                 GeneratedSplinesArray                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StepMetaData>) StepMetaData                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(USplineComponent*)                         EnterSpline                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(USplineComponent*)                         ExitSpline                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) PathTraveler                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   TravelOrder                                                 OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     LateralOffset                                               OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bLockEnterSpline                                            OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bLockExitSpline                                             OFFSET(get<bool>, {0x42, 1, 0, 0})
	SMember(FVector)                                   TravelerBounds                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

