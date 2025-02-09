
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
/// Size: 0x01A0 (0x000B28 - 0x000CC8)
class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3272;

public:
	SMember(FFortScoutDroneDiveTransitionData)         EaseInData                                                  OFFSET(getStruct<T>, {0xB38, 48, 0, 0})
	SMember(FFortScoutDroneDiveTransitionData)         EaseOutData                                                 OFFSET(getStruct<T>, {0xB68, 48, 0, 0})
	SMember(FScalableFloat)                            DiveUpdateInterval                                          OFFSET(getStruct<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            DiveSpeedIncrease                                           OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedToDive                                              OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistToGround                                             OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            TargetPitchToDive                                           OFFSET(getStruct<T>, {0xC40, 40, 0, 0})
	SMember(FScalableFloat)                            DivingGravityScale                                          OFFSET(getStruct<T>, {0xC68, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedDivingGravityScale                                  OFFSET(getStruct<T>, {0xC90, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
	// void BP_OnDroneStoppedDiving();                                                                                          // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
	// void BP_OnDroneStartedDiving();                                                                                          // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
/// Size: 0x0048 (0x000B28 - 0x000B70)
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	CMember(UTargetingPreset*)                         TargetingPreset                                             OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        OFFSET(getStruct<T>, {0xB30, 4, 0, 0})
	SMember(FTimerHandle)                              TargetingTimerHandle                                        OFFSET(getStruct<T>, {0xB38, 8, 0, 0})
	SMember(FScalableFloat)                            TargetingInterval                                           OFFSET(getStruct<T>, {0xB40, 40, 0, 0})
	DMember(bool)                                      bUseControllerAsInstigator                                  OFFSET(get<bool>, {0xB68, 1, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
	// void StopTargeting();                                                                                                    // [0x9bc5070] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
	// void StartTargeting();                                                                                                   // [0x9bc5048] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
	// void BP_OnTargetsFound(FTargetingRequestHandle& TargetingHandle);                                                        // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
/// Size: 0x00F0 (0x000B70 - 0x000C60)
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3168;

public:
	SMember(FGameplayTag)                              DoorBashCueTag                                              OFFSET(getStruct<T>, {0xB70, 4, 0, 0})
	CMember(UClass*)                                   DamageGameplayEffectClass                                   OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FGameplayTag)                              DoorBashPawnLaunchGameplayCueTag                            OFFSET(getStruct<T>, {0xB80, 4, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabledHotfix                                       OFFSET(getStruct<T>, {0xB88, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashSphereRadiusForPawnLaunch                           OFFSET(getStruct<T>, {0xBB0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashScalarForPawnLaunch                                 OFFSET(getStruct<T>, {0xBD8, 40, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DoorBashCollisionTypesForPawn                               OFFSET(get<T>, {0xC00, 16, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabled                                             OFFSET(getStruct<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            DamageOnBoostEnabled                                        OFFSET(getStruct<T>, {0xC38, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
	// void OnDoorBashed(FHitResult& HitResult, UFortBuildingWallDoorComponent* BashedDoor);                                    // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
	// void OnBoostedIntoActor(FHitResult& HitResult);                                                                          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     SessionStartTime                                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SessionLength                                               OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FScalableFloat)                            MinSessionLength                                            OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     DistanceTraveled                                            OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfContainersInteractedWith                            OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfItemsPickedUp                                       OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<FString>)                           DBNOCarriedPlayers                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesPassivelyMarked                              OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesMarkedOnCaw                                  OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   NumberOfCaws                                                OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceTraveledUpdateInterval                              OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FTimerHandle)                              DistanceTraveledUpdateTimerHandle                           OFFSET(getStruct<T>, {0x138, 8, 0, 0})
	SMember(FVector)                                   LastRecorderDroneLocation                                   OFFSET(getStruct<T>, {0x140, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
/// Size: 0x01F0 (0x000440 - 0x000630)
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UFortScoutDroneMovementComponent*)         FortScoutDroneMovementComponent                             OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(double)                                    YawDeltaLastTick                                            OFFSET(get<double>, {0x440, 8, 0, 0})
	SMember(FRotator)                                  ActorCurrentRotationTick                                    OFFSET(getStruct<T>, {0x448, 24, 0, 0})
	DMember(double)                                    YawDeltaCurrentTick                                         OFFSET(get<double>, {0x460, 8, 0, 0})
	SMember(FRotator)                                  ActorRotationLastTick                                       OFFSET(getStruct<T>, {0x468, 24, 0, 0})
	DMember(bool)                                      IsFlying                                                    OFFSET(get<bool>, {0x480, 1, 0, 0})
	DMember(double)                                    CurrentVelocity                                             OFFSET(get<double>, {0x488, 8, 0, 0})
	DMember(double)                                    LastVelocity                                                OFFSET(get<double>, {0x490, 8, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x498, 8, 0, 0})
	DMember(double)                                    ForwardInputAlpha                                           OFFSET(get<double>, {0x4A0, 8, 0, 0})
	DMember(double)                                    StrafeInputAlpha                                            OFFSET(get<double>, {0x4A8, 8, 0, 0})
	SMember(FRotator)                                  DroneRotation                                               OFFSET(getStruct<T>, {0x4B0, 24, 0, 0})
	DMember(double)                                    Acceleration                                                OFFSET(get<double>, {0x4C8, 8, 0, 0})
	CMember(AFortScoutDrone*)                          ScoutDrone                                                  OFFSET(get<T>, {0x4D0, 8, 0, 0})
	DMember(bool)                                      IsBoosting                                                  OFFSET(get<bool>, {0x4D8, 1, 0, 0})
	DMember(bool)                                      IsDiving                                                    OFFSET(get<bool>, {0x4D9, 1, 0, 0})
	DMember(double)                                    AimPitch                                                    OFFSET(get<double>, {0x4E0, 8, 0, 0})
	DMember(double)                                    NegativeAimPitch                                            OFFSET(get<double>, {0x4E8, 8, 0, 0})
	SMember(FRotator)                                  FinalFanRotationL                                           OFFSET(getStruct<T>, {0x4F0, 24, 0, 0})
	SMember(FRotator)                                  FinalFanRotationR                                           OFFSET(getStruct<T>, {0x508, 24, 0, 0})
	DMember(double)                                    FanIdleSpeed                                                OFFSET(get<double>, {0x520, 8, 0, 0})
	DMember(double)                                    FanAuthoredSpeed                                            OFFSET(get<double>, {0x528, 8, 0, 0})
	DMember(double)                                    FanIdleAuthoredSpeed                                        OFFSET(get<double>, {0x530, 8, 0, 0})
	DMember(double)                                    FanBwdSpeed                                                 OFFSET(get<double>, {0x538, 8, 0, 0})
	DMember(double)                                    FanFwdSpeed                                                 OFFSET(get<double>, {0x540, 8, 0, 0})
	DMember(double)                                    TurnNoiseAlpha                                              OFFSET(get<double>, {0x548, 8, 0, 0})
	DMember(double)                                    LeanAlpha                                                   OFFSET(get<double>, {0x550, 8, 0, 0})
	DMember(double)                                    TurnAlpha                                                   OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(bool)                                      IsColliding                                                 OFFSET(get<bool>, {0x560, 1, 0, 0})
	DMember(bool)                                      IsFlyingBwd                                                 OFFSET(get<bool>, {0x561, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromFlying                                        OFFSET(get<bool>, {0x562, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromDiving                                        OFFSET(get<bool>, {0x563, 1, 0, 0})
	DMember(bool)                                      EarlyIntoLoop                                               OFFSET(get<bool>, {0x564, 1, 0, 0})
	DMember(double)                                    AccelerationZ                                               OFFSET(get<double>, {0x568, 8, 0, 0})
	DMember(bool)                                      IsLeftStrafe                                                OFFSET(get<bool>, {0x570, 1, 0, 0})
	DMember(bool)                                      WasStrafing                                                 OFFSET(get<bool>, {0x571, 1, 0, 0})
	DMember(double)                                    GroundDistance                                              OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(bool)                                      HasDivingConditionBeenMet                                   OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      IsItemAttached                                              OFFSET(get<bool>, {0x581, 1, 0, 0})
	DMember(bool)                                      IsPlayerAttached                                            OFFSET(get<bool>, {0x582, 1, 0, 0})
	DMember(double)                                    FlapTime                                                    OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   FlapRandomPick                                              OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(bool)                                      IsFlapSmall                                                 OFFSET(get<bool>, {0x594, 1, 0, 0})
	DMember(int32_t)                                   FlapRandomMaxRange                                          OFFSET(get<int32_t>, {0x598, 4, 0, 0})
	DMember(double)                                    FlapSmallTimeThreshold                                      OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(double)                                    FlapBigTimeThreshold                                        OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(double)                                    FlapSmallResetDelayDuration                                 OFFSET(get<double>, {0x5B0, 8, 0, 0})
	DMember(double)                                    FlapBigResetDelayDuration                                   OFFSET(get<double>, {0x5B8, 8, 0, 0})
	DMember(bool)                                      IsFlapBig                                                   OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(double)                                    VerticalInputAlpha                                          OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      WasVerticalUp                                               OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      IsFlyingVerticalUp                                          OFFSET(get<bool>, {0x5D1, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromBoostOutro                                    OFFSET(get<bool>, {0x5D2, 1, 0, 0})
	DMember(bool)                                      HasSpawned                                                  OFFSET(get<bool>, {0x5D3, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromSpawning                                      OFFSET(get<bool>, {0x5D4, 1, 0, 0})
	DMember(bool)                                      ShouldAllowTransition                                       OFFSET(get<bool>, {0x5D5, 1, 0, 0})
	DMember(bool)                                      StateRuleFromBoostOutroToFlying                             OFFSET(get<bool>, {0x5D6, 1, 0, 0})
	DMember(bool)                                      WasBoosting                                                 OFFSET(get<bool>, {0x5D7, 1, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostForceBoostVelocity                                OFFSET(getStruct<T>, {0x5D8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostMaxSpeedIncrease                                  OFFSET(getStruct<T>, {0x600, 40, 0, 0})
	DMember(bool)                                      IsFlappingTime                                              OFFSET(get<bool>, {0x628, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneGlove
/// Size: 0x0040 (0x0011F8 - 0x001238)
class AFortScoutDroneGlove : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4664;

public:
	SMember(FScalableFloat)                            HoldToDeployTime                                            OFFSET(getStruct<T>, {0x11F8, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
/// Size: 0x0020 (0x000B28 - 0x000B48)
class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
	CMember(UClass*)                                   RCActorClass                                                OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FVector)                                   SpawnOffset                                                 OFFSET(getStruct<T>, {0xB30, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            OFFSET(getStruct<T>, {0xB28, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
	// AFortScoutDrone* GetControlledDrone();                                                                                   // [0x9bc3eb8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
/// Size: 0x0130 (0x000B70 - 0x000CA0)
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3232;

public:
	SMember(FIndicatedActorData)                       IndicatedActorData                                          OFFSET(getStruct<T>, {0xB70, 248, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfPotentialTargets                                 OFFSET(getStruct<T>, {0xC78, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
	// void OnStoppedHighlightingTarget(AActor* Target);                                                                        // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
	// void OnStartHighlightingTarget(AActor* Target);                                                                          // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload
/// Size: 0x0008 (0x000028 - 0x000030)
class UScoutDronePassiveMarkPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScoutDroneStatusData)                     TargetStatus                                                OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
/// Size: 0x01F8 (0x000B70 - 0x000D68)
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3432;

public:
	SMember(FScoutDroneStatusData)                     CurrentTargetStatus                                         OFFSET(getStruct<T>, {0xB70, 8, 0, 0})
	SMember(FStenciledActorData)                       StenciledActorData                                          OFFSET(getStruct<T>, {0xB78, 128, 0, 0})
	SMember(FIndicatedActorData)                       IndicatedActorData                                          OFFSET(getStruct<T>, {0xBF8, 248, 0, 0})
	SMember(FScalableFloat)                            ActorTargetingRange                                         OFFSET(getStruct<T>, {0xCF0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToConfirmTarget                                         OFFSET(getStruct<T>, {0xD18, 40, 0, 0})
	CMember(AActor*)                                   CurrentTarget                                               OFFSET(get<T>, {0xD40, 8, 0, 0})
	SMember(FTimerHandle)                              TargetConfirmationTimerHandle                               OFFSET(getStruct<T>, {0xD48, 8, 0, 0})
	CMember(UScoutDronePassiveMarkPayload*)            PayloadCache                                                OFFSET(get<T>, {0xD50, 8, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
	// void OnRep_CurrentTargetStatus();                                                                                        // [0x9bc4b20] Final|Native|Protected 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
	// void OnActorIndicatorExpired(AActor* IndicatedActor);                                                                    // [0x9bc40bc] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
	// void BP_OnTargetStatusChanged(AActor* ActiveTarget);                                                                     // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
/// Size: 0x0018 (0x000028 - 0x000040)
class UScoutDronePickUpTargetsPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FScoutDronePickupTargets)                  PickUpTargets                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
/// Size: 0x0078 (0x000B70 - 0x000BE8)
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3048;

public:
	SMember(FScalableFloat)                            MaxNumberOfItemsToGrab                                      OFFSET(getStruct<T>, {0xB78, 40, 0, 0})
	CMember(UScoutDronePickUpTargetsPayload*)          PayloadCache                                                OFFSET(get<T>, {0xBA0, 8, 0, 0})
	SMember(FScalableFloat)                            PickupToggleCooldownDuration                                OFFSET(getStruct<T>, {0xBA8, 40, 0, 0})
	CMember(UClass*)                                   AttachedPawnGEClass                                         OFFSET(get<T>, {0xBE0, 8, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
	// void ServerConfirmTargets();                                                                                             // [0x766dbc0] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
/// Size: 0x0078 (0x000B28 - 0x000BA0)
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	SMember(FScalableFloat)                            WarningRange                                                OFFSET(getStruct<T>, {0xB28, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	DMember(bool)                                      bIsInWarningRange                                           OFFSET(get<bool>, {0xB78, 1, 0, 0})
	DMember(bool)                                      bIsInSignalLossRange                                        OFFSET(get<bool>, {0xB79, 1, 0, 0})
	SMember(FTimerHandle)                              TetheringTimerHandle                                        OFFSET(getStruct<T>, {0xB80, 8, 0, 0})
	SMember(FTimerHandle)                              TetheringReportTimerHandle                                  OFFSET(getStruct<T>, {0xB88, 8, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            OFFSET(getStruct<T>, {0xB90, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
	// void StopCheckingDistances();                                                                                            // [0x9bc505c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
	// void StartCheckingDistances();                                                                                           // [0x9bc5034] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
	// void OnRep_bIsInWarningRange();                                                                                          // [0x9bc4c4c] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
	// void OnRep_bIsInSignalLossRange();                                                                                       // [0x9bc4bf4] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
/// Size: 0x0048 (0x000338 - 0x000380)
class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FGameplayTagContainer)                     DroneAllowedInteractionTags                                 OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DroneBlockedInteractionTags                                 OFFSET(getStruct<T>, {0x358, 32, 0, 0})
	DMember(bool)                                      bIsControllingDrone                                         OFFSET(get<bool>, {0x378, 1, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
	// void OnViewTargetChanged(AFortPlayerController* PlayerController, AActor* OldViewTarget, AActor* NewViewTarget);         // [0x9bc4c60] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
/// Size: 0x00C0 (0x000048 - 0x000108)
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FFortGameplayAttributeData)                Energy                                                      OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                MaxEnergy                                                   OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                EnergyChargeRate                                            OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                ServerTimeEnergyIncrements                                  OFFSET(getStruct<T>, {0xC0, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
	// void OnRep_Energy(FFortGameplayAttributeData& OldValue);                                                                 // [0x9bc4b34] Final|Native|Protected|HasOutParms 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDrone
/// Size: 0x01B0 (0x000660 - 0x000810)
class AFortScoutDrone : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	DMember(bool)                                      bIsDiving                                                   OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	SMember(FScalableFloat)                            DivingEnabled                                               OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	DMember(bool)                                      bIsSpeedBoosting                                            OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	CMember(UNiagaraComponent*)                        NSScoutDroneIdle_Native                                     OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(UFortScoutDronePickupManager*)             PickupManagerComponent_Native                               OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UClass*)                                   TeamMateIndicatorMarkerWidgetClass                          OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UAudioComponent*)                          DroneMotorLoopComponent                                     OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UAudioComponent*)                          DroneThrustSoundComponent                                   OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(FScalableFloat)                            BaseMaxFlySpeed                                             OFFSET(getStruct<T>, {0x718, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DefaultTags                                                 OFFSET(getStruct<T>, {0x740, 32, 0, 0})
	CMember(UFortAbilitySystemComponent*)              AbilitySystemComponent                                      OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UFortActorComponent_Affiliation*)          AffiliationComponent                                        OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UFortAbilitySet*)                          StartupAbilitySet                                           OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(AFortPawn*)                                ControllingPlayerPawn                                       OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UFortHealthSet*)                           HealthSet                                                   OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UFortChargingSet_ScoutDroneEnergy*)        EnergySet                                                   OFFSET(get<T>, {0x790, 8, 0, 0})
	DMember(float)                                     LifespanAfterDeath                                          OFFSET(get<float>, {0x798, 4, 0, 0})
	SMember(FFortAttributeInitializationKey)           AttributeInitKey                                            OFFSET(getStruct<T>, {0x79C, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             PrimarySurfaceType                                          OFFSET(get<T>, {0x7A4, 1, 0, 0})
	CMember(TEnumAsByte<EFortBaseWeaponDamage>)        WeaponResponseType                                          OFFSET(get<T>, {0x7A5, 1, 0, 0})
	DMember(bool)                                      bPlayedDeath                                                OFFSET(get<bool>, {0x7A6, 1, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfHealthDismissDelayData                                 OFFSET(getStruct<T>, {0x7A8, 16, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfEnergyDismissDelayData                                 OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTeamIndexChanged                                          OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	CMember(UClass*)                                   PawnOverrideComponentClass                                  OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(USoundBase*)                               DroneMotorLoopSound                                         OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(USoundBase*)                               DroneThrusterSound                                          OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(UAudioParameterComponent*)                 AudioParameter                                              OFFSET(get<T>, {0x7F0, 8, 0, 0})
	SMember(FName)                                     LocallyViewedPawnAudioParamName                             OFFSET(getStruct<T>, {0x7F8, 4, 0, 0})
	SMember(FName)                                     IsEnemyAudioParamName                                       OFFSET(getStruct<T>, {0x7FC, 4, 0, 0})
	SMember(FName)                                     ThrustAmountAudioParamName                                  OFFSET(getStruct<T>, {0x800, 4, 0, 0})
	DMember(float)                                     ThrustSoundThreshold                                        OFFSET(get<float>, {0x804, 4, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
	// void SetupGameplayAudioParameters();                                                                                     // [0x9bc5020] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
	// void SetTeamMatesIndicator(bool bState);                                                                                 // [0x9bc4fa0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
	// void SetAffiliationAudio();                                                                                              // [0x9bc4f8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
	// void OnRep_ControllingPlayerPawn();                                                                                      // [0x9bc4af8] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x1d9241c] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
	// void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x1d9241c] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
	// float GetHealthPercentage();                                                                                             // [0x9bc4060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
	// void GetForwardAndRightDotProducts_Native(float& OutForwardDot, float& OutRightDot);                                     // [0x9bc3f88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
	// FRotator GetDeltaRotator();                                                                                              // [0x9bc3f38] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
	// AFortPawn* GetControllingPlayerPawn();                                                                                   // [0x9bc3f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
	// void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                    // [0x9bc3cdc] Native|Protected     
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCameraMode
/// Size: 0x0008 (0x0001E8 - 0x0001F0)
class UFortScoutDroneCameraMode : public UFort3PCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(bool)                                      bShouldInterpolateLocation                                  OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(bool)                                      bShouldInterpolateRotation                                  OFFSET(get<bool>, {0x1E9, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
/// Size: 0x0010 (0x000028 - 0x000038)
class UScoutDroneDeferredDestructionPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScoutDroneDeferredDestructionData)        DeferredDestructionData                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
/// Size: 0x02B8 (0x0000A8 - 0x000360)
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UInputComponent*)                          DroneInputComponent                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(AFortScoutDrone*)                          ControlledDrone                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(AActor*)                                   OriginalDroneOwner                                          OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UFortInputMappingContext*)                 DroneInputContext                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FScoutDroneInputTriggerableEvent>)  InputTriggerableEvents                                      OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(UInputAction*)                             MoveUpAction                                                OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UInputAction*)                             MoveAction                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UInputAction*)                             DismissAction                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UClass*)                                   DroneCooldownEffectClass                                    OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FStenciledActorData)                       OwningActorStencilData                                      OFFSET(getStruct<T>, {0x140, 128, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        CurrentDestructionData                                      OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	CMember(UClass*)                                   FirstPersonCameraModeOverride                               OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UClass*)                                   ThirdPersonCameraModeOverride                               OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FGameplayAbilitySpec)                      FakeCameraAbilitySpec                                       OFFSET(getStruct<T>, {0x1E0, 248, 0, 0})
	CMember(TArray<FName>)                             LegacyInputActionsToBlock                                   OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UScoutDroneDeferredDestructionPayload*)    DismissPayloadCache                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FScalableFloat)                            DismissButtonPressCooldown                                  OFFSET(getStruct<T>, {0x2F0, 40, 0, 0})
	SMember(FViewTargetTransitionParams)               PlayerToDroneTransitionParams                               OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FGameplayTagContainer)                     InterruptingPlayerTags                                      OFFSET(getStruct<T>, {0x338, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
	// void ServerRequestDroneDismissal();                                                                                      // [0x7826848] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                                  // [0x9bc4d58] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
	// void OnRep_CurrentDestructionData();                                                                                     // [0x9bc4b0c] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
	// void OnRep_ControlledDrone();                                                                                            // [0x9bc4adc] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
	// void OnPlayerInterruptionTagsChanged(FGameplayTag tag, int32_t NewCount);                                                // [0x9bc47ec] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
	// void OnOwningPlayerStartedDBNO();                                                                                        // [0x9bc4710] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
	// void OnControlledDroneDestroyed(AActor* InControlledDrone);                                                              // [0x9bc4690] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
	// AFortScoutDrone* GetControlledDrone();                                                                                   // [0x834c030] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
	// void BP_OnPlayerShortInteract();                                                                                         // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
	// void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);                            // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
	// void BP_OnDroneDestroyed(FGameplayTag& DismissalReason);                                                                 // [0x1d9241c] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
	// void BP_OnDismissalStarted(bool bInstantDismissal, FGameplayTag DismissalReason);                                        // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
	// void BP_OnDestructionStarted(bool bInstantDestruction, FGameplayTag DismissalReason);                                    // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
/// Size: 0x0028 (0x000040 - 0x000068)
class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            MinDroneCooldown                                            OFFSET(getStruct<T>, {0x40, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
/// Size: 0x00C0 (0x000F30 - 0x000FF0)
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4080;

public:
	SMember(FVector)                                   LocalInputState                                             OFFSET(getStruct<T>, {0xF28, 24, 0, 0})
	SMember(FVector)                                   LastInputState                                              OFFSET(getStruct<T>, {0xF40, 24, 0, 0})
	SMember(FVector)                                   ReplicatedAcceleration                                      OFFSET(getStruct<T>, {0xF58, 24, 0, 0})
	SMember(FScalableFloat)                            StrafeInputMultiplier                                       OFFSET(getStruct<T>, {0xF70, 40, 0, 0})
	SMember(FScalableFloat)                            BacktrackingInputMultiplier                                 OFFSET(getStruct<T>, {0xF98, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalMovementInputMultiplier                             OFFSET(getStruct<T>, {0xFC0, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UClass*)                                   DroneSpectateCameraMode                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          ControlledDrone                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePickupManager
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortScoutDronePickupManager : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FScoutDronePickupTargets)                  AttachedTargets                                             OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FName)                                     AttachPointSocketName                                       OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FScoutDronePickupTargets)                  PreviouslyAttachedTargets                                   OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   ItemOffset                                                  OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   DBNOPawnOffset                                              OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     CurrentlyAppliedCameraOffset                                OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FScoutDroneCapsuleSizeData)                MaxExtraCapsuleDimensions                                   OFFSET(getStruct<T>, {0x110, 80, 0, 0})
	SMember(FScalableFloat)                            MaxPickupSpread                                             OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            PickupTossSpeed                                             OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ItemsPickupTags                                             OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
	// void ServerUpdateItemAttachment(FVector CalculatedItemOffset);                                                           // [0x9bc4e1c] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
	// void ServerDropAttachedActors();                                                                                         // [0x2c410f8] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
	// void OnRep_AttachedTargets();                                                                                            // [0x9bc4a60] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
	// void OnPawnDBNOStateChanged(AFortPawn* Pawn, bool bIsDBNO);                                                              // [0x9bc4724] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
	// void OnAttachedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x9bc413c] Final|Native|Private|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
	// bool HasAPawnAtached();                                                                                                  // [0x9bc4080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
	// bool HasAnyAttachedActors();                                                                                             // [0x9bc409c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
	// void BP_OnActorsDetached();                                                                                              // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
	// void BP_OnActorsAttached();                                                                                              // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneRuntime.FortScoutDroneDiveTransitionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortScoutDroneDiveTransitionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UCurveFloat*)                              Curve                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            TransitionDuration                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDeployed
/// Size: 0x0008 (0x000000 - 0x000008)
class FOnFortScoutDroneDeployed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          DeployedDrone                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDismissed
/// Size: 0x0004 (0x000000 - 0x000004)
class FOnFortScoutDroneDismissed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnFortScoutDroneMarkedEnemies : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Source                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<AActor*>)                           MarkedActors                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
/// Size: 0x0001 (0x000000 - 0x000001)
class FOnFortScoutDroneFinishedLongInteract : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FScoutDroneDeferredDestructionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DeposessDelay                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DestroyDelay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     ServerDismissStartTime                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDronePickupTargets
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDronePickupTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<AActor*>)                           Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(AFortPawn*)                                DBNOPawn                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneStatusData
/// Size: 0x0008 (0x000000 - 0x000008)
class FScoutDroneStatusData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EFortScoutDroneTargetStatus)               Status                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ServerTimeStatusChanged                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDroneInputTriggerableEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputActionName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UInputAction*)                             InputAction                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayEventToTrigger                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneCapsuleSizeData
/// Size: 0x0050 (0x000000 - 0x000050)
class FScoutDroneCapsuleSizeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            CapsuleHalfHeight                                           OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            CapsuleRadius                                               OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Enum /Script/ScoutDroneRuntime.EFortScoutDroneTargetStatus
/// Size: 0x05
enum EFortScoutDroneTargetStatus : uint8_t
{
	EFortScoutDroneTargetStatus__None0                                               = 0,
	EFortScoutDroneTargetStatus__TooFar1                                             = 1,
	EFortScoutDroneTargetStatus__Pending2                                            = 2,
	EFortScoutDroneTargetStatus__Confirmed3                                          = 3,
	EFortScoutDroneTargetStatus__EFortScoutDroneTargetStatus_MAX4                    = 4
};

