
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_AscenderZipline : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AscenderCodeRuntime.FortAscenderZipline
/// Size: 0x0358 (0x000C90 - 0x000FE8)
class AFortAscenderZipline : public AFortAthenaSplineZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4072;

public:
	SMember(FMulticastInlineDelegate)                  OnAscenderSetupComplete                                     OFFSET(getStruct<T>, {0xC90, 16, 0, 0})
	SMember(FName)                                     SplineTopAttachPointName                                    OFFSET(getStruct<T>, {0xCA0, 4, 0, 0})
	DMember(bool)                                      bAutoFindSplineEndLocation                                  OFFSET(get<bool>, {0xCA4, 1, 0, 0})
	DMember(float)                                     SplineOffsetFromGround                                      OFFSET(get<float>, {0xCA8, 4, 0, 0})
	DMember(float)                                     CableOffsetFromSplineEnd                                    OFFSET(get<float>, {0xCAC, 4, 0, 0})
	DMember(float)                                     SplineLength                                                OFFSET(get<float>, {0xCB0, 4, 0, 0})
	CMember(UStaticMesh*)                              SplineStaticMesh                                            OFFSET(get<T>, {0xCB8, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             OFFSET(get<T>, {0xCC0, 1, 0, 0})
	DMember(bool)                                      bHandleReturning                                            OFFSET(get<bool>, {0xCC1, 1, 0, 0})
	DMember(float)                                     HandleReturnSpeed                                           OFFSET(get<float>, {0xCC4, 4, 0, 0})
	DMember(bool)                                      bCableDropping                                              OFFSET(get<bool>, {0xCC8, 1, 0, 0})
	DMember(float)                                     CableDropSpeed                                              OFFSET(get<float>, {0xCCC, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileUsingHandle                           OFFSET(get<float>, {0xCD0, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileSlidingDown                           OFFSET(get<float>, {0xCD4, 4, 0, 0})
	DMember(bool)                                      bUseComplexSplineCollision                                  OFFSET(get<bool>, {0xCD8, 1, 0, 0})
	DMember(float)                                     SimpleSplineCollisionRadius                                 OFFSET(get<float>, {0xCDC, 4, 0, 0})
	DMember(float)                                     SimpleSplineCollisionHeightExtension                        OFFSET(get<float>, {0xCE0, 4, 0, 0})
	SMember(FScalableFloat)                            DescendMinDistanceFromBottom                                OFFSET(getStruct<T>, {0xCE8, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndHorizontalLaunchSpeed                       OFFSET(getStruct<T>, {0xD10, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndVerticalLaunchSpeed                         OFFSET(getStruct<T>, {0xD38, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffHorizontalLaunchSpeed                        OFFSET(getStruct<T>, {0xD60, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffVerticalLaunchSpeed                          OFFSET(getStruct<T>, {0xD88, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndHorizontalLaunchSpeed                      OFFSET(getStruct<T>, {0xDB0, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndVerticalLaunchSpeed                        OFFSET(getStruct<T>, {0xDD8, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffHorizontalLaunchSpeed                       OFFSET(getStruct<T>, {0xE00, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffVerticalLaunchSpeed                         OFFSET(getStruct<T>, {0xE28, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerHorizontalLaunchSpeed                   OFFSET(getStruct<T>, {0xE50, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerVerticalLaunchSpeed                     OFFSET(getStruct<T>, {0xE78, 40, 0, 0})
	SMember(FVector)                                   HandleDestroyBuildingsOverlapExtents                        OFFSET(getStruct<T>, {0xEA0, 24, 0, 0})
	SMember(FVector)                                   PlayerDestroyBuildingsOverlapExtents                        OFFSET(getStruct<T>, {0xEB8, 24, 0, 0})
	SMember(FVector)                                   InitialSplineEndLocation                                    OFFSET(getStruct<T>, {0xED0, 24, 0, 0})
	SMember(FVector)                                   CurrentSplineEndLocation                                    OFFSET(getStruct<T>, {0xEE8, 24, 0, 0})
	SMember(FVector)                                   TargetSplineEndLocation                                     OFFSET(getStruct<T>, {0xF00, 24, 0, 0})
	SMember(FVector)                                   CurrentHandleLocation                                       OFFSET(getStruct<T>, {0xF18, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      CurrentInteractComponent                                    OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PawnUsingHandle                                             OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PreviousPawnUsingHandle                                     OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(USplineMeshComponent*)                     SplineMesh                                                  OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(UCapsuleComponent*)                        SimpleSplineMeshCollision                                   OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           FloorActor                                                  OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    RotationLockedPawns                                         OFFSET(get<T>, {0xF60, 16, 0, 0})
	CMember(UFortLinkToActorComponent*)                LinkToActorComponent                                        OFFSET(get<T>, {0xFD8, 8, 0, 0})
	CMember(UFortZiplineLinkComponent*)                ZiplineLinkComponent                                        OFFSET(get<T>, {0xFE0, 8, 0, 0})


	/// Functions
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.SetupAscender
	// void SetupAscender(bool bFromConstruction, bool bFromReplication);                                                       // [0x2d1c0c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
	// void OnRep_TargetSplineEndLocation();                                                                                    // [0x2c79844] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
	// void OnRep_PawnUsingHandle();                                                                                            // [0x99bfd98] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
	// void OnRep_InitialSplineEndLocation();                                                                                   // [0x2c4a028] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
	// void HandlePawnUsingHandleDied(AFortPawn* DeadPawn);                                                                     // [0x99bfd18] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
	// void HandleFloorActorHealthChanged();                                                                                    // [0x99bfd04] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
	// void HandleFloorActorDestroyed(AActor* Actor);                                                                           // [0x99bfc84] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
	// UPrimitiveComponent* GetTopComponent();                                                                                  // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
	// AFortPlayerPawn* GetPawnUsingHandle();                                                                                   // [0x3473dc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
	// UPrimitiveComponent* GetInteractComponentOverride(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent); // [0x99bfbb8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
	// UPrimitiveComponent* GetHandleComponent();                                                                               // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
	// void BP_HandleUpdatedLoweringHandle();                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
	// void BP_HandleUpdatedLoweringCable();                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
	// void BP_HandleStoppedLoweringHandle();                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
	// void BP_HandleStoppedLoweringCable();                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
	// void BP_HandleStartedLoweringHandle();                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
	// void BP_HandleStartedLoweringCable();                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
	// void BP_HandlePlayerStoppedUsingHandle(AFortPlayerPawn* Player);                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
	// void BP_HandlePlayerStartedUsingHandle(AFortPlayerPawn* Player);                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
	// void ApplyStructureDamage(ABuildingSMActor* BuildingActor, AActor* DamageSource);                                        // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

