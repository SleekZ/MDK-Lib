
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /BattlePassS26_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ABP_VendAISpawner_Base_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(UNiagaraComponent*)                        Niagara                                                     OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    SpawnDelay                                                  OFFSET(get<double>, {0x2A0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       EventRowHandle                                              OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /BattlePassS26_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /BattlePassS26_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
	// void ExecuteUbergraph_BP_VendAISpawner_Base(int32_t EntryPoint);                                                         // [0x1d9241c] Final|HasDefaults    
};

/// Class /BattlePassS26_Quests/Services/BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ABP_VendAISpawner_Nug_C : public ABP_VendAISpawner_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /BattlePassS26_Quests/Services/BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
/// Size: 0x0000 (0x000C80 - 0x000C80)
class ABGA_Rift_Portal_VM_C : public ABGA_RiftPortal_Item_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3200;

public:
};

