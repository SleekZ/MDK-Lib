
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Chooser
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ProxyTable.ChooserParameterProxyTable
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterProxyTable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ProxyTable.ProxyAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UProxyAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UClass*)                                   Type                                                        OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(EObjectChooserResultType)                  ResultType                                                  OFFSET(get<T>, {0x50, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ContextData                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FInstancedStruct)                          ProxyTable                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Class /Script/ProxyTable.ProxyTable
/// Size: 0x0020 (0x000028 - 0x000048)
class UProxyTable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FGuid>)                             Keys                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FRuntimeProxyValue>)                RuntimeValues                                               OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ProxyTable.ProxyTableFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ProxyTable.ChooserParameterProxyTableBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterProxyTableBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ProxyTable.ProxyTableContextProperty
/// Size: 0x0018 (0x000008 - 0x000020)
class FProxyTableContextProperty : public FChooserParameterProxyTableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FChooserPropertyBinding)                   Binding                                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/ProxyTable.LookupProxy
/// Size: 0x0018 (0x000008 - 0x000020)
class FLookupProxy : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UProxyAsset*)                              Proxy                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FInstancedStruct)                          ProxyTable                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ProxyTable.LookupProxyWithOverrideTable
/// Size: 0x0010 (0x000008 - 0x000018)
class FLookupProxyWithOverrideTable : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UProxyAsset*)                              Proxy                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UProxyTable*)                              OverrideProxyTable                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ProxyTable.ProxyStructOutput
/// Size: 0x0028 (0x000000 - 0x000028)
class FProxyStructOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FChooserStructPropertyBinding)             Binding                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FInstancedStruct)                          Value                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ProxyTable.ProxyEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FProxyEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UProxyAsset*)                              Proxy                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FInstancedStruct)                          ValueStruct                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FProxyStructOutput>)                OutputStructData                                            OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ProxyTable.RuntimeProxyValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FRuntimeProxyValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FInstancedStruct)                          Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FProxyStructOutput>)                OutputStructData                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

