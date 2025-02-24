
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/VKEditUI.VKConnectionIndicator
/// Size: 0x0230 (0x000400 - 0x000630)
class UVKConnectionIndicator : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	SMember(FText)                                     EditStatusLocalizedText                                     OFFSET(getStruct<T>, {0x400, 240, 0, 0})
	SMember(FDataTableRowHandle)                       OpenLogInputAction                                          OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	CMember(UObject*)                                  StatusIcon_NotConnected                                     OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_Connected                                        OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_RefreshRequired                                  OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_Preparing                                        OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_Downloading                                      OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_UpToDate                                         OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_StartingGame                                     OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_GameInProgress                                   OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UObject*)                                  StatusIcon_Error                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UImage*)                                   Image_StatusIcon                                            OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StatusMessage                                          OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_AdditionalInfo                                     OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_DownloadContainer                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortSimpleMaterialProgressBar*)           ProgressBar_Download                                        OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_DownloadProgress                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_OpenLogContainer                                      OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonActionWidget*)                      Action_OpenLog                                              OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_SubMessageContainer                                   OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SubMessage                                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EditMode                                               OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_SquadListContainer                                    OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UAthenaSquadListBase*)                     AthenaSquadList                                             OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
	// void OnMinigameStateChanged(EFortMinigameState MinigameState, EFortMinigameState PreviousMinigameState);                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
	// void HandleMemorySamplerProgressUpdated(float Progress);                                                                 // [0xa032d6c] Final|Native|Private 
};

/// Class /Script/VKEditUI.VKDebugMessagesBase
/// Size: 0x0000 (0x000328 - 0x000328)
class UVKDebugMessagesBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/VKEditUI.VkEditDynamicUIDirector
/// Size: 0x0048 (0x0002B0 - 0x0002F8)
class AVkEditDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UDynamicUIScene*)                          MemorySamplingScene                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/VKEditUI.VkEditLogTab
/// Size: 0x0100 (0x000400 - 0x000500)
class UVkEditLogTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x410, 240, 0, 0})
};

