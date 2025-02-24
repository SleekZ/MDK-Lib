
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
/// Size: 0x0068 (0x000030 - 0x000098)
class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnMessageReceived                                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HandleSavedState                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HandleStateCleared                                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister
	// void Unregister();                                                                                                       // [0x21a1844] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver
	// UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(UObject* WorldContextObject, FEventMessageTag Channel, UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, AActor* ActorContext); // [0x17695e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x637d8f4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayMessages.GameplayMessageReplicator
/// Size: 0x0000 (0x000290 - 0x000290)
class AGameplayMessageReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/GameplayMessages.GameplayMessageRouter
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UGameplayMessageRouter : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(AGameplayMessageReplicator*)               MessageReplicator                                           OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage
	// void K2_BroadcastMessage(FEventMessageTag Channel, int32_t& Message, bool bSaveToChannel, AActor* ActorContext);         // [0x637dc0c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
	// bool HasValidSavedMessage(FEventMessageTag Channel);                                                                     // [0x637daac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayMessages.GameplayMessageRouter.ClearSavedMessage
	// void ClearSavedMessage(FEventMessageTag Channel);                                                                        // [0x637d654] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayMessages.BlueprintEventMessageTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayMessages.EventMessageTag
/// Size: 0x0000 (0x000004 - 0x000004)
class FEventMessageTag : public FGameplayTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/GameplayMessages.ReplicatedMessageData
/// Size: 0x0018 (0x000000 - 0x000018)
class FReplicatedMessageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UScriptStruct*)                            StructType                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayMessages.ReplicatedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FReplicatedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayMessageReceiverHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UGameplayMessageRouter*>)   Subsystem                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FEventMessageTag)                          Channel                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGameplayMessageReceiverData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Enum /Script/GameplayMessages.EGameplayMessageMatchType
/// Size: 0x03
enum EGameplayMessageMatchType : uint8_t
{
	EGameplayMessageMatchType__ExactMatch0                                           = 0,
	EGameplayMessageMatchType__PartialMatch1                                         = 1,
	EGameplayMessageMatchType__EGameplayMessageMatchType_MAX2                        = 2
};

