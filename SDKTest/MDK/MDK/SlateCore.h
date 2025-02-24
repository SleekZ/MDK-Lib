
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USlateWidgetStyleContainerBase*)           CustomStyle                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000028 - 0x000078)
class UFontBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateThemeManager
/// Size: 0x0998 (0x000028 - 0x0009C0)
class USlateThemeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2496;

public:
	SMember(FGuid)                                     CurrentThemeId                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FStyleColorList)                           ActiveColors                                                OFFSET(getStruct<T>, {0x38, 2440, 0, 0})
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSlateBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsDynamicallyLoaded                                        OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bHasUObject                                                 OFFSET(get<bool>, {0x10, 1, 1, 1})
	CMember(TEnumAsByte<ESlateBrushDrawType>)          DrawAs                                                      OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushMirrorType>)        Mirroring                                                   OFFSET(get<T>, {0x13, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushImageType>)         ImageType                                                   OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ImageSize                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FSlateColor)                               TintColor                                                   OFFSET(getStruct<T>, {0x30, 20, 0, 0})
	SMember(FSlateBrushOutlineSettings)                OutlineSettings                                             OFFSET(getStruct<T>, {0x50, 64, 0, 0})
	CMember(UObject*)                                  ResourceObject                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FBox2f)                                    UVRegion                                                    OFFSET(getStruct<T>, {0x9C, 20, 0, 0})
};

/// Struct /Script/SlateCore.SlateBrushOutlineSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSlateBrushOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4)                                  CornerRadii                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSlateColor)                               Color                                                       OFFSET(getStruct<T>, {0x20, 20, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<ESlateBrushRoundingType>)      RoundingType                                                OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseBrushTransparency                                       OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0014 (0x000000 - 0x000014)
class FSlateColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FLinearColor)                              SpecifiedColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ESlateColorStylingMode)                    ColorUseRule                                                OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
class FMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Left                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Top                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Right                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Bottom                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SlateCore.DeprecateSlateVector2D
/// Size: 0x0000 (0x000008 - 0x000008)
class FDeprecateSlateVector2D : public FVector2f
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000020 - 0x000078)
class FPointerEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateWidgetStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x06D8 (0x000008 - 0x0006E0)
class FScrollBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	SMember(FSlateBrush)                               HorizontalBackgroundImage                                   OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               VerticalBackgroundImage                                     OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               VerticalTopSlotImage                                        OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               HorizontalTopSlotImage                                      OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               VerticalBottomSlotImage                                     OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FSlateBrush)                               HorizontalBottomSlotImage                                   OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x490, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x550, 192, 0, 0})
	SMember(FSlateBrush)                               DraggedThumbImage                                           OFFSET(getStruct<T>, {0x610, 192, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x6D0, 4, 0, 0})
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0C48 (0x000008 - 0x000C50)
class FTableRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	SMember(FSlateBrush)                               SelectorFocusedBrush                                        OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               ActiveHoveredBrush                                          OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               InactiveHoveredBrush                                        OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               InactiveBrush                                               OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	DMember(bool)                                      bUseParentRowBrush                                          OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	SMember(FSlateBrush)                               ParentRowBackgroundBrush                                    OFFSET(getStruct<T>, {0x3E0, 192, 0, 0})
	SMember(FSlateBrush)                               ParentRowBackgroundHoveredBrush                             OFFSET(getStruct<T>, {0x4A0, 192, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundHoveredBrush                               OFFSET(getStruct<T>, {0x560, 192, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundBrush                                      OFFSET(getStruct<T>, {0x620, 192, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundHoveredBrush                                OFFSET(getStruct<T>, {0x6E0, 192, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundBrush                                       OFFSET(getStruct<T>, {0x7A0, 192, 0, 0})
	SMember(FSlateColor)                               TextColor                                                   OFFSET(getStruct<T>, {0x860, 20, 0, 0})
	SMember(FSlateColor)                               SelectedTextColor                                           OFFSET(getStruct<T>, {0x874, 20, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Above                                         OFFSET(getStruct<T>, {0x890, 192, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Onto                                          OFFSET(getStruct<T>, {0x950, 192, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Below                                         OFFSET(getStruct<T>, {0xA10, 192, 0, 0})
	SMember(FSlateBrush)                               ActiveHighlightedBrush                                      OFFSET(getStruct<T>, {0xAD0, 192, 0, 0})
	SMember(FSlateBrush)                               InactiveHighlightedBrush                                    OFFSET(getStruct<T>, {0xB90, 192, 0, 0})
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x05F8 (0x000008 - 0x000600)
class FComboBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x10, 1440, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	SMember(FSlateSound)                               SelectionChangeSlateSound                                   OFFSET(getStruct<T>, {0x5C8, 24, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FMargin)                                   MenuRowPadding                                              OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
class FSlateSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  ResourceObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x0598 (0x000008 - 0x0005A0)
class FComboButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x10, 944, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x3C0, 192, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ShadowOffset                                                OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FSlateBrush)                               MenuBorderBrush                                             OFFSET(getStruct<T>, {0x4A0, 192, 0, 0})
	SMember(FMargin)                                   MenuBorderPadding                                           OFFSET(getStruct<T>, {0x560, 16, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	SMember(FMargin)                                   DownArrowPadding                                            OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           DownArrowAlign                                              OFFSET(get<T>, {0x590, 1, 0, 0})
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x03A8 (0x000008 - 0x0003B0)
class FButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FSlateBrush)                               Normal                                                      OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               Hovered                                                     OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               Pressed                                                     OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateColor)                               NormalForeground                                            OFFSET(getStruct<T>, {0x310, 20, 0, 0})
	SMember(FSlateColor)                               HoveredForeground                                           OFFSET(getStruct<T>, {0x324, 20, 0, 0})
	SMember(FSlateColor)                               PressedForeground                                           OFFSET(getStruct<T>, {0x338, 20, 0, 0})
	SMember(FSlateColor)                               DisabledForeground                                          OFFSET(getStruct<T>, {0x34C, 20, 0, 0})
	SMember(FMargin)                                   NormalPadding                                               OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FMargin)                                   PressedPadding                                              OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x398, 24, 0, 0})
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FSlateFontInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UObject*)                                  FontObject                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  FontMaterial                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFontOutlineSettings)                      OutlineSettings                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     TypefaceFontName                                            OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   LetterSpacing                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     SkewAmount                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   OutlineSize                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bMiteredCorners                                             OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bSeparateFillAlpha                                          OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bApplyOutlineToDropShadows                                  OFFSET(get<bool>, {0x6, 1, 0, 0})
	CMember(UObject*)                                  OutlineMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              OutlineColor                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x02B8 (0x000008 - 0x0002C0)
class FEditableTextStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageSelected                                     OFFSET(getStruct<T>, {0x80, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageComposing                                    OFFSET(getStruct<T>, {0x140, 192, 0, 0})
	SMember(FSlateBrush)                               CaretImage                                                  OFFSET(getStruct<T>, {0x200, 192, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0D78 (0x000008 - 0x000D80)
class FEditableTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3456;

public:
	SMember(FSlateBrush)                               BackgroundImageNormal                                       OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageHovered                                      OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageFocused                                      OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageReadOnly                                     OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x320, 784, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x630, 20, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x644, 20, 0, 0})
	SMember(FSlateColor)                               ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0x658, 20, 0, 0})
	SMember(FSlateColor)                               FocusedForegroundColor                                      OFFSET(getStruct<T>, {0x66C, 20, 0, 0})
	SMember(FMargin)                                   HScrollBarPadding                                           OFFSET(getStruct<T>, {0x680, 16, 0, 0})
	SMember(FMargin)                                   VScrollBarPadding                                           OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x6A0, 1760, 0, 0})
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0308 (0x000008 - 0x000310)
class FTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 20, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ShadowOffset                                                OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x7C, 16, 0, 0})
	SMember(FSlateColor)                               SelectedBackgroundColor                                     OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
	SMember(FSlateColor)                               HighlightColor                                              OFFSET(getStruct<T>, {0xA0, 20, 0, 0})
	SMember(FSlateBrush)                               HighlightShape                                              OFFSET(getStruct<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	SMember(FSlateBrush)                               UnderlineBrush                                              OFFSET(getStruct<T>, {0x240, 192, 0, 0})
	CMember(ETextTransformPolicy)                      TransformPolicy                                             OFFSET(get<T>, {0x300, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              OFFSET(get<T>, {0x301, 1, 0, 0})
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0588 (0x000008 - 0x000590)
class FSpinBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               ActiveBackgroundBrush                                       OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredBackgroundBrush                                      OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               ActiveFillBrush                                             OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredFillBrush                                            OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FSlateBrush)                               InactiveFillBrush                                           OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	SMember(FSlateBrush)                               ArrowsImage                                                 OFFSET(getStruct<T>, {0x490, 192, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x550, 20, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x564, 16, 0, 0})
	SMember(FMargin)                                   InsetPadding                                                OFFSET(getStruct<T>, {0x574, 16, 0, 0})
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000020 - 0x000028)
class FCharacterEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000020 - 0x000040)
class FKeyEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000020 - 0x000028)
class FNavigationEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000040 - 0x000048)
class FAnalogInputEvent : public FKeyEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFocusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0060 (0x000020 - 0x000080)
class FMotionEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/SlateCore.TableViewStyle
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FTableViewStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/SlateCore.FontSdfSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FFontSdfSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   BasePpem                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0028 (0x000000 - 0x000028)
class FFontData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   FontFilename                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EFontHinting)                              Hinting                                                     OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(EFontLoadingPolicy)                        LoadingPolicy                                               OFFSET(get<T>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   SubFaceIndex                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(UObject*)                                  FontFaceAsset                                               OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FTypefaceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFontData)                                 Font                                                        OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
class FTypeface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTypefaceEntry>)                    Fonts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
class FCompositeFallbackFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTypeface)                                 Typeface                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ScalingFactor                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
class FCompositeSubFont : public FCompositeFallbackFont
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FInt32Range>)                       CharacterRanges                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Cultures                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0040 (0x000000 - 0x000040)
class FCompositeFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTypeface)                                 DefaultTypeface                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCompositeFallbackFont)                    FallbackTypeface                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TArray<FCompositeSubFont>)                 SubTypefaces                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bEnableAscentDescentOverride                                OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureLostEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.SegmentedControlStyle
/// Size: 0x1F08 (0x000008 - 0x001F10)
class FSegmentedControlStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 7952;

public:
	SMember(FCheckBoxStyle)                            ControlStyle                                                OFFSET(getStruct<T>, {0x10, 2576, 0, 0})
	SMember(FCheckBoxStyle)                            FirstControlStyle                                           OFFSET(getStruct<T>, {0xA20, 2576, 0, 0})
	SMember(FCheckBoxStyle)                            LastControlStyle                                            OFFSET(getStruct<T>, {0x1430, 2576, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x1E40, 192, 0, 0})
	SMember(FMargin)                                   UniformPadding                                              OFFSET(getStruct<T>, {0x1F00, 16, 0, 0})
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0A08 (0x000008 - 0x000A10)
class FCheckBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	CMember(TEnumAsByte<ESlateCheckBoxType>)           CheckBoxType                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSlateBrush)                               UncheckedImage                                              OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               UncheckedHoveredImage                                       OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               UncheckedPressedImage                                       OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               CheckedImage                                                OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               CheckedHoveredImage                                         OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FSlateBrush)                               CheckedPressedImage                                         OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	SMember(FSlateBrush)                               UndeterminedImage                                           OFFSET(getStruct<T>, {0x490, 192, 0, 0})
	SMember(FSlateBrush)                               UndeterminedHoveredImage                                    OFFSET(getStruct<T>, {0x550, 192, 0, 0})
	SMember(FSlateBrush)                               UndeterminedPressedImage                                    OFFSET(getStruct<T>, {0x610, 192, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x6E0, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundHoveredImage                                      OFFSET(getStruct<T>, {0x7A0, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundPressedImage                                      OFFSET(getStruct<T>, {0x860, 192, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x920, 20, 0, 0})
	SMember(FSlateColor)                               HoveredForeground                                           OFFSET(getStruct<T>, {0x934, 20, 0, 0})
	SMember(FSlateColor)                               PressedForeground                                           OFFSET(getStruct<T>, {0x948, 20, 0, 0})
	SMember(FSlateColor)                               CheckedForeground                                           OFFSET(getStruct<T>, {0x95C, 20, 0, 0})
	SMember(FSlateColor)                               CheckedHoveredForeground                                    OFFSET(getStruct<T>, {0x970, 20, 0, 0})
	SMember(FSlateColor)                               CheckedPressedForeground                                    OFFSET(getStruct<T>, {0x984, 20, 0, 0})
	SMember(FSlateColor)                               UndeterminedForeground                                      OFFSET(getStruct<T>, {0x998, 20, 0, 0})
	SMember(FSlateColor)                               BorderBackgroundColor                                       OFFSET(getStruct<T>, {0x9AC, 20, 0, 0})
	SMember(FSlateSound)                               CheckedSlateSound                                           OFFSET(getStruct<T>, {0x9C0, 24, 0, 0})
	SMember(FSlateSound)                               UncheckedSlateSound                                         OFFSET(getStruct<T>, {0x9D8, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x9F0, 24, 0, 0})
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x06D8 (0x000008 - 0x0006E0)
class FHyperlinkStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	SMember(FButtonStyle)                              UnderlineStyle                                              OFFSET(getStruct<T>, {0x10, 944, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x3C0, 784, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x1098 (0x000008 - 0x0010A0)
class FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4256;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x10, 3456, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0xD90, 784, 0, 0})
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0258 (0x000008 - 0x000260)
class FProgressBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               FillImage                                                   OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MarqueeImage                                                OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	DMember(bool)                                      EnableFillAnimation                                         OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FExpandableAreaStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateBrush)                               CollapsedImage                                              OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               ExpandedImage                                               OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	DMember(float)                                     RolloutAnimationSeconds                                     OFFSET(get<float>, {0x190, 4, 0, 0})
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x1108 (0x000008 - 0x001110)
class FSearchBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4368;

public:
	SMember(FEditableTextBoxStyle)                     TextBoxStyle                                                OFFSET(getStruct<T>, {0x10, 3456, 0, 0})
	SMember(FSlateFontInfo)                            ActiveFontInfo                                              OFFSET(getStruct<T>, {0xD90, 88, 0, 0})
	SMember(FSlateBrush)                               UpArrowImage                                                OFFSET(getStruct<T>, {0xDF0, 192, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0xEB0, 192, 0, 0})
	SMember(FSlateBrush)                               GlassImage                                                  OFFSET(getStruct<T>, {0xF70, 192, 0, 0})
	SMember(FSlateBrush)                               ClearImage                                                  OFFSET(getStruct<T>, {0x1030, 192, 0, 0})
	SMember(FMargin)                                   ImagePadding                                                OFFSET(getStruct<T>, {0x10F0, 16, 0, 0})
	DMember(bool)                                      bLeftAlignButtons                                           OFFSET(get<bool>, {0x1100, 1, 0, 0})
	DMember(bool)                                      bLeftAlignSearchResultButtons                               OFFSET(get<bool>, {0x1101, 1, 0, 0})
	DMember(bool)                                      bLeftAlignGlassImageAndClearButton                          OFFSET(get<bool>, {0x1102, 1, 0, 0})
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0498 (0x000008 - 0x0004A0)
class FSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredBarImage                                             OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x490, 4, 0, 0})
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0868 (0x000008 - 0x000870)
class FVolumeControlStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x10, 1184, 0, 0})
	SMember(FSlateBrush)                               HighVolumeImage                                             OFFSET(getStruct<T>, {0x4B0, 192, 0, 0})
	SMember(FSlateBrush)                               MidVolumeImage                                              OFFSET(getStruct<T>, {0x570, 192, 0, 0})
	SMember(FSlateBrush)                               LowVolumeImage                                              OFFSET(getStruct<T>, {0x630, 192, 0, 0})
	SMember(FSlateBrush)                               NoVolumeImage                                               OFFSET(getStruct<T>, {0x6F0, 192, 0, 0})
	SMember(FSlateBrush)                               MutedImage                                                  OFFSET(getStruct<T>, {0x7B0, 192, 0, 0})
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FInlineTextImageStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	DMember(int16_t)                                   Baseline                                                    OFFSET(get<int16_t>, {0xD0, 2, 0, 0})
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0188 (0x000008 - 0x000190)
class FSplitterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FSlateBrush)                               HandleNormalBrush                                           OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               HandleHighlightBrush                                        OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
class FTableColumnHeaderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FSlateBrush)                               SortPrimaryAscendingImage                                   OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               SortPrimaryDescendingImage                                  OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryAscendingImage                                 OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryDescendingImage                                OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownImage                                           OFFSET(getStruct<T>, {0x490, 192, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownNormalBorderBrush                               OFFSET(getStruct<T>, {0x550, 192, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownHoveredBorderBrush                              OFFSET(getStruct<T>, {0x610, 192, 0, 0})
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x10F8 (0x000008 - 0x001100)
class FHeaderRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4352;

public:
	SMember(FTableColumnHeaderStyle)                   ColumnStyle                                                 OFFSET(getStruct<T>, {0x10, 1744, 0, 0})
	SMember(FTableColumnHeaderStyle)                   LastColumnStyle                                             OFFSET(getStruct<T>, {0x6E0, 1744, 0, 0})
	SMember(FSplitterStyle)                            ColumnSplitterStyle                                         OFFSET(getStruct<T>, {0xDB0, 400, 0, 0})
	DMember(float)                                     SplitterHandleSize                                          OFFSET(get<float>, {0xF40, 4, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xF50, 192, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x1010, 20, 0, 0})
	SMember(FSlateBrush)                               HorizontalSeparatorBrush                                    OFFSET(getStruct<T>, {0x1030, 192, 0, 0})
	DMember(float)                                     HorizontalSeparatorThickness                                OFFSET(get<float>, {0x10F0, 4, 0, 0})
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0C98 (0x000008 - 0x000CA0)
class FDockTabStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3232;

public:
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x10, 944, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x3C0, 192, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayTabBrush                                        OFFSET(getStruct<T>, {0x480, 192, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayIconBrush                                       OFFSET(getStruct<T>, {0x540, 192, 0, 0})
	SMember(FSlateBrush)                               ForegroundBrush                                             OFFSET(getStruct<T>, {0x600, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x6C0, 192, 0, 0})
	SMember(FSlateBrush)                               ContentAreaBrush                                            OFFSET(getStruct<T>, {0x780, 192, 0, 0})
	SMember(FSlateBrush)                               TabWellBrush                                                OFFSET(getStruct<T>, {0x840, 192, 0, 0})
	SMember(FTextBlockStyle)                           TabTextStyle                                                OFFSET(getStruct<T>, {0x900, 784, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0xC10, 16, 0, 0})
	SMember(FDeprecateSlateVector2D)                   IconSize                                                    OFFSET(getStruct<T>, {0xC20, 8, 0, 0})
	DMember(float)                                     OverlapWidth                                                OFFSET(get<float>, {0xC28, 4, 0, 0})
	SMember(FSlateColor)                               FlashColor                                                  OFFSET(getStruct<T>, {0xC2C, 20, 0, 0})
	SMember(FSlateColor)                               NormalForegroundColor                                       OFFSET(getStruct<T>, {0xC40, 20, 0, 0})
	SMember(FSlateColor)                               HoveredForegroundColor                                      OFFSET(getStruct<T>, {0xC54, 20, 0, 0})
	SMember(FSlateColor)                               ActiveForegroundColor                                       OFFSET(getStruct<T>, {0xC68, 20, 0, 0})
	SMember(FSlateColor)                               ForegroundForegroundColor                                   OFFSET(getStruct<T>, {0xC7C, 20, 0, 0})
	DMember(float)                                     IconBorderPadding                                           OFFSET(get<float>, {0xC90, 4, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0328 (0x000008 - 0x000330)
class FScrollBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               LeftShadowBrush                                             OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               RightShadowBrush                                            OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FMargin)                                   HorizontalScrolledContentPadding                            OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMargin)                                   VerticalScrolledContentPadding                              OFFSET(getStruct<T>, {0x320, 16, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0188 (0x000008 - 0x000190)
class FScrollBorderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1798 (0x000008 - 0x0017A0)
class FWindowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6048;

public:
	SMember(FButtonStyle)                              MinimizeButtonStyle                                         OFFSET(getStruct<T>, {0x10, 944, 0, 0})
	SMember(FButtonStyle)                              MaximizeButtonStyle                                         OFFSET(getStruct<T>, {0x3C0, 944, 0, 0})
	SMember(FButtonStyle)                              RestoreButtonStyle                                          OFFSET(getStruct<T>, {0x770, 944, 0, 0})
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0xB20, 944, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextStyle                                              OFFSET(getStruct<T>, {0xED0, 784, 0, 0})
	SMember(FSlateBrush)                               ActiveTitleBrush                                            OFFSET(getStruct<T>, {0x11E0, 192, 0, 0})
	SMember(FSlateBrush)                               InactiveTitleBrush                                          OFFSET(getStruct<T>, {0x12A0, 192, 0, 0})
	SMember(FSlateBrush)                               FlashTitleBrush                                             OFFSET(getStruct<T>, {0x1360, 192, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x1420, 20, 0, 0})
	SMember(FSlateBrush)                               OutlineBrush                                                OFFSET(getStruct<T>, {0x1440, 192, 0, 0})
	SMember(FSlateColor)                               OutlineColor                                                OFFSET(getStruct<T>, {0x1500, 20, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0x1520, 192, 0, 0})
	SMember(FSlateColor)                               BorderColor                                                 OFFSET(getStruct<T>, {0x15E0, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x1600, 192, 0, 0})
	SMember(FSlateBrush)                               ChildBackgroundBrush                                        OFFSET(getStruct<T>, {0x16C0, 192, 0, 0})
	DMember(int32_t)                                   WindowCornerRadius                                          OFFSET(get<int32_t>, {0x1780, 4, 0, 0})
	SMember(FMargin)                                   BorderPadding                                               OFFSET(getStruct<T>, {0x1784, 16, 0, 0})
};

/// Struct /Script/SlateCore.StyleColorList
/// Size: 0x0988 (0x000000 - 0x000988)
class FStyleColorList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2440;

public:
	SMember(FLinearColor)                              StyleColors                                                 OFFSET(getStruct<T>, {0x0, 976, 0, 0})
};

/// Struct /Script/SlateCore.StyleTheme
/// Size: 0x0048 (0x000000 - 0x000048)
class FStyleTheme : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SlateCore.ToolBarStyle
/// Size: 0x3A68 (0x000008 - 0x003A70)
class FToolBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14960;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               ExpandBrush                                                 OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               SeparatorBrush                                              OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FTextBlockStyle)                           LabelStyle                                                  OFFSET(getStruct<T>, {0x250, 784, 0, 0})
	SMember(FEditableTextBoxStyle)                     EditableTextStyle                                           OFFSET(getStruct<T>, {0x560, 3456, 0, 0})
	SMember(FCheckBoxStyle)                            ToggleButton                                                OFFSET(getStruct<T>, {0x12E0, 2576, 0, 0})
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x1CF0, 1440, 0, 0})
	SMember(FButtonStyle)                              SettingsButtonStyle                                         OFFSET(getStruct<T>, {0x2290, 944, 0, 0})
	SMember(FComboButtonStyle)                         SettingsComboButton                                         OFFSET(getStruct<T>, {0x2640, 1440, 0, 0})
	SMember(FCheckBoxStyle)                            SettingsToggleButton                                        OFFSET(getStruct<T>, {0x2BE0, 2576, 0, 0})
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x35F0, 944, 0, 0})
	SMember(FMargin)                                   LabelPadding                                                OFFSET(getStruct<T>, {0x39A0, 16, 0, 0})
	DMember(float)                                     UniformBlockWidth                                           OFFSET(get<float>, {0x39B0, 4, 0, 0})
	DMember(float)                                     UniformBlockHeight                                          OFFSET(get<float>, {0x39B4, 4, 0, 0})
	DMember(int32_t)                                   NumColumns                                                  OFFSET(get<int32_t>, {0x39B8, 4, 0, 0})
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x39BC, 16, 0, 0})
	SMember(FMargin)                                   SeparatorPadding                                            OFFSET(getStruct<T>, {0x39CC, 16, 0, 0})
	SMember(FMargin)                                   ComboButtonPadding                                          OFFSET(getStruct<T>, {0x39DC, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x39EC, 16, 0, 0})
	SMember(FMargin)                                   CheckBoxPadding                                             OFFSET(getStruct<T>, {0x39FC, 16, 0, 0})
	SMember(FMargin)                                   BlockPadding                                                OFFSET(getStruct<T>, {0x3A0C, 16, 0, 0})
	SMember(FMargin)                                   IndentedBlockPadding                                        OFFSET(getStruct<T>, {0x3A1C, 16, 0, 0})
	SMember(FMargin)                                   BackgroundPadding                                           OFFSET(getStruct<T>, {0x3A2C, 16, 0, 0})
	SMember(FDeprecateSlateVector2D)                   IconSize                                                    OFFSET(getStruct<T>, {0x3A3C, 8, 0, 0})
	DMember(bool)                                      bShowLabels                                                 OFFSET(get<bool>, {0x3A44, 1, 0, 0})
	DMember(float)                                     ButtonContentMaxWidth                                       OFFSET(get<float>, {0x3A48, 4, 0, 0})
	DMember(float)                                     ButtonContentFillWidth                                      OFFSET(get<float>, {0x3A4C, 4, 0, 0})
	SMember(FMargin)                                   IconPaddingWithVisibleLabel                                 OFFSET(getStruct<T>, {0x3A50, 16, 0, 0})
	SMember(FMargin)                                   IconPaddingWithCollapsedLabel                               OFFSET(getStruct<T>, {0x3A60, 16, 0, 0})
};

/// Enum /Script/SlateCore.EFontRasterizationMode
/// Size: 0x03
enum EFontRasterizationMode : uint8_t
{
	EFontRasterizationMode__Bitmap0                                                  = 0,
	EFontRasterizationMode__Msdf1                                                    = 1,
	EFontRasterizationMode__EFontRasterizationMode_MAX2                              = 2
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape0                                                       = 0,
	EUINavigationRule__Explicit1                                                     = 1,
	EUINavigationRule__Wrap2                                                         = 2,
	EUINavigationRule__Stop3                                                         = 3,
	EUINavigationRule__Custom4                                                       = 4,
	EUINavigationRule__CustomBoundary5                                               = 5,
	EUINavigationRule__Invalid6                                                      = 6,
	EUINavigationRule__EUINavigationRule_MAX7                                        = 7
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision0                                            = 0,
	EColorVisionDeficiency__Deuteranope1                                             = 1,
	EColorVisionDeficiency__Protanope2                                               = 2,
	EColorVisionDeficiency__Tritanope3                                               = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX4                              = 4
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp0                                                   = 0,
	EButtonClickMethod__MouseDown1                                                   = 1,
	EButtonClickMethod__MouseUp2                                                     = 2,
	EButtonClickMethod__PreciseClick3                                                = 3,
	EButtonClickMethod__EButtonClickMethod_MAX4                                      = 4
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x04
enum EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp0                                                   = 0,
	EButtonTouchMethod__Down1                                                        = 1,
	EButtonTouchMethod__PreciseTap2                                                  = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp0                                                   = 0,
	EButtonPressMethod__ButtonPress1                                                 = 1,
	EButtonPressMethod__ButtonRelease2                                               = 2,
	EButtonPressMethod__EButtonPressMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum EUINavigation : uint8_t
{
	EUINavigation__Left0                                                             = 0,
	EUINavigation__Right1                                                            = 1,
	EUINavigation__Up2                                                               = 2,
	EUINavigation__Down3                                                             = 3,
	EUINavigation__Next4                                                             = 4,
	EUINavigation__Previous5                                                         = 5,
	EUINavigation__Num6                                                              = 6,
	EUINavigation__Invalid7                                                          = 7,
	EUINavigation__EUINavigation_MAX8                                                = 8
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x05
enum EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept0                                                     = 0,
	EUINavigationAction__Back1                                                       = 1,
	EUINavigationAction__Num2                                                        = 2,
	EUINavigationAction__Invalid3                                                    = 3,
	EUINavigationAction__EUINavigationAction_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget0                                                = 0,
	ENavigationSource__WidgetUnderCursor1                                            = 1,
	ENavigationSource__ENavigationSource_MAX2                                        = 2
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard0                                                    = 0,
	ENavigationGenesis__Controller1                                                  = 1,
	ENavigationGenesis__User2                                                        = 2,
	ENavigationGenesis__ENavigationGenesis_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum EHorizontalAlignment : uint8_t
{
	HAlign_Fill0                                                                     = 0,
	HAlign_Left1                                                                     = 1,
	HAlign_Center2                                                                   = 2,
	HAlign_Right3                                                                    = 3,
	HAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum EVerticalAlignment : uint8_t
{
	VAlign_Fill0                                                                     = 0,
	VAlign_Top1                                                                      = 1,
	VAlign_Center2                                                                   = 2,
	VAlign_Bottom3                                                                   = 3,
	VAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor0                                                       = 0,
	MenuPlacement_CenteredBelowAnchor1                                               = 1,
	MenuPlacement_BelowRightAnchor2                                                  = 2,
	MenuPlacement_ComboBox3                                                          = 3,
	MenuPlacement_ComboBoxRight4                                                     = 4,
	MenuPlacement_MenuRight5                                                         = 5,
	MenuPlacement_AboveAnchor6                                                       = 6,
	MenuPlacement_CenteredAboveAnchor7                                               = 7,
	MenuPlacement_AboveRightAnchor8                                                  = 8,
	MenuPlacement_MenuLeft9                                                          = 9,
	MenuPlacement_Center10                                                           = 10,
	MenuPlacement_RightLeftCenter11                                                  = 11,
	MenuPlacement_MatchBottomLeft12                                                  = 12,
	MenuPlacement_MAX13                                                              = 13
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum EOrientation : uint8_t
{
	Orient_Horizontal0                                                               = 0,
	Orient_Vertical1                                                                 = 1,
	Orient_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum EScrollDirection : uint8_t
{
	Scroll_Down0                                                                     = 0,
	Scroll_Up1                                                                       = 1,
	Scroll_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum ETextCommit : uint8_t
{
	ETextCommit__Default0                                                            = 0,
	ETextCommit__OnEnter1                                                            = 1,
	ETextCommit__OnUserMovedFocus2                                                   = 2,
	ETextCommit__OnCleared3                                                          = 3,
	ETextCommit__ETextCommit_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress0                                                         = 0,
	ESelectInfo__OnNavigation1                                                       = 1,
	ESelectInfo__OnMouseClick2                                                       = 2,
	ESelectInfo__Direct3                                                             = 3,
	ESelectInfo__ESelectInfo_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.EWidgetPixelSnapping
/// Size: 0x04
enum EWidgetPixelSnapping : uint8_t
{
	EWidgetPixelSnapping__Inherit0                                                   = 0,
	EWidgetPixelSnapping__Disabled1                                                  = 1,
	EWidgetPixelSnapping__SnapToPixel2                                               = 2,
	EWidgetPixelSnapping__EWidgetPixelSnapping_MAX3                                  = 3
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x27
enum ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove0                                            = 0,
	ESlateDebuggingInputEvent__MouseEnter1                                           = 1,
	ESlateDebuggingInputEvent__MouseLeave2                                           = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown3                               = 3,
	ESlateDebuggingInputEvent__MouseButtonDown4                                      = 4,
	ESlateDebuggingInputEvent__MouseButtonUp5                                        = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick6                               = 6,
	ESlateDebuggingInputEvent__MouseWheel7                                           = 7,
	ESlateDebuggingInputEvent__TouchStart8                                           = 8,
	ESlateDebuggingInputEvent__TouchEnd9                                             = 9,
	ESlateDebuggingInputEvent__TouchForceChanged10                                   = 10,
	ESlateDebuggingInputEvent__TouchFirstMove11                                      = 11,
	ESlateDebuggingInputEvent__TouchMoved12                                          = 12,
	ESlateDebuggingInputEvent__DragDetected13                                        = 13,
	ESlateDebuggingInputEvent__DragEnter14                                           = 14,
	ESlateDebuggingInputEvent__DragLeave15                                           = 15,
	ESlateDebuggingInputEvent__DragOver16                                            = 16,
	ESlateDebuggingInputEvent__DragDrop17                                            = 17,
	ESlateDebuggingInputEvent__DropMessage18                                         = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown19                                      = 19,
	ESlateDebuggingInputEvent__KeyDown20                                             = 20,
	ESlateDebuggingInputEvent__KeyUp21                                               = 21,
	ESlateDebuggingInputEvent__KeyChar22                                             = 22,
	ESlateDebuggingInputEvent__AnalogInput23                                         = 23,
	ESlateDebuggingInputEvent__TouchGesture24                                        = 24,
	ESlateDebuggingInputEvent__MotionDetected25                                      = 25,
	ESlateDebuggingInputEvent__MAX26                                                 = 26
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x03
enum ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained0                             = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost1                               = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX2            = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x07
enum ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown0                                        = 0,
	ESlateDebuggingNavigationMethod__Explicit1                                       = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound2                            = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound3                          = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious4                                 = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid5                                    = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX6            = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x04
enum ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging0                                        = 0,
	ESlateDebuggingFocusEvent__FocusLost1                                            = 1,
	ESlateDebuggingFocusEvent__FocusReceived2                                        = 2,
	ESlateDebuggingFocusEvent__MAX3                                                  = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum EFontHinting : uint8_t
{
	EFontHinting__Default0                                                           = 0,
	EFontHinting__Auto1                                                              = 1,
	EFontHinting__AutoLight2                                                         = 2,
	EFontHinting__Monochrome3                                                        = 3,
	EFontHinting__None4                                                              = 4,
	EFontHinting__EFontHinting_MAX5                                                  = 5
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad0                                                    = 0,
	EFontLoadingPolicy__Stream1                                                      = 1,
	EFontLoadingPolicy__Inline2                                                      = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics0                                                      = 0,
	EFontLayoutMethod__BoundingBox1                                                  = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX2                                        = 2
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto0                                                        = 0,
	ETextShapingMethod__KerningOnly1                                                 = 1,
	ETextShapingMethod__FullShaping2                                                 = 2,
	ETextShapingMethod__ETextShapingMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum EFocusCause : uint8_t
{
	EFocusCause__Mouse0                                                              = 0,
	EFocusCause__Navigation1                                                         = 1,
	EFocusCause__SetDirectly2                                                        = 2,
	EFocusCause__Cleared3                                                            = 3,
	EFocusCause__OtherWidgetLostFocus4                                               = 4,
	EFocusCause__WindowActivate5                                                     = 5,
	EFocusCause__EFocusCause_MAX6                                                    = 6
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit0                                                        = 0,
	EWidgetClipping__ClipToBounds1                                                   = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting2                                = 2,
	EWidgetClipping__ClipToBoundsAlways3                                             = 3,
	EWidgetClipping__OnDemand4                                                       = 4,
	EWidgetClipping__EWidgetClipping_MAX5                                            = 5
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x05
enum EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit0                                               = 0,
	EFlowDirectionPreference__Culture1                                               = 1,
	EFlowDirectionPreference__LeftToRight2                                           = 2,
	EFlowDirectionPreference__RightToLeft3                                           = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX4                          = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x06
enum ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType0                                                 = 0,
	ESlateBrushDrawType__Box1                                                        = 1,
	ESlateBrushDrawType__Border2                                                     = 2,
	ESlateBrushDrawType__Image3                                                      = 3,
	ESlateBrushDrawType__RoundedBox4                                                 = 4,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX5                                    = 5
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile0                                                     = 0,
	ESlateBrushTileType__Horizontal1                                                 = 1,
	ESlateBrushTileType__Vertical2                                                   = 2,
	ESlateBrushTileType__Both3                                                       = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror0                                                 = 0,
	ESlateBrushMirrorType__Horizontal1                                               = 1,
	ESlateBrushMirrorType__Vertical2                                                 = 2,
	ESlateBrushMirrorType__Both3                                                     = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX4                                = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x05
enum ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage0                                                   = 0,
	ESlateBrushImageType__FullColor1                                                 = 1,
	ESlateBrushImageType__Linear2                                                    = 2,
	ESlateBrushImageType__Vector3                                                    = 3,
	ESlateBrushImageType__ESlateBrushImageType_MAX4                                  = 4
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x03
enum ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius0                                            = 0,
	ESlateBrushRoundingType__HalfHeightRadius1                                       = 1,
	ESlateBrushRoundingType__ESlateBrushRoundingType_MAX2                            = 2
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x06
enum ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified0                                      = 0,
	ESlateColorStylingMode__UseColor_ColorTable1                                     = 1,
	ESlateColorStylingMode__UseColor_Foreground2                                     = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued3                             = 3,
	ESlateColorStylingMode__UseColor_UseStyle4                                       = 4,
	ESlateColorStylingMode__UseColor_MAX5                                            = 5
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible0                                       = 0,
	EConsumeMouseWheel__Always1                                                      = 1,
	EConsumeMouseWheel__Never2                                                       = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX3                                      = 3
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x03
enum ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow0                                    = 0,
	ESlateParentWindowSearchMethod__MainWindow1                                      = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX2              = 2
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox0                                                    = 0,
	ESlateCheckBoxType__ToggleButton1                                                = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX2                                      = 2
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked0                                                       = 0,
	ECheckBoxState__Checked1                                                         = 1,
	ECheckBoxState__Undetermined2                                                    = 2,
	ECheckBoxState__ECheckBoxState_MAX3                                              = 3
};

/// Enum /Script/SlateCore.ETextOverflowPolicy
/// Size: 0x03
enum ETextOverflowPolicy : uint8_t
{
	ETextOverflowPolicy__Clip0                                                       = 0,
	ETextOverflowPolicy__Ellipsis1                                                   = 1,
	ETextOverflowPolicy__ETextOverflowPolicy_MAX2                                    = 2
};

/// Enum /Script/SlateCore.ETextTransformPolicy
/// Size: 0x04
enum ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None0                                                      = 0,
	ETextTransformPolicy__ToLower1                                                   = 1,
	ETextTransformPolicy__ToUpper2                                                   = 2,
	ETextTransformPolicy__ETextTransformPolicy_MAX3                                  = 3
};

/// Enum /Script/SlateCore.EStyleColor
/// Size: 0x62
enum EStyleColor : uint8_t
{
	EStyleColor__Black0                                                              = 0,
	EStyleColor__Background1                                                         = 1,
	EStyleColor__Title2                                                              = 2,
	EStyleColor__WindowBorder3                                                       = 3,
	EStyleColor__Foldout4                                                            = 4,
	EStyleColor__Input5                                                              = 5,
	EStyleColor__InputOutline6                                                       = 6,
	EStyleColor__Recessed7                                                           = 7,
	EStyleColor__Panel8                                                              = 8,
	EStyleColor__Header9                                                             = 9,
	EStyleColor__Dropdown10                                                          = 10,
	EStyleColor__DropdownOutline11                                                   = 11,
	EStyleColor__Hover12                                                             = 12,
	EStyleColor__Hover213                                                            = 13,
	EStyleColor__White14                                                             = 14,
	EStyleColor__White2515                                                           = 15,
	EStyleColor__Highlight16                                                         = 16,
	EStyleColor__Primary17                                                           = 17,
	EStyleColor__PrimaryHover18                                                      = 18,
	EStyleColor__PrimaryPress19                                                      = 19,
	EStyleColor__Secondary20                                                         = 20,
	EStyleColor__Foreground21                                                        = 21,
	EStyleColor__ForegroundHover22                                                   = 22,
	EStyleColor__ForegroundInverted23                                                = 23,
	EStyleColor__ForegroundHeader24                                                  = 24,
	EStyleColor__Select25                                                            = 25,
	EStyleColor__SelectInactive26                                                    = 26,
	EStyleColor__SelectParent27                                                      = 27,
	EStyleColor__SelectHover28                                                       = 28,
	EStyleColor__Notifications29                                                     = 29,
	EStyleColor__AccentBlue30                                                        = 30,
	EStyleColor__AccentPurple31                                                      = 31,
	EStyleColor__AccentPink32                                                        = 32,
	EStyleColor__AccentRed33                                                         = 33,
	EStyleColor__AccentOrange34                                                      = 34,
	EStyleColor__AccentYellow35                                                      = 35,
	EStyleColor__AccentGreen36                                                       = 36,
	EStyleColor__AccentBrown37                                                       = 37,
	EStyleColor__AccentBlack38                                                       = 38,
	EStyleColor__AccentGray39                                                        = 39,
	EStyleColor__AccentWhite40                                                       = 40,
	EStyleColor__AccentFolder41                                                      = 41,
	EStyleColor__Warning42                                                           = 42,
	EStyleColor__Error43                                                             = 43,
	EStyleColor__Success44                                                           = 44,
	EStyleColor__User145                                                             = 45,
	EStyleColor__User246                                                             = 46,
	EStyleColor__User347                                                             = 47,
	EStyleColor__User448                                                             = 48,
	EStyleColor__User549                                                             = 49,
	EStyleColor__User650                                                             = 50,
	EStyleColor__User751                                                             = 51,
	EStyleColor__User852                                                             = 52,
	EStyleColor__User953                                                             = 53,
	EStyleColor__User1054                                                            = 54,
	EStyleColor__User1155                                                            = 55,
	EStyleColor__User1256                                                            = 56,
	EStyleColor__User1357                                                            = 57,
	EStyleColor__User1458                                                            = 58,
	EStyleColor__User1559                                                            = 59,
	EStyleColor__User1660                                                            = 60,
	EStyleColor__MAX61                                                               = 61
};

