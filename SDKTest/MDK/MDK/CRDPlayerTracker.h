
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CRDPlayerTracker.CRDPlayerTrackerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UCRDPlayerTrackerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/CRDPlayerTracker.CRDPlayerTrackerMarker
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ACRDPlayerTrackerMarker : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UClass*)                                   WidgetClass                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UActorComponent*)                          PlayerTrackerUIActorComponent                               OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget
	// bool DestroyPlayerTrackerWidget(AFortPlayerControllerGameplay* InFortPlayerControllerGameplay);                          // [0x9c81b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget
	// UUserWidget* CreatePlayerTrackerWidget(AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, AFortPlayerStateAthena* AssociatedPSA); // [0x9c819c0] Final|Native|Public|BlueprintCallable 
};

