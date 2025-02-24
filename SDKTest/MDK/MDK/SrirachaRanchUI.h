
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000120 - 0x000130)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UPaperSprite*)                             ToggleRadioOffSprite                                        OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x99bade8] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x99bac28] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0050 (0x000328 - 0x000378)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                OFFSET(getStruct<T>, {0x368, 2, 0, 0})
	CMember(UStreamingRadioPlayerComponent*)           LastValidComp                                               OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(AFortPawn* FortPawn);                                                                 // [0x99bb1e0] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                              // [0x99bb1cc] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                             // [0x99bb1b8] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                           // [0x99bb0c0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                      // [0x99bafa8] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                      // [0x99babf8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

