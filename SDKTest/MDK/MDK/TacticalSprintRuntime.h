
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x0238 (0x000048 - 0x000280)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FGameplayTag)                              GCEnergyDrain                                               OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 OFFSET(getStruct<T>, {0xB8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	CMember(USoundBase*)                               OnEnergyFullyDrainedSound                                   OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     MinEnergyToActivate                                         OFFSET(get<float>, {0x15C, 4, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateRow                                      OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnSlide                                        OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        OFFSET(getStruct<T>, {0x1B0, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      OFFSET(getStruct<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           OFFSET(getStruct<T>, {0x228, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(getStruct<T>, {0x22C, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         OFFSET(getStruct<T>, {0x230, 4, 0, 0})
	CMember(USoundMix*)                                SprintStartedSoundMix                                       OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(USoundBase*)                               SprintStartedSound2D                                        OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(getStruct<T>, {0x278, 4, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                          // [0x9adef38] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                                 // [0x9adef20] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                          // [0x9adef08] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                            // [0x9adeef0] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(UFortComponent_Energy* EnergyComp);                                                           // [0x9adee74] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x9aded90] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                             // [0x9aded7c] Final|Native|Public  
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UClass*)                                   MovementModeExtension                                       OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailedToSprint                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(AFortPlayerPawn*)                          CurrentBoundPlayerPawn                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bTacticalSprintEnabled                                      OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bWantsToTacticalSprint                                      OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(bool)                                      bHandlingMoveForward                                        OFFSET(get<bool>, {0xD8, 1, 1, 2})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0xD8, 1, 1, 3})
	DMember(bool)                                      bWasInBuildMode                                             OFFSET(get<bool>, {0xD8, 1, 1, 4})
	DMember(bool)                                      bFireAnalyticsEventOnEndPlay                                OFFSET(get<bool>, {0xD8, 1, 1, 5})
	SMember(FGameplayTag)                              TacticalSprintAbilityGameplayTag                            OFFSET(getStruct<T>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DisableTacticalSprintAbilityGameplayTag                     OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEnabled                                       OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintToggleGracePeriod                             OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintStarted                                     OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintEnded                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FTimerHandle)                              StopWantingToSprintTimerReceipt                             OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0x9adfa48] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                   // [0x9adfa34] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);                                              // [0x9adf970] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x9adf878] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(AFortPawn* InPawn);                                                                                   // [0x9adf7e4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x9adf7d0] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9adf6d4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                                // [0x9adf654] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);                // [0x9adef50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0018 (0x000010 - 0x000028)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/TacticalSprintRuntime.ESprintLoggingVerbosityLevel
/// Size: 0x07
enum ESprintLoggingVerbosityLevel : uint8_t
{
	ESprintLoggingVerbosityLevel__Error0                                             = 0,
	ESprintLoggingVerbosityLevel__Warning1                                           = 1,
	ESprintLoggingVerbosityLevel__Display2                                           = 2,
	ESprintLoggingVerbosityLevel__Log3                                               = 3,
	ESprintLoggingVerbosityLevel__Verbose4                                           = 4,
	ESprintLoggingVerbosityLevel__VeryVerbose5                                       = 5,
	ESprintLoggingVerbosityLevel__ESprintLoggingVerbosityLevel_MAX6                  = 6
};

