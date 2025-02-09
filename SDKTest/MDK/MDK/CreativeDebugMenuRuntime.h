
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
/// Size: 0x0138 (0x0000A8 - 0x0001E0)
class UFortControllerComponent_CreativeDebugger : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FScalableFloat)                            DebuggerEnabledByDataRegistry                               OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            VerseDebugDrawEnabledByDataRegistry                         OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            NavigationMeshEnabledByDataRegistry                         OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            NavigationPathsEnabledByDataRegistry                        OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            GhostModeEnabledByDataRegistry                              OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            InvincibilityEnabledByDataRegistry                          OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            FastIterationEnabledByDataRegistry                          OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	CMember(UClass*)                                   AIDebuggerClass                                             OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
	// void OnPlayerSpawned(AFortPlayerController* PC);                                                                         // [0x9bca640] Final|Native|Public  
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x9bca62c] Final|Native|Public  
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMinigameStateChanged
	// void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);                                  // [0x9bca568] Final|Native|Public  
};

