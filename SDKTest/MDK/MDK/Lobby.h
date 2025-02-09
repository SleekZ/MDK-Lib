
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore
/// dependency: OnlineSubsystemUtils

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x0088 (0x000320 - 0x0003A8)
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(ALobbyBeaconState*)                        LobbyState                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(ALobbyBeaconPlayerState*)                  PlayerState                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(ELobbyBeaconJoinState)                     LobbyJoinServerState                                        OFFSET(get<T>, {0x331, 1, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	// void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId);                                  // [0x6aeb11c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	// void ServerNotifyJoiningServer();                                                                                        // [0x6aeb0d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	// void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString);                             // [0x6aead80] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	// void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason);                                                      // [0x6aeaa7c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	// void ServerDisconnectFromLobby();                                                                                        // [0x6aeaa30] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	// void ServerCheat(FString Msg);                                                                                           // [0x6aea378] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	// void ClientWasKicked(FText KickReason);                                                                                  // [0x6aea214] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	// void ClientSetInviteFlags(FJoinabilitySettings Settings);                                                                // [0x6aea0b0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	// void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId);                                                                      // [0x6ae9f20] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	// void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId);                                               // [0x6ae9d38] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	// void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);                                              // [0x6ae9a78] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	// void ClientJoinGame();                                                                                                   // [0x34110b8] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	// void ClientAckJoiningServer();                                                                                           // [0x5c49968] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TWeakObjectPtr<UClass*>)                   LobbyStateClass                                             OFFSET(get<T>, {0x2C0, 32, 0, 0})
	CMember(ALobbyBeaconState*)                        LobbyState                                                  OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x00D0 (0x000290 - 0x000360)
class ALobbyBeaconPlayerState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    OFFSET(getStruct<T>, {0x2A8, 48, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyOwnerUniqueId                                          OFFSET(getStruct<T>, {0x2D8, 48, 0, 0})
	DMember(bool)                                      bInLobby                                                    OFFSET(get<bool>, {0x308, 1, 0, 0})
	CMember(AOnlineBeaconClient*)                      ClientActor                                                 OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	// void OnRep_UniqueId();                                                                                                   // [0x6aea32c] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	// void OnRep_PartyOwner();                                                                                                 // [0x6aea2f4] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	// void OnRep_InLobby();                                                                                                    // [0x6aea2a8] Final|Native|Protected 
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x01A8 (0x000290 - 0x000438)
class ALobbyBeaconState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(UClass*)                                   LobbyBeaconPlayerStateClass                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bLobbyStarted                                               OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(float)                                     WaitForPlayersTimeRemaining                                 OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FLobbyPlayerStateInfoArray)                Players                                                     OFFSET(getStruct<T>, {0x2B0, 288, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	// void OnRep_WaitForPlayersTimeRemaining();                                                                                // [0x6aea364] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	// void OnRep_LobbyStarted();                                                                                               // [0x6aea2e0] Final|Native|Protected 
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x000C (0x00000C - 0x000018)
class FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ALobbyBeaconPlayerState*)                  LobbyPlayerState                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FLobbyPlayerStateInfoArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FLobbyPlayerStateActorInfo>)        Players                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(ALobbyBeaconState*)                        ParentState                                                 OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x04
enum ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None0                                                     = 0,
	ELobbyBeaconJoinState__SentJoinRequest1                                          = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged2                                  = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX3                                = 3
};

