
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UInputComponent*)                          MatchmakingPortalInputComponent                             OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UFortActivityScalingTextBlock*)            Text_IslandName                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	DMember(float)                                     CountdownTime                                               OFFSET(get<float>, {0x418, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedCountdown                                         OFFSET(getStruct<T>, {0x420, 16, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
	// void StartCountdown();                                                                                                   // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
	// void HandleCancelClicked();                                                                                              // [0x9dbffe0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
	// void FinishTimer();                                                                                                      // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalModal
/// Size: 0x03E0 (0x000450 - 0x000830)
class UFortMatchmakingPortalModal : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	SMember(FTimerHandle)                              MatchmakingStartTimerHandle                                 OFFSET(getStruct<T>, {0x450, 8, 0, 0})
	CMember(TArray<FString>)                           XpTagMnemonicWhitelist                                      OFFSET(get<T>, {0x7C0, 16, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_ActivityOrigin                                         OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_LinkCode                                               OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityDescription                                    OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_ActivityDescription                               OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ActivityTags                                       OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UFortSimpleMaterialProgressBar*)           ProgressBar_ContentDownload                                 OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AcceptPublic                                         OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AcceptPrivate                                        OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Favorite                                             OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Cancel                                               OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(UFortModalBackground*)                     ModalBackground                                             OFFSET(get<T>, {0x828, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingTimer
	// void SetMatchmakingTimer();                                                                                              // [0x1d9241c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingStateText
	// void SetMatchmakingStateText(FText& MatchmakingStateText);                                                               // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SendLinkCodeToParty
	// void SendLinkCodeToParty();                                                                                              // [0x9dc02f8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStopped
	// void OnMatchmakingStopped();                                                                                             // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStarted
	// void OnMatchmakingStarted(FText& MatchmakingState);                                                                      // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnAdditionalContentUpdate
	// void OnAdditionalContentUpdate(FText& MatchmakingState, float Progress, bool bShowProgressBar);                          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired
	// bool IsDownloadRequired();                                                                                               // [0x9dc02bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError
	// void HandleOnMatchmakingError();                                                                                         // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0x9dbffb4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat
	// FText GetCreatorTextFormat(FText& CreatorName);                                                                          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings
	// TArray<FString> GetContentWarningStrings();                                                                              // [0x9dbff4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat
	// FText GetCodeTextFormat(FText& IslandCode);                                                                              // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x0128 (0x000408 - 0x000530)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortMatchmakingPortalModal*)              MatchmakingPortalModalWidget                                OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UClass*)                                   MatchmakingFeedbackClass                                    OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UClass*)                                   MatchmakingCountdownClass                                   OFFSET(get<T>, {0x430, 8, 0, 0})
	SMember(FVector)                                   WorldPointerLocation                                        OFFSET(getStruct<T>, {0x438, 24, 0, 0})
	SMember(FText)                                     CreatorNameTextFormat                                       OFFSET(getStruct<T>, {0x450, 24, 0, 0})
	CMember(TWeakObjectPtr<UHeaderDescriptionHUDComponent*>) CachedHUDComponent                                    OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   IslandModal                                                 OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FMatchmakingPortalPopupData)               CachedIslandData                                            OFFSET(getStruct<T>, {0x478, 96, 0, 0})
	SMember(FText)                                     InvalidLinkCodeWarningText                                  OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})
	DMember(float)                                     MatchmakingFeedbackDelayTime                                OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(bool)                                      bIsWithinPortalRange                                        OFFSET(get<bool>, {0x4F4, 1, 1, 0})
	CMember(UFortMatchmakingPortalCountdown*)          MatchmakingCountdownWidget                                  OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 MatchmakingFeedbackContainerWidget                          OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortAthenaCreativeMatchmakingWidget*)     MatchmakingFeedbackWidget                                   OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_CreatorName                                        OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_IslandName                                             OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ActivityTags                                       OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       GlobalActionKeybindWidget                                   OFFSET(get<T>, {0x528, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
	// void UpdateVisuals(UHeaderDescriptionHUDComponent* HUDComponent);                                                        // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
	// void OnShowPortalPopup(bool bShow, bool bAnimate);                                                                       // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
	// void OnPlayerCanInteractChanged(bool bPlayerCanInteract);                                                                // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
	// bool IsInteractingDeviceAMatchmakingPortal();                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
	// bool HasActivityToShow();                                                                                                // [0x9dc028c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
	// void HandleWidgetUpdate();                                                                                               // [0x9dc0278] Final|Native|Private 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
	// void HandleStartedRespawn(AFortPlayerControllerZone* PlayerController);                                                  // [0x9dc01f8] Final|Native|Private 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
	// void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);                                                             // [0x1d9241c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
	// void HandleLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason);   // [0x9dc00d0] Final|Native|Private 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
	// void HandleHUDShow(bool bShow, bool bShouldAnimate);                                                                     // [0x9dc000c] Final|Native|Private 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown
	// void HandleFinishedCountdown();                                                                                          // [0x9dbfff4] Final|Native|Private 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
	// UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(UCommonActivatableWidget* MatchmakingFeedbackContainer); // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
	// bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, UHeaderDescriptionHUDComponent* HUDComponent);            // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
	// void BindOverlapEvents();                                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x000400 - 0x000438)
class UFortModalBackground : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* InTexture);                                                        // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftPortalHUDDetailsClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
};

