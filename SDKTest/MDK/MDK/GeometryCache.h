
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0068 (0x000028 - 0x000090)
class UGeometryCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<UMaterialInterface*>)               Materials                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             MaterialSlotNames                                           OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UGeometryCacheTrack*>)              Tracks                                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(uint64_t)                                  Hash                                                        OFFSET(get<uint64_t>, {0x88, 8, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGeometryCacheActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UGeometryCacheComponent*)                  GeometryCacheComponent                                      OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// UGeometryCacheComponent* GetGeometryCacheComponent();                                                                    // [0x570a7ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<int32_t>)                           TopologyRanges                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DummyProperty                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0090 (0x0005A0 - 0x000630)
class UGeometryCacheComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UGeometryCache*)                           GeometryCache                                               OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bRunning                                                    OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x5A9, 1, 0, 0})
	DMember(bool)                                      bExtrapolateFrames                                          OFFSET(get<bool>, {0x5AA, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     MotionVectorScale                                           OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(int32_t)                                   NumTracks                                                   OFFSET(get<int32_t>, {0x5B8, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bManualTick                                                 OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      bOverrideWireframeColor                                     OFFSET(get<bool>, {0x611, 1, 0, 0})
	SMember(FLinearColor)                              WireframeOverrideColor                                      OFFSET(getStruct<T>, {0x614, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x9e42a84] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x9e42a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	// void SetWireframeOverrideColor(FLinearColor Color);                                                                      // [0x9e4291c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x9e42878] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x9e427e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	// void SetOverrideWireframeColor(bool bOverride);                                                                          // [0x9e42768] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x9e426d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x9e425a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(UGeometryCache* NewGeomCache);                                                                     // [0x9e42510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x9e42490] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x9e42440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x9e423fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x9e423b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x9e42370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x9e42350] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x9e4231c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x95af804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x9e42304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                            // [0x9e422ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	// FLinearColor GetWireframeOverrideColor();                                                                                // [0x9e422d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x9e422b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x9e4228c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x9e42274] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	// bool GetOverrideWireframeColor();                                                                                        // [0x9e4225c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x9e42228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                            // [0x9e421fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x9e421e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x9e421b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(uint32_t)                                  NumMeshSamples                                              OFFSET(get<uint32_t>, {0x58, 4, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x9e41ff0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UGeometryCacheCodecBase*)                  Codec                                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     StartSampleTime                                             OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x01B8 (0x0000B0 - 0x000268)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	CMember(TArray<FNiagaraGeometryCacheReference>)    GeometryCaches                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bIsLooping                                                  OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0xC4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RotationBinding                                             OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ElapsedTimeBinding                                          OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ArrayIndexBinding                                           OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x1E8, 80, 0, 0})
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FTrackRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCacheMeshBatchInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (0x000000 - 0x000009)
class FGeometryCacheVertexInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGeometryCacheMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraGeometryCacheMICOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInstanceConstant*)                ReplacementMaterial                                         OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraGeometryCacheReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UGeometryCache*)                           GeometryCache                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              GeometryCacheUserParamBinding                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraGeometryCacheMICOverride>)  MICOverrideMaterials                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

