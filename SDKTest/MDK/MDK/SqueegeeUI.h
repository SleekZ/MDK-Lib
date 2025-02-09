
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/SqueegeeUI.FortContentGateDetailsWidget
/// Size: 0x0008 (0x000300 - 0x000308)
class UFortContentGateDetailsWidget : public UFortSqueegeeWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UFortContentGateRatingWidget*)             ContentGateRatingWidget                                     OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SqueegeeUI.FortContentGateDetailsWidget.OnShowWeaponDescription
	// void OnShowWeaponDescription();                                                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentGateDetailsWidget.OnShowGamemodeDescription
	// void OnShowGamemodeDescription(FString ActivityTitle);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentGateRatingWidget
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortContentGateRatingWidget : public UFortSqueegeeWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/SqueegeeUI.FortContentManagementDetails
/// Size: 0x0038 (0x000300 - 0x000338)
class UFortContentManagementDetails : public UFortSqueegeeWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UFortContentGateRatingWidget*)             ContentGateRatingWidget                                     OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnShowWeaponData
	// void OnShowWeaponData();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnShowActivityData
	// void OnShowActivityData(FText& ActivityDisplayName, FText& ActivityDescription, FString CreatorName, FText& LinkCode);   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementButton
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UFortContentManagementButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
};

/// Class /Script/SqueegeeUI.FortContentManagementLabelWidget
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortContentManagementLabelWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/SqueegeeUI.FortContentManagementEntryLabelObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortContentManagementEntryLabelObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/SqueegeeUI.FortContentManagementEntryDataObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortContentManagementEntryDataObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/SqueegeeUI.FortContentManagementListView
/// Size: 0x0010 (0x000BD0 - 0x000BE0)
class UFortContentManagementListView : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(UClass*)                                   LabelWidget                                                 OFFSET(get<T>, {0xBD0, 8, 0, 0})
};

/// Class /Script/SqueegeeUI.FortContentManagementList
/// Size: 0x0048 (0x000300 - 0x000348)
class UFortContentManagementList : public UFortSqueegeeWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FText)                                     WeaponLabelText                                             OFFSET(getStruct<T>, {0x300, 24, 0, 0})
	SMember(FText)                                     GameModeLabelText                                           OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	CMember(UFortContentManagementListView*)           ContentManagementListView                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<UFortCreativeDiscoveryActivityProvider*>) CachedDataProviders                                   OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementList.OnChangeLoading
	// void OnChangeLoading(bool bIsLoading);                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementScreen
/// Size: 0x0010 (0x000548 - 0x000558)
class UFortContentManagementScreen : public UFortPinScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	CMember(UFortContentManagementList*)               ContentManagementList                                       OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortContentManagementDetails*)            ContentManagementDetails                                    OFFSET(get<T>, {0x550, 8, 0, 0})


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementScreen.ExitScreen
	// void ExitScreen();                                                                                                       // [0x9fd7918] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SqueegeeUI.SqueegeeUIGameFeatureAction
/// Size: 0x0040 (0x000028 - 0x000068)
class USqueegeeUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FSqueegeeInjectionData>)            SqueegeeWidgetInjections                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FSqueegeeTextData>)                 SqueegeTexts                                                OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SqueegeeIntroModalClass                                     OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/SqueegeeUI.SqueegeeInjectionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FSqueegeeInjectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ESqueegeeWidgetInjection)                  WidgetType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetClass                                                 OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/SqueegeeUI.SqueegeeTextData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSqueegeeTextData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESqueegeeText)                             TextType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FText)                                     DesiredText                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Enum /Script/SqueegeeUI.EFortContentManagementState
/// Size: 0x04
enum EFortContentManagementState : uint8_t
{
	EFortContentManagementState__Locked0                                             = 0,
	EFortContentManagementState__Unlocked1                                           = 1,
	EFortContentManagementState__WaitingForResponse2                                 = 2,
	EFortContentManagementState__EFortContentManagementState_MAX3                    = 3
};

