
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EResonanceRenderMode)                      RenderMode                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
/// Size: 0x0080 (0x000290 - 0x000310)
class AResonanceAudioDirectivityVisualizer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UMaterial*)                                Material                                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UResonanceAudioSpatializationSourceSettings*) Settings                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
/// Size: 0x0108 (0x000068 - 0x000170)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FResonanceAudioReverbPluginSettings)       Settings                                                    OFFSET(getStruct<T>, {0x100, 112, 0, 0})


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	// void SetRoomRotation(FQuat& InRotation);                                                                                 // [0xa473ce0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	// void SetRoomPosition(FVector& InPosition);                                                                               // [0xa473c58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	// void SetRoomMaterials(TArray<ERaMaterialName>& InMaterials);                                                             // [0xa473580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	// void SetRoomDimensions(FVector& InDimensions);                                                                           // [0xa4734f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	// void SetReverbTimeModifier(float InReverbTimeModifier);                                                                  // [0xa473468] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	// void SetReverbGain(float InReverbGain);                                                                                  // [0xa4733d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	// void SetReverbBrightness(float InReverbBrightness);                                                                      // [0xa473348] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	// void SetReflectionScalar(float InReflectionScalar);                                                                      // [0xa4732b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	// void SetEnableRoomEffects(bool bInEnableRoomEffects);                                                                    // [0xa473124] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UResonanceAudioSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           OutputSubmix                                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(ERaQualityMode)                            QualityMode                                                 OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FSoftObjectPath)                           GlobalReverbPreset                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalSourcePreset                                          OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ERaSpatializationMethod)                   SpatializationMethod                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     Pattern                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bToggleVisualization                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ERaDistanceRolloffModel)                   Rolloff                                                     OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x48, 4, 0, 0})


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	// void SetSoundSourceSpread(float InSpread);                                                                               // [0x5b3c7b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	// void SetSoundSourceDirectivity(float InPattern, float InSharpness);                                                      // [0xa473d68] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FResonanceAudioReverbPluginSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnableRoomEffects                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGetTransformFromAudioVolume                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FVector)                                   RoomPosition                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     RoomRotation                                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   RoomDimensions                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(ERaMaterialName)                           LeftWallMaterial                                            OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(ERaMaterialName)                           RightWallMaterial                                           OFFSET(get<T>, {0x59, 1, 0, 0})
	CMember(ERaMaterialName)                           FloorMaterial                                               OFFSET(get<T>, {0x5A, 1, 0, 0})
	CMember(ERaMaterialName)                           CeilingMaterial                                             OFFSET(get<T>, {0x5B, 1, 0, 0})
	CMember(ERaMaterialName)                           FrontWallMaterial                                           OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(ERaMaterialName)                           BackWallMaterial                                            OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(float)                                     ReflectionScalar                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ReverbGain                                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     ReverbTimeModifier                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     ReverbBrightness                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Enum /Script/ResonanceAudio.ERaQualityMode
/// Size: 0x05
enum ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING0                                                  = 0,
	ERaQualityMode__BINAURAL_LOW1                                                    = 1,
	ERaQualityMode__BINAURAL_MEDIUM2                                                 = 2,
	ERaQualityMode__BINAURAL_HIGH3                                                   = 3,
	ERaQualityMode__ERaQualityMode_MAX4                                              = 4
};

/// Enum /Script/ResonanceAudio.ERaSpatializationMethod
/// Size: 0x03
enum ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING0                                         = 0,
	ERaSpatializationMethod__HRTF1                                                   = 1,
	ERaSpatializationMethod__ERaSpatializationMethod_MAX2                            = 2
};

/// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
/// Size: 0x04
enum ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC0                                            = 0,
	ERaDistanceRolloffModel__LINEAR1                                                 = 1,
	ERaDistanceRolloffModel__NONE2                                                   = 2,
	ERaDistanceRolloffModel__ERaDistanceRolloffModel_MAX3                            = 3
};

/// Enum /Script/ResonanceAudio.ERaMaterialName
/// Size: 0x25
enum ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT0                                                    = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES1                                         = 1,
	ERaMaterialName__BRICK_BARE2                                                     = 2,
	ERaMaterialName__BRICK_PAINTED3                                                  = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE4                                          = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED5                                         = 5,
	ERaMaterialName__CURTAIN_HEAVY6                                                  = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION7                                         = 7,
	ERaMaterialName__GLASS_THIN8                                                     = 8,
	ERaMaterialName__GLASS_THICK9                                                    = 9,
	ERaMaterialName__GRASS10                                                         = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE11                                          = 11,
	ERaMaterialName__MARBLE12                                                        = 12,
	ERaMaterialName__METAL13                                                         = 13,
	ERaMaterialName__PARQUET_ONCONCRETE14                                            = 14,
	ERaMaterialName__PLASTER_ROUGH15                                                 = 15,
	ERaMaterialName__PLASTER_SMOOTH16                                                = 16,
	ERaMaterialName__PLYWOOD_PANEL17                                                 = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE18                                     = 18,
	ERaMaterialName__SHEETROCK19                                                     = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE20                                          = 20,
	ERaMaterialName__WOOD_CEILING21                                                  = 21,
	ERaMaterialName__WOOD_PANEL22                                                    = 22,
	ERaMaterialName__UNIFORM23                                                       = 23,
	ERaMaterialName__ERaMaterialName_MAX24                                           = 24
};

/// Enum /Script/ResonanceAudio.EResonanceRenderMode
/// Size: 0x06
enum EResonanceRenderMode : uint8_t
{
	EResonanceRenderMode__StereoPanning0                                             = 0,
	EResonanceRenderMode__BinauralLowQuality1                                        = 1,
	EResonanceRenderMode__BinauralMediumQuality2                                     = 2,
	EResonanceRenderMode__BinauralHighQuality3                                       = 3,
	EResonanceRenderMode__RoomEffectsOnly4                                           = 4,
	EResonanceRenderMode__EResonanceRenderMode_MAX5                                  = 5
};

