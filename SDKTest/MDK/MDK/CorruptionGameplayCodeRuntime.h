
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MeshNetwork
/// dependency: SOMRuntime

/// Class /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap
/// Size: 0x0068 (0x000028 - 0x000090)
class UCorruptionCoverageMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCorruptionSequenceData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCorruptionCalendarEventData>)      CorruptionStartEvents                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCorruptionPauseEvent>)             CorruptionPauseEvents                                       OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath
/// Size: 0x0030 (0x0004E0 - 0x000510)
class ACubeMovementStaticPath : public AScriptedObjectMovement_StaticPath
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(float)                                     GenerationZTraceHeight                                      OFFSET(get<float>, {0x4D8, 4, 0, 0})
	DMember(float)                                     CubeSpacingFactor                                           OFFSET(get<float>, {0x4DC, 4, 0, 0})
	DMember(float)                                     CubeAngleLimitDegrees                                       OFFSET(get<float>, {0x4E0, 4, 0, 0})
	CMember(UFortCorruptionSequenceData*)              CorruptionSequence                                          OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(TArray<FTravelerStepCorruptionOverrideData>) TravelerCorruptionStepPercentOverrides                    OFFSET(get<T>, {0x4F8, 16, 0, 0})


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
	// void EditorGetCorruptionGenerationData(FCubeMovement_CorruptionGenerationData& OutData);                                 // [0x9b396b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData
	// void ClearAllGeneratedSplinesAndLockedData();                                                                            // [0x9b394d0] Final|Native|Protected 
};

/// Class /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
/// Size: 0x0068 (0x000490 - 0x0004F8)
class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	SMember(FWarEffortMutatorMetadata)                 MeshNetworkMetadata                                         OFFSET(getStruct<T>, {0x498, 32, 0, 0})
	CMember(TArray<FWarEffortMutatorChoiceData>)       WeaponChoices                                               OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<FPrimaryAssetId>)                   PreloadedItemList                                           OFFSET(get<T>, {0x4C8, 16, 0, 0})
	DMember(bool)                                      bCanPreloadItems                                            OFFSET(get<bool>, {0x4D8, 1, 0, 0})


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
	// void SetTryBeforeYouBuyItemState(FGameplayTag ItemFundingTag, bool bIsActive);                                           // [0x9b3abf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
	// void SetItemFundedState(FGameplayTag ItemFundingTag, bool bIsActive);                                                    // [0x9b3a978] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
	// void SetItemFundedPercent(FGameplayTag ItemFundingTag, float FundingPercent);                                            // [0x9b3a70c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
	// void SetItemFundedAmount(FGameplayTag ItemFundingTag, int64_t CurrentFundingAmount, int64_t TargetFundingAmount);        // [0x9b3a38c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
	// void SetFundingManagerReady(bool bIsReady);                                                                              // [0x9b3a30c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList
	// void OnRep_PreloadedItemList();                                                                                          // [0x9b3a2f8] Final|Native|Protected 
};

/// Class /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor
/// Size: 0x0088 (0x000290 - 0x000318)
class AWarEffortMeshActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UMeshNetworkComponent*)                    MeshNetworkComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      ActiveFundedItems                                           OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      ActiveTryBeforeYouBuyItems                                  OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(TArray<FWarEffortFundingData>)             CurrentFundingData                                          OFFSET(get<T>, {0x2B8, 16, 0, 0})


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData
	// void OnRep_CurrentFundingData();                                                                                         // [0x9b3a2e4] Final|Native|Protected 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems
	// void OnRep_ActiveTryBeforeYouBuyItems();                                                                                 // [0x9b3a2d0] Final|Native|Protected 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems
	// void OnRep_ActiveFundedItems();                                                                                          // [0x9b3a2bc] Final|Native|Protected 
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FWarEffortFundingOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              OptionTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   CurrentFundingAmount                                        OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FWarEffortFundingChoiceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FWarEffortFundingOptionData)               Option1                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FWarEffortFundingOptionData)               Option2                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   TargetFundingAmount                                         OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
/// Size: 0x0020 (0x000000 - 0x000020)
class FWarEffortIndexedFundingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int64_t>)                           CurrentFundingArray                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   FinalFundingAmount                                          OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   TowerFundingAmount                                          OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
/// Size: 0x002F (0x000001 - 0x000030)
class FWarEffortFundingMetadata : public FMeshMetaDataStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FWarEffortIndexedFundingData)              IndexedFundingData                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<FWarEffortFundingChoiceData>)       FundingChoices                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
/// Size: 0x0070 (0x000000 - 0x000070)
class FCubeMovement_CorruptionGenerationSplinePointData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                SplinePointTransform                                        OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	DMember(float)                                     SplinePercentComplete                                       OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
/// Size: 0x0018 (0x000000 - 0x000018)
class FCubeMovement_CorruptionGenerationTravelerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FCubeMovement_CorruptionGenerationSplinePointData>) SplinePointData                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) PathTraveler                                           OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCubeMovement_CorruptionGenerationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCubeMovement_CorruptionGenerationTravelerData>) TravelerData                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
/// Size: 0x0018 (0x000000 - 0x000018)
class FCorruptionCalendarEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     StartPercent                                                OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CorruptionPauseEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FCorruptionPauseEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     PercentDurationToPause                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
/// Size: 0x0050 (0x000000 - 0x000050)
class FTravelerStepCorruptionOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, float>)                      PointGroupStepPercentOverrides                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FWarEffortMutatorChoiceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTag)                              FundingTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SoftRefsToLoad                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FScalableFloat>)               LootTableMods                                               OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
/// Size: 0x001F (0x000001 - 0x000020)
class FWarEffortMutatorMetadata : public FMeshMetaDataStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      ActiveFundedItems                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      ActiveTryBeforeYouBuyItems                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FWarEffortFundingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              FundingTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FundedPercent                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/CorruptionGameplayCodeRuntime.EWarEffortFundingStationType
/// Size: 0x04
enum EWarEffortFundingStationType : uint8_t
{
	Final0                                                                           = 0,
	Tower1                                                                           = 1,
	Choice2                                                                          = 2,
	EWarEffortFundingStationType_MAX3                                                = 3
};

