
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayCameras

/// Class /Game/Weapons/FORT_Crossbows/Crossbow/Effects/BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
/// Size: 0x14B0 (0x000540 - 0x0019F0)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6640;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x540, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x558, 32, 0, 0})
	SMember(FAnimNode_MeshSpaceRefPose)                AnimGraphNode_MeshRefPose                                   OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x588, 32, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics                                  OFFSET(getStruct<T>, {0x5B0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics1                                 OFFSET(getStruct<T>, {0xAC0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics2                                 OFFSET(getStruct<T>, {0xFD0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics3                                 OFFSET(getStruct<T>, {0x14E0, 1296, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
	// void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint);                                                           // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UMelee_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C
/// Size: 0x0000 (0x000370 - 0x000370)
class ATracerGeneric_C : public AFortTracerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C
/// Size: 0x0000 (0x001340 - 0x001340)
class ADefaultBuildingTool_C : public AFortWeap_BuildingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4928;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C
/// Size: 0x0000 (0x001238 - 0x001238)
class ADefaultEditingTool_C : public AFortWeap_EditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4664;

public:
};

/// Class /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
/// Size: 0x037D (0x001920 - 0x001C9D)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7325;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1920, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Muzzle_Empty_                                               OFFSET(get<T>, {0x1928, 8, 0, 0})
	DMember(float)                                     AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<float>, {0x1930, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<T>, {0x1934, 1, 0, 0})
	CMember(UTimelineComponent*)                       AnimateScopePostProcess                                     OFFSET(get<T>, {0x1938, 8, 0, 0})
	CMember(UParticleSystem*)                          MuzzleParticleSystem                                        OFFSET(get<T>, {0x1940, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1948, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x1950, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x1958, 1, 0, 0})
	DMember(bool)                                      Use_Reload_Particles                                        OFFSET(get<bool>, {0x1959, 1, 0, 0})
	CMember(UParticleSystem*)                          Reload_ParticleSystem                                       OFFSET(get<T>, {0x1960, 8, 0, 0})
	DMember(double)                                    LastPlayFXTime                                              OFFSET(get<double>, {0x1968, 8, 0, 0})
	DMember(double)                                    MinPlayFXTime                                               OFFSET(get<double>, {0x1970, 8, 0, 0})
	DMember(bool)                                      UseShellsOnFire_                                            OFFSET(get<bool>, {0x1978, 1, 0, 0})
	DMember(bool)                                      UseShellsOnReload_                                          OFFSET(get<bool>, {0x1979, 1, 0, 0})
	DMember(bool)                                      UseShellsOnPump_                                            OFFSET(get<bool>, {0x197A, 1, 0, 0})
	DMember(bool)                                      IsReloadNiagara                                             OFFSET(get<bool>, {0x197B, 1, 0, 0})
	CMember(UNiagaraSystem*)                           Reload_Niagara_Asset                                        OFFSET(get<T>, {0x1980, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Reload_System                                               OFFSET(get<T>, {0x1988, 8, 0, 0})
	CMember(UMaterialInterface*)                       Reload_Smoke_Material                                       OFFSET(get<T>, {0x1990, 8, 0, 0})
	SMember(FName)                                     ReloadSocketName                                            OFFSET(getStruct<T>, {0x1998, 4, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      Array_Of_Active_Enemy_AI                                    OFFSET(get<T>, {0x19A0, 16, 0, 0})
	DMember(bool)                                      Scope___Render_Enemies_To_Custom_Depth_Buffer               OFFSET(get<bool>, {0x19B0, 1, 0, 0})
	SMember(FName)                                     Shells_Socket_Name                                          OFFSET(getStruct<T>, {0x19B4, 4, 0, 0})
	CMember(TEnumAsByte<En_ShellTypes_01>)             ShellTypeSelect                                             OFFSET(get<T>, {0x19B8, 1, 0, 0})
	DMember(double)                                    Shells_Spawn_Rate_Scale                                     OFFSET(get<double>, {0x19C0, 8, 0, 0})
	SMember(FVector)                                   ShellsRotationRate                                          OFFSET(getStruct<T>, {0x19C8, 24, 0, 0})
	SMember(FVector)                                   Shells_Velocity                                             OFFSET(getStruct<T>, {0x19E0, 24, 0, 0})
	SMember(FVector)                                   Shells_Gravity                                              OFFSET(getStruct<T>, {0x19F8, 24, 0, 0})
	SMember(FVector)                                   Shells_Size                                                 OFFSET(getStruct<T>, {0x1A10, 24, 0, 0})
	DMember(double)                                    Target_Scope_Vignette_Blur_Screen_Percentage                OFFSET(get<double>, {0x1A28, 8, 0, 0})
	DMember(double)                                    ScopeCameraOffsetX                                          OFFSET(get<double>, {0x1A30, 8, 0, 0})
	DMember(double)                                    ScopeCameraOffsetY                                          OFFSET(get<double>, {0x1A38, 8, 0, 0})
	DMember(double)                                    Scope_Camera_Offset_Amount                                  OFFSET(get<double>, {0x1A40, 8, 0, 0})
	DMember(double)                                    Inherit_Parent_Velocity                                     OFFSET(get<double>, {0x1A48, 8, 0, 0})
	DMember(double)                                    Cylindrical_Radius                                          OFFSET(get<double>, {0x1A50, 8, 0, 0})
	DMember(double)                                    Cylindrical_Height                                          OFFSET(get<double>, {0x1A58, 8, 0, 0})
	SMember(FLinearColor)                              Shell_Color                                                 OFFSET(getStruct<T>, {0x1A60, 16, 0, 0})
	CMember(UNiagaraComponent*)                        Spawned_Shells                                              OFFSET(get<T>, {0x1A70, 8, 0, 0})
	DMember(bool)                                      DebugShellsSocket_                                          OFFSET(get<bool>, {0x1A78, 1, 0, 0})
	CMember(USoundBase*)                               Sound_ScopeZoomIn                                           OFFSET(get<T>, {0x1A80, 8, 0, 0})
	CMember(USoundBase*)                               Sound_ScopeZoomOut                                          OFFSET(get<T>, {0x1A88, 8, 0, 0})
	CMember(UNiagaraComponent*)                        Alteration_Ambient_PS                                       OFFSET(get<T>, {0x1A90, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReticleHUDElementTags                                       OFFSET(getStruct<T>, {0x1A98, 32, 0, 0})
	DMember(bool)                                      Is_Wind_Enabled                                             OFFSET(get<bool>, {0x1AB8, 1, 0, 0})
	CMember(UParticleSystem*)                          MuzzleWindParticleSystem                                    OFFSET(get<T>, {0x1AC0, 8, 0, 0})
	CMember(UParticleSystem*)                          MuzzleParticleSystem1P                                      OFFSET(get<T>, {0x1AC8, 8, 0, 0})
	DMember(bool)                                      ShouldHideReticleAfterDelay                                 OFFSET(get<bool>, {0x1AD0, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 MuzzleWindParticleSpawned                                   OFFSET(get<T>, {0x1AD8, 8, 0, 0})
	DMember(int32_t)                                   StencilBufferValue                                          OFFSET(get<int32_t>, {0x1AE0, 4, 0, 0})
	CMember(UCurveFloat*)                              Curve_PitchOffset                                           OFFSET(get<T>, {0x1AE8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_ScopedInLoop                                          OFFSET(get<T>, {0x1AF0, 8, 0, 0})
	CMember(UAudioComponent*)                          ScopeZoomInComp                                             OFFSET(get<T>, {0x1AF8, 8, 0, 0})
	CMember(UAudioComponent*)                          ScopedInLoopComp                                            OFFSET(get<T>, {0x1B00, 8, 0, 0})
	CMember(UAudioComponent*)                          ScopeZoomOutComp                                            OFFSET(get<T>, {0x1B08, 8, 0, 0})
	DMember(double)                                    Alteration_Ambient_PS_Max_Draw_Distance                     OFFSET(get<double>, {0x1B10, 8, 0, 0})
	DMember(double)                                    Muzzle_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1B18, 8, 0, 0})
	DMember(double)                                    Beam_PS_Max_Draw_Distance                                   OFFSET(get<double>, {0x1B20, 8, 0, 0})
	DMember(double)                                    Reload_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1B28, 8, 0, 0})
	DMember(double)                                    Shells_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1B30, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  onAimDownSightsChanged                                      OFFSET(getStruct<T>, {0x1B38, 16, 0, 0})
	DMember(bool)                                      IsMuzzleNiagara                                             OFFSET(get<bool>, {0x1B48, 1, 0, 0})
	CMember(UNiagaraSystem*)                           MuzzleNiagaraSystemInstance                                 OFFSET(get<T>, {0x1B50, 8, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           MuzzleNiagaraSystemAsset                                    OFFSET(get<T>, {0x1B58, 32, 0, 0})
	CMember(UNiagaraComponent*)                        MuzzleNiagaraComponentInstance                              OFFSET(get<T>, {0x1B78, 8, 0, 0})
	CMember(TArray<UParticleSystemComponent*>)         MuzzleParticleSystemComponents                              OFFSET(get<T>, {0x1B80, 16, 0, 0})
	DMember(double)                                    Muzzle_ChanceOfLargeFlash                                   OFFSET(get<double>, {0x1B90, 8, 0, 0})
	DMember(double)                                    Muzzle_FlashLarge_MinScale                                  OFFSET(get<double>, {0x1B98, 8, 0, 0})
	DMember(double)                                    Muzzle_FlashLarge_MaxScale                                  OFFSET(get<double>, {0x1BA0, 8, 0, 0})
	DMember(double)                                    Muzzle_FlashSmall_MinScale                                  OFFSET(get<double>, {0x1BA8, 8, 0, 0})
	DMember(double)                                    Muzzle_FlashSmall_MaxScale                                  OFFSET(get<double>, {0x1BB0, 8, 0, 0})
	SMember(FTimerHandle)                              ScopeEffectDelay1Handle                                     OFFSET(getStruct<T>, {0x1BB8, 8, 0, 0})
	SMember(FTimerHandle)                              ScopeEffectDelay2Handle                                     OFFSET(getStruct<T>, {0x1BC0, 8, 0, 0})
	SMember(FScalableFloat)                            UseNativeFX                                                 OFFSET(getStruct<T>, {0x1BC8, 40, 0, 0})
	SMember(FScalableFloat)                            UseUpdatedFeedback                                          OFFSET(getStruct<T>, {0x1BF0, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartFiring                                               OFFSET(getStruct<T>, {0x1C18, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPersistentFireStopped                                     OFFSET(getStruct<T>, {0x1C28, 16, 0, 0})
	CMember(UStaticMesh*)                              ScopeMesh                                                   OFFSET(get<T>, {0x1C38, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ScopeMesh1P_Spawned                                         OFFSET(get<T>, {0x1C40, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ScopeMaterialOverrides                                      OFFSET(get<T>, {0x1C48, 16, 0, 0})
	DMember(float)                                     Niagara_Impact_Global_Scale                                 OFFSET(get<float>, {0x1C58, 4, 0, 0})
	DMember(float)                                     Reload_Smoke_Lifetime                                       OFFSET(get<float>, {0x1C5C, 4, 0, 0})
	DMember(float)                                     Reload_Smoke_Width_Scale                                    OFFSET(get<float>, {0x1C60, 4, 0, 0})
	SMember(FLinearColor)                              BaseColorAlpha                                              OFFSET(getStruct<T>, {0x1C64, 16, 0, 0})
	DMember(bool)                                      Use_Emissive_in_Reload                                      OFFSET(get<bool>, {0x1C74, 1, 0, 0})
	SMember(FLinearColor)                              Reload_Emissive_Color                                       OFFSET(getStruct<T>, {0x1C78, 16, 0, 0})
	DMember(bool)                                      Is_Rocket_Launcher                                          OFFSET(get<bool>, {0x1C88, 1, 0, 0})
	SMember(FLinearColor)                              Rocket_Launcher_Spark_Color                                 OFFSET(getStruct<T>, {0x1C8C, 16, 0, 0})
	DMember(bool)                                      Reload_Ejects_Shells                                        OFFSET(get<bool>, {0x1C9C, 1, 0, 0})


	/// Functions
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback
	// void StopLocalForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName tag);                                       // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback
	// void PlayLocalForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName tag, bool bLooping);                        // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp
	// void getScopeComp(UStaticMeshComponent*& ScopeComponent);                                                                // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.initScope
	// void initScope();                                                                                                        // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled
	// void IsNewFeedbackEnabled(bool& Enabled);                                                                                // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted
	// void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);                                             // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetCorrectMuzzleNiagaraSystem
	// void GetCorrectMuzzleNiagaraSystem(TWeakObjectPtr<UNiagaraSystem*>& OutNiagaraSystem);                                   // [0x1d9241c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio
	// void PlayScopeOutAudio();                                                                                                // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
	// void GetScopeParameters(UStaticMeshComponent*& ScopeComponent, FVector2D& DepthOfFieldVignetteRange, FVector& WeaponSightsOffset); // [0x1d9241c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents
	// void GetActiveMuzzleComponents(TArray<UFXSystemComponent*>& NewParam);                                                   // [0x1d9241c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent
	// void SetActiveMuzzleComponent(bool NiagaraEnabled);                                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
	// void StopScopedAudio();                                                                                                  // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
	// void StartScopedAudio();                                                                                                 // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
	// void SetPostProcessParams(double InputPin);                                                                              // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active);                                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
	// void ShowReticle();                                                                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
	// void HideReticle();                                                                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
	// void ActivateOrDeactivateWindParticle(bool bNewActive);                                                                  // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
	// void DeactivateMuzzleFX();                                                                                               // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
	// void ActivateReloadSmokeFX();                                                                                            // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
	// void ActivateShellsFX(bool bool);                                                                                        // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
	// void DeactivateShellsFX();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
	// void SetupShellFX();                                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
	// void UpdateShellEmittersFX();                                                                                            // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
	// void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection);                                                   // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
	// void AddRandomScale();                                                                                                   // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1d9241c] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
	// void AnimateScopePostProcess__FinishedFunc();                                                                            // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
	// void AnimateScopePostProcess__UpdateFunc();                                                                              // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc
	// void AnimateScopePostProcess__Toggle Scope__EventFunc();                                                                 // [0x1d9241c] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72
	// void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
	// void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
	// void OnLoaded_83457BA843174AC6288682A342EBEAD9(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
	// void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
	// void OnStopWeaponFireFX();                                                                                               // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
	// void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);                                                        // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
	// void OnSetTargeting(bool bNewIsTargeting);                                                                               // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
	// void InitializeScopeVariables();                                                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
	// void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue);                                     // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
	// void OnInitAlteration(UFortAlterationItemDefinition* NewAlteration);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
	// void ShellsON_(onPump)();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
	// void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit);                                                           // [0x1d9241c] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
	// void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit);                                                 // [0x1d9241c] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
	// void HideWeaponMesh();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
	// void ShowWeaponMesh();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
	// void HideWeapon();                                                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
	// void ShowWeapon();                                                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
	// void ReverseScopePP();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
	// void ResetDoonceScopeSound();                                                                                            // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
	// void UnhideThirdPersonStuff();                                                                                           // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
	// void PlayScopePP();                                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
	// void HideFirstPersonStuff();                                                                                             // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
	// void AbortScopeFX();                                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
	// void HideThirdPersonStuff();                                                                                             // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
	// void UnhideFirstPersonStuffPart2(int32_t Which Call);                                                                    // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
	// void UnhideFirstPersonStuffPart1();                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
	// void ForceScopeFX();                                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
	// void BindFireRateChange();                                                                                               // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
	// void PitchUpOnRateOfFireChange(float NewRateOfFire);                                                                     // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
	// void ShellEjectionFixOn();                                                                                               // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
	// void Bind on Effects Quality();                                                                                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
	// void ShellEjectionOff();                                                                                                 // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
	// void ForceScopeBackImmediatly();                                                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
	// void OnStartOverheated();                                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject
	// void LoadNiagaraMuzzleSoftObject();                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData
	// void OnApplyFireModeData(UFortWeaponFireModeData* FireModeData);                                                         // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2
	// void ScopeEffectDelay2();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1
	// void ScopeEffectDelay1();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
	// void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint);                                                              // [0x1d9241c] Final|HasDefaults    
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature
	// void OnPersistentFireStopped__DelegateSignature();                                                                       // [0x1d9241c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature
	// void OnStartFiring__DelegateSignature();                                                                                 // [0x1d9241c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
	// void onAimDownSightsChanged__DelegateSignature(bool AimDownsights);                                                      // [0x1d9241c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
/// Size: 0x0090 (0x001528 - 0x0015B8)
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5560;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1528, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 MeleeHeavy_PSC                                              OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UParticleSystem*)                          MeleeHeavy_ParticleSystem                                   OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x1548, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x1550, 1, 0, 0})
	CMember(UNiagaraComponent*)                        Alteration_Ambient_PS                                       OFFSET(get<T>, {0x1558, 8, 0, 0})
	SMember(FVector)                                   Effects_Color_Level                                         OFFSET(getStruct<T>, {0x1560, 24, 0, 0})
	DMember(bool)                                      Equipped                                                    OFFSET(get<bool>, {0x1578, 1, 0, 0})
	DMember(bool)                                      bEquipPendingInstigator                                     OFFSET(get<bool>, {0x1579, 1, 0, 0})
	DMember(bool)                                      UseTimeofDayControl                                         OFFSET(get<bool>, {0x157A, 1, 0, 0})
	DMember(bool)                                      Swing_Right_                                                OFFSET(get<bool>, {0x157B, 1, 0, 0})
	CMember(UFXSystemComponent*)                       Impact_FX                                                   OFFSET(get<T>, {0x1580, 8, 0, 0})
	SMember(FRotator)                                  Left_Swing_Rotation                                         OFFSET(getStruct<T>, {0x1588, 24, 0, 0})
	SMember(FRotator)                                  Right_Swing_Rotation                                        OFFSET(getStruct<T>, {0x15A0, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Setup Swing Montage Section Index
	// int32_t Setup Swing Montage Section Index();                                                                             // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                              // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents
	// void UnbindSwingAnimTrailEvents();                                                                                       // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents
	// void BindSwingAnimTrailEvents();                                                                                         // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio
	// void PlayCQCPickaxeEnemyAudio(FHitResult Hit Result);                                                                    // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active, bool Reset);                                                          // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21
	// void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(FName StatName, int32_t StatValue);                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2
	// void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight
	// void MeleeSwingRight(bool First Right);                                                                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft
	// void MeleeSwingLeft(bool First Left);                                                                                    // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End
	// void MeleeSwingRight_End();                                                                                              // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End
	// void MeleeSwingLeft_End();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight
	// void SwingRight();                                                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft
	// void SwingLeft();                                                                                                        // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd
	// void SwingRightEnd();                                                                                                    // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd
	// void SwingLeftEnd();                                                                                                     // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                                  // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleWeaponHolstered
	// void HandleWeaponHolstered();                                                                                            // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(AFortPlayerPawn* FortPlayerPawn, AActor* NewVehicle, AActor* OldVehicle);                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint);                                                      // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C
/// Size: 0x00E8 (0x000700 - 0x0007E8)
class ULoudPhoenix_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.ExecuteUbergraph_LoudPhoenix_Axe_AnimBP
	// void ExecuteUbergraph_LoudPhoenix_Axe_AnimBP(int32_t EntryPoint);                                                        // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
/// Size: 0x0130 (0x000700 - 0x000830)
class UNitroFlow_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x7E8, 72, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.ExecuteUbergraph_NitroFlow_Axe_AnimBP
	// void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32_t EntryPoint);                                                          // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
/// Size: 0x1370 (0x000700 - 0x001A70)
class UHighTower_Tapas_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x708, 2, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x718, 8, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x720, 32, 0, 0})
	SMember(FAnimNode_CopyPoseFromMesh)                AnimGraphNode_CopyPoseFromMesh                              OFFSET(getStruct<T>, {0x740, 336, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x890, 32, 0, 0})
	SMember(FAnimNode_Trail)                           AnimGraphNode_Trail                                         OFFSET(getStruct<T>, {0x8B0, 672, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xB50, 296, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xC78, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0xCC0, 2384, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1610, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x1630, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1650, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x16C8, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x16F0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1710, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x1738, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x1760, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace2                        OFFSET(getStruct<T>, {0x1888, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace2                        OFFSET(getStruct<T>, {0x18A8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x18C8, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x1910, 120, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   OFFSET(getStruct<T>, {0x1988, 192, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x1A48, 40, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP
	// void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32_t EntryPoint);                                                    // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UHarvest_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
/// Size: 0x10D8 (0x000700 - 0x0017D8)
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x718, 176, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x7C8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x7E8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics                                  OFFSET(getStruct<T>, {0x830, 1296, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0xD40, 2384, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x1690, 296, 0, 0})
	SMember(FRotator)                                  gear_rot                                                    OFFSET(getStruct<T>, {0x17B8, 24, 0, 0})
	CMember(USkeletalMeshComponent*)                   skel_mesh                                                   OFFSET(get<T>, {0x17D0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
	// void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32_t EntryPoint);                                             // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C
/// Size: 0x08B8 (0x000700 - 0x000FB8)
class UM_MED_Patches_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x718, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x7C8, 32, 0, 0})
	SMember(FGravityOverrideParamsStruct)              Gravity_Override_Params                                     OFFSET(getStruct<T>, {0x7E8, 1976, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0xFA0, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.ExecuteUbergraph_M_MED_Patches_Axe_AnimBP
	// void ExecuteUbergraph_M_MED_Patches_Axe_AnimBP(int32_t EntryPoint);                                                      // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
/// Size: 0x00A1 (0x001848 - 0x0018E9)
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6377;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1848, 8, 0, 0})
	DMember(bool)                                      Equipped                                                    OFFSET(get<bool>, {0x1850, 1, 0, 0})
	CMember(UNiagaraComponent*)                        Alteration_Ambient_PS                                       OFFSET(get<T>, {0x1858, 8, 0, 0})
	CMember(UParticleSystem*)                          MeleeHeavy_ParticleSystem                                   OFFSET(get<T>, {0x1860, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 MeleeHeavy_PSC                                              OFFSET(get<T>, {0x1868, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x1870, 1, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1878, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x1880, 8, 0, 0})
	CMember(UNiagaraComponent*)                        Offhand_Alteration_Ambient_PS                               OFFSET(get<T>, {0x1888, 8, 0, 0})
	DMember(bool)                                      bEquipPendingInstigator                                     OFFSET(get<bool>, {0x1890, 1, 0, 0})
	SMember(FName)                                     Offhand_Socket_Name                                         OFFSET(getStruct<T>, {0x1894, 4, 0, 0})
	CMember(UAnimMontage*)                             MontageReference                                            OFFSET(get<T>, {0x1898, 8, 0, 0})
	DMember(bool)                                      UseTimeofDayControl                                         OFFSET(get<bool>, {0x18A0, 1, 0, 0})
	CMember(UFXSystemComponent*)                       Impact_FX                                                   OFFSET(get<T>, {0x18A8, 8, 0, 0})
	DMember(bool)                                      Swing_Right_                                                OFFSET(get<bool>, {0x18B0, 1, 0, 0})
	SMember(FRotator)                                  Left_Swing_Rotation                                         OFFSET(getStruct<T>, {0x18B8, 24, 0, 0})
	SMember(FRotator)                                  Right_Swing_Rotation                                        OFFSET(getStruct<T>, {0x18D0, 24, 0, 0})
	DMember(bool)                                      Swing_Right_1                                               OFFSET(get<bool>, {0x18E8, 1, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                              // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events
	// void Unbind Dual Melee Swing Events();                                                                                   // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events
	// void Bind Dual Melee Swing Events();                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles
	// void Set Active Alteration Idle Particles(bool Active, bool Reset);                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8
	// void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(FName StatName, int32_t StatValue);                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D
	// void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(UObject* Loaded);                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End
	// void Swing Left End();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End
	// void Swing Right End();                                                                                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                                  // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common
	// void SwingRight_Common();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common
	// void SwingLeft_Common();                                                                                                 // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left
	// void Swing Left();                                                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right
	// void Swing Right();                                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2
	// void Swing Left 2();                                                                                                     // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2
	// void Swing Right 2();                                                                                                    // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(AFortPlayerPawn* FortPlayerPawn, AActor* NewVehicle, AActor* OldVehicle);                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint);                                            // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
/// Size: 0x0000 (0x001248 - 0x001248)
class ADecoTool_C : public AFortDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4680;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C
/// Size: 0x0BC8 (0x000700 - 0x0012C8)
class UEmberRae_Axe_L_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x7E8, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0x830, 2384, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x1180, 296, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x12A8, 8, 0, 0})
	SMember(FVector)                                   TranslateMSTR                                               OFFSET(getStruct<T>, {0x12B0, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post(int32_t EntryPoint);                                                    // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C
/// Size: 0x0E20 (0x000700 - 0x001520)
class UEmberRae_Axe_R_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x7E8, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0x830, 2384, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x1180, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x12A8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x13D0, 296, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x14F8, 8, 0, 0})
	SMember(FVector)                                   TranslateMSTR                                               OFFSET(getStruct<T>, {0x1500, 24, 0, 0})
	DMember(double)                                    StrapScaleAlpha                                             OFFSET(get<double>, {0x1518, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32_t EntryPoint);                                                    // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C
/// Size: 0x00E8 (0x000700 - 0x0007E8)
class UMetalScout_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.ExecuteUbergraph_MetalScout_Axe_AnimBP
	// void ExecuteUbergraph_MetalScout_Axe_AnimBP(int32_t EntryPoint);                                                         // [0x1d9241c] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C
/// Size: 0x00E8 (0x000700 - 0x0007E8)
class UGoldenGuard_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.ExecuteUbergraph_GoldenGuard_Axe_AnimBP
	// void ExecuteUbergraph_GoldenGuard_Axe_AnimBP(int32_t EntryPoint);                                                        // [0x1d9241c] Final                
};

/// Enum /Game/Weapons/Blueprints/En_ShellTypes_01.En_ShellTypes_01
/// Size: 0x06
enum En_ShellTypes_01 : uint8_t
{
	En_ShellTypes_01__NewEnumerator00                                                = 0,
	En_ShellTypes_01__NewEnumerator11                                                = 1,
	En_ShellTypes_01__NewEnumerator22                                                = 2,
	En_ShellTypes_01__NewEnumerator33                                                = 3,
	En_ShellTypes_01__NewEnumerator44                                                = 4,
	En_ShellTypes_01__En_ShellTypes_MAX5                                             = 5
};

