
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore

/// Class /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UThrowingToyTrackerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FThrowingToyDataArray)                     ThrowingToysData                                            OFFSET(getStruct<T>, {0xA0, 280, 0, 0})


	/// Functions
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
	// void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason);                                 // [0x9c0e488] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
	// AActor* GetThrowingToy(FGuid& WorldItemGuid);                                                                            // [0x9c0e3d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
	// EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();                                                   // [0x7e77a44] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
	// AActor* GetAndReleaseThrowingToy(FGuid& WorldItemGuid);                                                                  // [0x9c0e338] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
	// void AddThrowingToy(AActor* ThrowingToyActor, FGuid& WorldItemGuid);                                                     // [0x9c0e218] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyData
/// Size: 0x001C (0x00000C - 0x000028)
class FThrowingToyData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   ThrowingToy                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     WorldItemGuid                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyDataArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FThrowingToyDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FThrowingToyData>)                  Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Enum /Script/ThrowingToyRuntime.EThrowingToyItemRemovedReason
/// Size: 0x05
enum EThrowingToyItemRemovedReason : uint8_t
{
	EThrowingToyItemRemovedReason__None0                                             = 0,
	EThrowingToyItemRemovedReason__ManuallyDropped1                                  = 1,
	EThrowingToyItemRemovedReason__DeviceForcedDropped2                              = 2,
	EThrowingToyItemRemovedReason__DeviceForcedDeleted3                              = 3,
	EThrowingToyItemRemovedReason__EThrowingToyItemRemovedReason_MAX4                = 4
};

