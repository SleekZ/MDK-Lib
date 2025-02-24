
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/ClamberingCodeRuntime.ClamberingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClamberingCodeRuntime.ClamberingComponent
/// Size: 0x0B18 (0x0000A8 - 0x000BC0)
class UClamberingComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	CMember(EClamberingState)                          LocalClamberingState                                        OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EClamberingState)                          ReplicatedClamberingState                                   OFFSET(get<T>, {0xB1, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LockedTargetingData                                         OFFSET(getStruct<T>, {0xB8, 208, 0, 0})
	SMember(FReplicatedClamberingTargetingData_SimClient) ReplicatedTargetingData                                  OFFSET(getStruct<T>, {0x188, 56, 0, 0})
	SMember(FScalableFloat)                            ClamberingEnabled                                           OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberIndicatorEnabled                                     OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberStartMaxFallingDamageFraction                        OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileWalking                               OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileSwimming                              OFFSET(get<bool>, {0x241, 1, 0, 0})
	SMember(FScalableFloat)                            ServerFailDelay                                             OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            ServerValidatePlayerMaxDistance                             OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FClamberingInputConfig)                    InputConfig                                                 OFFSET(getStruct<T>, {0x298, 528, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge)          TargetingConfig_Ledge                                       OFFSET(getStruct<T>, {0x4A8, 888, 0, 0})
	SMember(FClamberingInputConfig_CachedValues)       InputConfigCachedValues                                     OFFSET(getStruct<T>, {0x820, 56, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge_CachedContextualValues) TargetingConfig_Ledge_CachedContextualValues  OFFSET(getStruct<T>, {0x858, 96, 0, 0})
	SMember(FClamberingMovementConfig_Ledge)           MoveConfig_Ledge                                            OFFSET(getStruct<T>, {0x8B8, 80, 0, 0})
	SMember(FScalableFloat)                            ClamberSyncTargetLedgeOffset                                OFFSET(getStruct<T>, {0x908, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberingMaxAnalyticsEvents                                OFFSET(getStruct<T>, {0x930, 40, 0, 0})
	SMember(FScalableFloat)                            SynchedActionFailDelay                                      OFFSET(getStruct<T>, {0x958, 40, 0, 0})
	CMember(UDataTable*)                               ClamberingAnimations                                        OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UDataTable*)                               PrototypeClamberingAnimations                               OFFSET(get<T>, {0x988, 8, 0, 0})
	DMember(double)                                    LastTeleportTime                                            OFFSET(get<double>, {0x990, 8, 0, 0})
	DMember(bool)                                      bTutorialModeEnabled                                        OFFSET(get<bool>, {0x998, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LocalTargetingData                                          OFFSET(getStruct<T>, {0x9A0, 208, 0, 0})
	SMember(FClamberingTargetingData)                  ParallelTargetingData                                       OFFSET(getStruct<T>, {0xA70, 208, 0, 0})
	DMember(float)                                     QueuedInputTimer                                            OFFSET(get<float>, {0xB40, 4, 0, 0})
	DMember(float)                                     InputEnabledTimer                                           OFFSET(get<float>, {0xB44, 4, 0, 0})
	DMember(bool)                                      bJumpInputPressed                                           OFFSET(get<bool>, {0xB48, 1, 0, 0})
	DMember(float)                                     JumpHeldInAirTime                                           OFFSET(get<float>, {0xB4C, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_DisableClambering                                       OFFSET(getStruct<T>, {0xBB8, 4, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                                 // [0x99f4f64] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
	// bool ShouldShowClamberIndicator();                                                                                       // [0x99f4f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
	// void SetTutorialModeEnabled(bool bEnabled);                                                                              // [0x99f4ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
	// void ServerStartClambering(FReplicatedClamberingTargetingData InReplicatedTargetingData, double ClientLastTeleportTime); // [0x99f4b6c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn);                                                                // [0x99f4968] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
	// void OnRep_ReplicatedTargetingData();                                                                                    // [0x2360ef4] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedLastTeleportTime
	// void OnRep_ReplicatedLastTeleportTime();                                                                                 // [0x25b2b28] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState
	// void OnRep_ReplicatedClamberingState();                                                                                  // [0x25b37ec] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x25b3f10] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x99f4870] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
	// void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState);             // [0x25b2070] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
	// bool IsTutorialModeEnabled();                                                                                            // [0x99f484c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
	// bool IsClamberingEnabled();                                                                                              // [0x99f4828] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
	// bool IsAutoClamberingEnabled();                                                                                          // [0x99f4804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FClamberingTargetingData& TargetingData);                                                  // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid();                                                                                       // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
	// void HandleTargetActorHealthChanged();                                                                                   // [0x99f47f0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
	// void HandleTargetActorDestroyed(AActor* Actor);                                                                          // [0x99f4770] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
	// void HandleOwnerTeleported(AFortPawn* TeleportedOwner);                                                                  // [0x33f0ec0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
	// void HandleOwnerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x17cbb3c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0x99f46f0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
	// void HandleOwnerDied(AFortPawn* DeadPawn);                                                                               // [0x99f4670] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
	// void HandleOwnerDBNO();                                                                                                  // [0x25b3498] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                        // [0x25b34c0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn);      // [0x2b1dc74] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
	// void HandleClamberingTargetOutOfActivationRange();                                                                       // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
	// void HandleClamberingTargetInActivationRange();                                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.GetAnimMontage
	// UAnimMontage* GetAnimMontage(float& OutPlayRate);                                                                        // [0x99f45d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
	// void DrawDebugHUD(AHUD* HUD, UCanvas* Canvas);                                                                           // [0x5fec7d0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
	// void BP_TutorialModeEnabled();                                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
	// void BP_TutorialModeDisabled();                                                                                          // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
	// void BP_IsValidTargetActor(AActor* TargetActor, bool& bIsValidTargetActor);                                              // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
	// void BP_HandleSynchedActionStarted(FSynchedActionInfo& SynchedActionInfo);                                               // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
	// void BP_HandleClamberingStateChanged(EClamberingState OldClamberingState, EClamberingState NewClamberingState);          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
	// void BP_CanStartTargeting(bool& bCanStartTargeting);                                                                     // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
	// void BP_CanStartClambering(bool& bCanStartClambering);                                                                   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ClamberingCodeRuntime.ClamberingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig
/// Size: 0x0210 (0x000000 - 0x000210)
class FClamberingInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FScalableFloat)                            ClamberActivationHorizontalRange                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberActivationVerticalRange                              OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            EnableInputDelay                                            OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            QueuedInputWindow                                           OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HeldInputDuration                                           OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(EClamberingActivationMode)                 ActivationMode                                              OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FScalableFloat)                            AutoStartMovementThreshold                                  OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartLookAtThreshold                                    OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckCastRadius                                OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckHorizontalRange                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckLookAtThresholdMultiplier                 OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            TargetInvalidateDistance                                    OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            TargetAimInvalidateAngle                                    OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetActorMovementInvalidateDistance                       OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
/// Size: 0x0378 (0x000000 - 0x000378)
class FClamberingTargetingConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FScalableFloat)                            ForwardCastDistance                                         OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastRadius                                           OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            FowardCast2D                                                OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalSurfaceThreshold                                    OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HorizontalSurfaceThreshold                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardDistanceCapsuleHeightMultiplier                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardStartDistanceCapsuleHeightMultiplier                  OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardDistanceCapsuleHeightMultiplier                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeight                                          OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeightWater                                     OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            FallingSpeedThreshold                                       OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingHeight                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingWaterHeight                              OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardSphereCastRadius                                     OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSphereCastRadius                                    OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            AllowNonWalkableSurfaces                                    OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationEnabled                                     OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleRadiusModifier                       OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleHalfHeightModifier                   OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleBottomVerticalOffset                 OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeDepth                                           OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSweepOffset                                         OFFSET(getStruct<T>, {0x350, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
/// Size: 0x0038 (0x000000 - 0x000038)
class FClamberingInputConfig_CachedValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
/// Size: 0x0060 (0x000000 - 0x000060)
class FClamberingTargetingConfig_Ledge_CachedContextualValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingTargetingDebugDrawData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
/// Size: 0x0028 (0x000028 - 0x000050)
class FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
/// Size: 0x0018 (0x000028 - 0x000040)
class FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
/// Size: 0x0008 (0x000028 - 0x000030)
class FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
/// Size: 0x0020 (0x000028 - 0x000048)
class FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
/// Size: 0x0020 (0x000050 - 0x000070)
class FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
/// Size: 0x0018 (0x000030 - 0x000048)
class FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FClamberingTargetingDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
/// Size: 0x0000 (0x000001 - 0x000001)
class FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bCanStandOnLedge                                            OFFSET(get<bool>, {0x1, 1, 1, 1})
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
/// Size: 0x0078 (0x000000 - 0x000078)
class FReplicatedClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     SourceLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize100)                    WallLocation                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(uint16_t)                                  WallNormalPitchQuantized                                    OFFSET(get<uint16_t>, {0x3A, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(uint16_t)                                  TargetNormalYawQuantized                                    OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
	DMember(uint16_t)                                  TargetNormalPitchQuantized                                  OFFSET(get<uint16_t>, {0x5A, 2, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              OFFSET(get<int8_t>, {0x74, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
/// Size: 0x0038 (0x000000 - 0x000038)
class FReplicatedClamberingTargetingData_SimClient : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              OFFSET(get<int8_t>, {0x34, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberingMovementConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            Duration                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            BlockCheckTickRate                                          OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingAnalytics_ClamberEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MatchTime                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EClamberingType)                           ClamberType                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FVector)                                   ClamberLocation                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EClamberingFailedReason)                   FailureReason                                               OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
/// Size: 0x0010 (0x000008 - 0x000018)
class FClamberingAnimationEntry : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAnimMontage*)                             Montage                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     MinClamberHeight                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bLedgeLaunch                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingType
/// Size: 0x04
enum EClamberingType : uint8_t
{
	EClamberingType__Invalid0                                                        = 0,
	EClamberingType__Ledge1                                                          = 1,
	EClamberingType__Window2                                                         = 2,
	EClamberingType__EClamberingType_MAX3                                            = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingState
/// Size: 0x07
enum EClamberingState : uint8_t
{
	EClamberingState__Inactive0                                                      = 0,
	EClamberingState__Targeting1                                                     = 1,
	EClamberingState__Ledge_Moving2                                                  = 2,
	EClamberingState__Ledge_Failed3                                                  = 3,
	EClamberingState__Window_Moving4                                                 = 4,
	EClamberingState__Window_Failed5                                                 = 5,
	EClamberingState__EClamberingState_MAX6                                          = 6
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
/// Size: 0x14
enum EClamberingFailedReason : uint8_t
{
	EClamberingFailedReason__None0                                                   = 0,
	EClamberingFailedReason__Unknown1                                                = 1,
	EClamberingFailedReason__DebugForced2                                            = 2,
	EClamberingFailedReason__OwnerDied3                                              = 3,
	EClamberingFailedReason__OwnerDBNO4                                              = 4,
	EClamberingFailedReason__OwnerLaunched5                                          = 5,
	EClamberingFailedReason__SynchedActionNotStarted6                                = 6,
	EClamberingFailedReason__OwnerTeleported7                                        = 7,
	EClamberingFailedReason__Ledge_PlayerTooFar8                                     = 8,
	EClamberingFailedReason__Ledge_TargetLocationInvalid9                            = 9,
	EClamberingFailedReason__Ledge_TargetActorInvalid10                              = 10,
	EClamberingFailedReason__Ledge_TargetActorDestroyed11                            = 11,
	EClamberingFailedReason__Ledge_BlockerEncountered12                              = 12,
	EClamberingFailedReason__EClamberingFailedReason_MAX13                           = 13
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingActivationMode
/// Size: 0x04
enum EClamberingActivationMode : uint8_t
{
	EClamberingActivationMode__ClientPreference0                                     = 0,
	EClamberingActivationMode__ForceAutoClambering1                                  = 1,
	EClamberingActivationMode__ForceManualClambering2                                = 2,
	EClamberingActivationMode__EClamberingActivationMode_MAX3                        = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingDebugTextAlign
/// Size: 0x04
enum EClamberingDebugTextAlign : uint8_t
{
	EClamberingDebugTextAlign__Left0                                                 = 0,
	EClamberingDebugTextAlign__Right1                                                = 1,
	EClamberingDebugTextAlign__Center2                                               = 2,
	EClamberingDebugTextAlign__EClamberingDebugTextAlign_MAX3                        = 3
};

