
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (0x000000 - 0x000028)
class UObject : public MDKBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(void**)                                    vtable                                                      OFFSET(get<void**>, {0x0, 8, 0, 0})
	CMember(EObjectFlags)                              ObjectFlags                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int)                                       InternalIndex                                               OFFSET(get<int>, {0xC, 4, 0, 0})
	CMember(UClass*)                                   ClassPrivate                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     NamePrivate                                                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(UObject*)                                  OuterPrivate                                                OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0010 (0x000028 - 0x000038)
class UGCObjectReferencer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (0x000028 - 0x000050)
class UTextBuffer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (0x000028 - 0x000030)
class UField : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UField*)                                   Next                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UStruct : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UStruct*)                                  SuperStruct                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UField*)                                   Children                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UScriptStruct : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0050 (0x000028 - 0x000078)
class UPackage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0150 (0x0000B0 - 0x000200)
class UClass : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFunction : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDelegateFunction : public UFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class USparseDelegateFunction : public UDelegateFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x0080 (0x000200 - 0x000280)
class UDynamicClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPackageMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0038 (0x000030 - 0x000068)
class UEnum : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/CoreUObject.ObjectReachabilityStressData
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectReachabilityStressData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01C0 (0x000200 - 0x0003C0)
class ULinkerPlaceholderClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class ULinkerPlaceholderExportObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01C0 (0x0000E0 - 0x0002A0)
class ULinkerPlaceholderFunction : public UFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMetaData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UObjectRedirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (0x000030 - 0x000070)
class UProperty : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (0x000070 - 0x000080)
class UEnumProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UArrayProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UObjectPropertyBase : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UBoolProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNumericProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UByteProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class UClassProperty : public UObjectProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UDelegateProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UDoubleProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UIntProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt8Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt16Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt64Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterfaceProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class ULazyObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0028 (0x000070 - 0x000098)
class UMapProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UMulticastDelegateProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNameProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0020 (0x000070 - 0x000090)
class USetProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class USoftObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class USoftClassProperty : public USoftObjectProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UStrProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UStructProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt16Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt32Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt64Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UWeakObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UTextProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x0150 (0x000000 - 0x000150)
class FARFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TArray<FName>)                             PackageNames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FName>)                             PackagePaths                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   SoftObjectPaths                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             ClassNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTopLevelAssetPath>)                ClassPaths                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TSet<FName>)                               RecursiveClassesExclusionSet                                OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TSet<FTopLevelAssetPath>)                  RecursiveClassPathsExclusionSet                             OFFSET(get<T>, {0xF0, 80, 0, 0})
	DMember(bool)                                      bRecursivePaths                                             OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(bool)                                      bRecursiveClasses                                           OFFSET(get<bool>, {0x141, 1, 0, 0})
	DMember(bool)                                      bIncludeOnlyOnDiskAssets                                    OFFSET(get<bool>, {0x142, 1, 0, 0})
};

/// Struct /Script/CoreUObject.TopLevelAssetPath
/// Size: 0x0008 (0x000000 - 0x000008)
class FTopLevelAssetPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     PackageName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     AssetName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (0x000000 - 0x000018)
class FSoftObjectPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTopLevelAssetPath)                        AssetPath                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   SubPathString                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAssetBundleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAssetBundleEntry>)                 Bundles                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FAssetBundleEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     BundleName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FTopLevelAssetPath>)                AssetPaths                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0038 (0x000000 - 0x000038)
class FAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     PackageName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PackagePath                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     AssetName                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     AssetClass                                                  OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FTopLevelAssetPath)                        AssetClassPath                                              OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FAutomationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EAutomationEventType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Context                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     Artifact                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (0x000000 - 0x000010)
class FGuid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   C                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   D                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FAutomationExecutionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FAutomationEvent)                          Event                                                       OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   LineNumber                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (0x000000 - 0x000008)
class FDateTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x0038 (0x000000 - 0x000038)
class FBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   min                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   max                                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      IsValid                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x0018 (0x000000 - 0x000018)
class FVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0028 (0x000000 - 0x000028)
class FBox2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector2D)                                 min                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 max                                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0010 (0x000000 - 0x000010)
class FVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Box2f
/// Size: 0x0014 (0x000000 - 0x000014)
class FBox2f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2f)                                 min                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2f)                                 max                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Vector2f
/// Size: 0x0008 (0x000000 - 0x000008)
class FVector2f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Box3d
/// Size: 0x0038 (0x000000 - 0x000038)
class FBox3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3d)                                 min                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector3d)                                 max                                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      IsValid                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Vector3d
/// Size: 0x0018 (0x000000 - 0x000018)
class FVector3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Box3f
/// Size: 0x001C (0x000000 - 0x00001C)
class FBox3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector3f)                                 min                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 max                                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(bool)                                      IsValid                                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Vector3f
/// Size: 0x000C (0x000000 - 0x00000C)
class FVector3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x0038 (0x000000 - 0x000038)
class FBoxSphereBounds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   BoxExtent                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(double)                                    SphereRadius                                                OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/CoreUObject.BoxSphereBounds3d
/// Size: 0x0038 (0x000000 - 0x000038)
class FBoxSphereBounds3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3d)                                 Origin                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector3d)                                 BoxExtent                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(double)                                    SphereRadius                                                OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/CoreUObject.BoxSphereBounds3f
/// Size: 0x001C (0x000000 - 0x00001C)
class FBoxSphereBounds3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector3f)                                 Origin                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 BoxExtent                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     SphereRadius                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (0x000000 - 0x000004)
class FColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      B                                                           OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      G                                                           OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      R                                                           OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      A                                                           OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/CoreUObject.DirectoryPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FDirectoryPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CoreUObject.DoubleRange
/// Size: 0x0020 (0x000000 - 0x000020)
class FDoubleRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDoubleRangeBound)                         LowerBound                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDoubleRangeBound)                         UpperBound                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CoreUObject.DoubleRangeBound
/// Size: 0x0010 (0x000000 - 0x000010)
class FDoubleRangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FFallbackStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/CoreUObject.FilePath
/// Size: 0x0010 (0x000000 - 0x000010)
class FFilePath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (0x000000 - 0x000008)
class FFloatInterval : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     min                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FFloatRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFloatRangeBound)                          LowerBound                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFloatRangeBound)                          UpperBound                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
class FFloatRangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (0x000000 - 0x000004)
class FFrameNumber : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FFrameNumberRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFrameNumberRangeBound)                    LowerBound                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumberRangeBound)                    UpperBound                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
class FFrameNumberRangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FFrameNumber)                              Value                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (0x000000 - 0x000008)
class FFrameRate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Numerator                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Denominator                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (0x000000 - 0x000008)
class FFrameTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFrameNumber)                              FrameNumber                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     SubFrame                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InputDeviceId
/// Size: 0x0004 (0x000000 - 0x000004)
class FInputDeviceId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   InternalId                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32Interval : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   min                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   max                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Point
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32Point : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (0x000000 - 0x000010)
class FInt32Range : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInt32RangeBound)                          LowerBound                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FInt32RangeBound)                          UpperBound                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32RangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
class FInt32Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Z                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32Vector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
class FInt32Vector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Z                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   W                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int64Point
/// Size: 0x0010 (0x000000 - 0x000010)
class FInt64Point : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   X                                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Y                                                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Int64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
class FInt64Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   X                                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Y                                                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   Z                                                           OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Int64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
class FInt64Vector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   X                                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Y                                                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Int64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
class FInt64Vector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   X                                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Y                                                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   Z                                                           OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   W                                                           OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointFloat>)            Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (0x000000 - 0x000014)
class FInterpCurvePointFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OutVal                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointLinearColor>)      Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterpCurvePointLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              OutVal                                                      OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FLinearColor)                              ArriveTangent                                               OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FLinearColor)                              LeaveTangent                                                OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (0x000000 - 0x000010)
class FLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     R                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     G                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     A                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterpCurvePointQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FQuat)                                     OutVal                                                      OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     ArriveTangent                                               OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     LeaveTangent                                                OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0020 (0x000000 - 0x000020)
class FQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FInterpCurvePointTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTwoVectors)                               OutVal                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FTwoVectors)                               ArriveTangent                                               OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	SMember(FTwoVectors)                               LeaveTangent                                                OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x98, 1, 0, 0})
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0030 (0x000000 - 0x000030)
class FTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   v1                                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   v2                                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x0058 (0x000000 - 0x000058)
class FInterpCurvePointVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   OutVal                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   ArriveTangent                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   LeaveTangent                                                OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0040 (0x000000 - 0x000040)
class FInterpCurvePointVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 OutVal                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 ArriveTangent                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 LeaveTangent                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointQuat>)             Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointTwoVectors>)       Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointVector>)           Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointVector2D>)         Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (0x000000 - 0x00000C)
class FIntVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Z                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntVector2
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntVector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntVector4
/// Size: 0x0010 (0x000000 - 0x000010)
class FIntVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Z                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   W                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0080 (0x000000 - 0x000080)
class FMatrix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPlane)                                    XPlane                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FPlane)                                    YPlane                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FPlane)                                    ZPlane                                                      OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FPlane)                                    WPlane                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0008 (0x000018 - 0x000020)
class FPlane : public FVector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Matrix44d
/// Size: 0x0080 (0x000000 - 0x000080)
class FMatrix44d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPlane4d)                                  XPlane                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FPlane4d)                                  YPlane                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FPlane4d)                                  ZPlane                                                      OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FPlane4d)                                  WPlane                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/CoreUObject.Plane4d
/// Size: 0x0008 (0x000018 - 0x000020)
class FPlane4d : public FVector3d
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Matrix44f
/// Size: 0x0040 (0x000000 - 0x000040)
class FMatrix44f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FPlane4f)                                  XPlane                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPlane4f)                                  YPlane                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPlane4f)                                  ZPlane                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FPlane4f)                                  WPlane                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CoreUObject.Plane4f
/// Size: 0x0004 (0x00000C - 0x000010)
class FPlane4f : public FVector3f
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x0078 (0x000000 - 0x000078)
class FOrientedBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   AxisX                                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AxisY                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   AxisZ                                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(double)                                    ExtentX                                                     OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    ExtentY                                                     OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    ExtentZ                                                     OFFSET(get<double>, {0x70, 8, 0, 0})
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (0x000000 - 0x000004)
class FPackedNormal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      X                                                           OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      Y                                                           OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      Z                                                           OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      W                                                           OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (0x000000 - 0x000004)
class FPackedRGB10A2N : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Packed                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (0x000000 - 0x000008)
class FPackedRGBA16N : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   XY                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ZW                                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PlatformInputDeviceState
/// Size: 0x0008 (0x000000 - 0x000008)
class FPlatformInputDeviceState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FPlatformUserId)                           OwningPlatformUser                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EInputDeviceConnectionState)               ConnectionState                                             OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/CoreUObject.PlatformUserId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlatformUserId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   InternalId                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FPolyglotTextData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(ELocalizedTextSourceCategory)              category                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   NativeCulture                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Namespace                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   NativeString                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, FString>)                    LocalizedStrings                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(bool)                                      bIsMinimalPatch                                             OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FText)                                     CachedText                                                  OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0008 (0x000000 - 0x000008)
class FPrimaryAssetId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FPrimaryAssetType)                         PrimaryAssetType                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PrimaryAssetName                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0004 (0x000000 - 0x000004)
class FPrimaryAssetType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (0x000000 - 0x000010)
class FQualifiedFrameTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFrameTime)                                Time                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFrameRate)                                Rate                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Quat4d
/// Size: 0x0020 (0x000000 - 0x000020)
class FQuat4d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Quat4f
/// Size: 0x0010 (0x000000 - 0x000010)
class FQuat4f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (0x000000 - 0x000008)
class FRandomStream : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   InitialSeed                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Ray
/// Size: 0x0030 (0x000000 - 0x000030)
class FRay : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/CoreUObject.Ray3d
/// Size: 0x0030 (0x000000 - 0x000030)
class FRay3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector3d)                                 Origin                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector3d)                                 Direction                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/CoreUObject.Ray3f
/// Size: 0x0018 (0x000000 - 0x000018)
class FRay3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector3f)                                 Origin                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Direction                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x0018 (0x000000 - 0x000018)
class FRotator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Pitch                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Yaw                                                         OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Roll                                                        OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Rotator3d
/// Size: 0x0018 (0x000000 - 0x000018)
class FRotator3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Pitch                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Yaw                                                         OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Roll                                                        OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Rotator3f
/// Size: 0x000C (0x000000 - 0x00000C)
class FRotator3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0x000018 - 0x000018)
class FSoftClassPath : public FSoftObjectPath
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/CoreUObject.Sphere
/// Size: 0x0020 (0x000000 - 0x000020)
class FSphere : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Sphere3d
/// Size: 0x0020 (0x000000 - 0x000020)
class FSphere3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector3d)                                 Center                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Sphere3f
/// Size: 0x0010 (0x000000 - 0x000010)
class FSphere3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector3f)                                 Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.TemplateString
/// Size: 0x0010 (0x000000 - 0x000010)
class FTemplateString : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Template                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CoreUObject.TestUndeclaredScriptStructObjectReferencesTest
/// Size: 0x0048 (0x000000 - 0x000048)
class FTestUndeclaredScriptStructObjectReferencesTest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UObject*)                                  StrongObjectPointer                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SoftObjectPointer                                           OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FSoftObjectPath)                           SoftObjectPath                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  WeakObjectPointer                                           OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/CoreUObject.TestUninitializedScriptStructMembersTest
/// Size: 0x0018 (0x000000 - 0x000018)
class FTestUninitializedScriptStructMembersTest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  UninitializedObjectReference                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  InitializedObjectReference                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     UnusedValue                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (0x000000 - 0x000014)
class FTimecode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   Hours                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seconds                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Frames                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bDropFrameFormat                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimespan : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0060 (0x000000 - 0x000060)
class FTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Scale3D                                                     OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/CoreUObject.Transform3d
/// Size: 0x0060 (0x000000 - 0x000060)
class FTransform3d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat4d)                                   Rotation                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector3d)                                 Translation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector3d)                                 Scale3D                                                     OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/CoreUObject.Transform3f
/// Size: 0x0030 (0x000000 - 0x000030)
class FTransform3f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat4f)                                   Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector3f)                                 Translation                                                 OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector3f)                                 Scale3D                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/CoreUObject.Uint32Point
/// Size: 0x0008 (0x000000 - 0x000008)
class FUint32Point : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Uint32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
class FUint32Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  Z                                                           OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Uint32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
class FUint32Vector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Uint32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
class FUint32Vector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  Z                                                           OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  W                                                           OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Uint64Point
/// Size: 0x0010 (0x000000 - 0x000010)
class FUint64Point : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   X                                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Y                                                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Uint64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
class FUint64Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint64_t)                                  X                                                           OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  Y                                                           OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
	DMember(uint64_t)                                  Z                                                           OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Uint64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
class FUint64Vector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  X                                                           OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  Y                                                           OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Uint64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
class FUint64Vector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint64_t)                                  X                                                           OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  Y                                                           OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
	DMember(uint64_t)                                  Z                                                           OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  W                                                           OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.UintPoint
/// Size: 0x0008 (0x000000 - 0x000008)
class FUintPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.UintVector
/// Size: 0x000C (0x000000 - 0x00000C)
class FUintVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  Z                                                           OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.UintVector2
/// Size: 0x0008 (0x000000 - 0x000008)
class FUintVector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.UintVector4
/// Size: 0x0010 (0x000000 - 0x000010)
class FUintVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint32_t)                                  X                                                           OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Y                                                           OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  Z                                                           OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  W                                                           OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
class FVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Vector4d
/// Size: 0x0020 (0x000000 - 0x000020)
class FVector4d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    X                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Y                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Z                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    W                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Vector4f
/// Size: 0x0010 (0x000000 - 0x000010)
class FVector4f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x04
enum EAutomationEventType : uint8_t
{
	EAutomationEventType__Info0                                                      = 0,
	EAutomationEventType__Warning1                                                   = 1,
	EAutomationEventType__Error2                                                     = 2,
	EAutomationEventType__EAutomationEventType_MAX3                                  = 3
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x04
enum ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive0                                                     = 0,
	ERangeBoundTypes__Inclusive1                                                     = 1,
	ERangeBoundTypes__Open2                                                          = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX3                                          = 3
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x07
enum EInterpCurveMode : uint8_t
{
	CIM_Linear0                                                                      = 0,
	CIM_CurveAuto1                                                                   = 1,
	CIM_Constant2                                                                    = 2,
	CIM_CurveUser3                                                                   = 3,
	CIM_CurveBreak4                                                                  = 4,
	CIM_CurveAutoClamped5                                                            = 5,
	CIM_MAX6                                                                         = 6
};

/// Enum /Script/CoreUObject.EInputDeviceConnectionState
/// Size: 0x05
enum EInputDeviceConnectionState : uint8_t
{
	EInputDeviceConnectionState__Invalid0                                            = 0,
	EInputDeviceConnectionState__Unknown1                                            = 1,
	EInputDeviceConnectionState__Disconnected2                                       = 2,
	EInputDeviceConnectionState__Connected3                                          = 3,
	EInputDeviceConnectionState__EInputDeviceConnectionState_MAX4                    = 4
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x04
enum ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game0                                              = 0,
	ELocalizedTextSourceCategory__Engine1                                            = 1,
	ELocalizedTextSourceCategory__Editor2                                            = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX3                  = 3
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x18
enum ELifetimeCondition : uint8_t
{
	COND_None0                                                                       = 0,
	COND_InitialOnly1                                                                = 1,
	COND_OwnerOnly2                                                                  = 2,
	COND_SkipOwner3                                                                  = 3,
	COND_SimulatedOnly4                                                              = 4,
	COND_AutonomousOnly5                                                             = 5,
	COND_SimulatedOrPhysics6                                                         = 6,
	COND_InitialOrOwner7                                                             = 7,
	COND_Custom8                                                                     = 8,
	COND_ReplayOrOwner9                                                              = 9,
	COND_ReplayOnly10                                                                = 10,
	COND_SimulatedOnlyNoReplay11                                                     = 11,
	COND_SimulatedOrPhysicsNoReplay12                                                = 12,
	COND_SkipReplay13                                                                = 13,
	COND_Dynamic14                                                                   = 14,
	COND_Never15                                                                     = 15,
	COND_NetGroup16                                                                  = 16,
	COND_Max17                                                                       = 17
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x03
enum ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive0                                                      = 0,
	ESearchCase__IgnoreCase1                                                         = 1,
	ESearchCase__ESearchCase_MAX2                                                    = 2
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x03
enum ESearchDir : uint8_t
{
	ESearchDir__FromStart0                                                           = 0,
	ESearchDir__FromEnd1                                                             = 1,
	ESearchDir__ESearchDir_MAX2                                                      = 2
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x05
enum ELogTimes : uint8_t
{
	ELogTimes__None0                                                                 = 0,
	ELogTimes__UTC1                                                                  = 1,
	ELogTimes__SinceGStartTime2                                                      = 2,
	ELogTimes__Local3                                                                = 3,
	ELogTimes__ELogTimes_MAX4                                                        = 4
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x05
enum EAxis : uint8_t
{
	EAxis__None0                                                                     = 0,
	EAxis__X1                                                                        = 1,
	EAxis__Y2                                                                        = 2,
	EAxis__Z3                                                                        = 3,
	EAxis__EAxis_MAX4                                                                = 4
};

/// Enum /Script/CoreUObject.EAxisList
/// Size: 0x13
enum EAxisList : uint8_t
{
	EAxisList__None0                                                                 = 0,
	EAxisList__X1                                                                    = 1,
	EAxisList__Y2                                                                    = 2,
	EAxisList__Z3                                                                    = 4,
	EAxisList__Screen4                                                               = 8,
	EAxisList__XY5                                                                   = 3,
	EAxisList__XZ6                                                                   = 5,
	EAxisList__YZ7                                                                   = 6,
	EAxisList__XYZ8                                                                  = 7,
	EAxisList__All9                                                                  = 15,
	EAxisList__ZRotation10                                                           = 6,
	EAxisList__Rotate2D11                                                            = 8,
	EAxisList__EAxisList_MAX12                                                       = 16
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x93
enum EPixelFormat : uint8_t
{
	PF_Unknown0                                                                      = 0,
	PF_A32B32G32R32F1                                                                = 1,
	PF_B8G8R8A82                                                                     = 2,
	PF_G83                                                                           = 3,
	PF_G164                                                                          = 4,
	PF_DXT15                                                                         = 5,
	PF_DXT36                                                                         = 6,
	PF_DXT57                                                                         = 7,
	PF_UYVY8                                                                         = 8,
	PF_FloatRGB9                                                                     = 9,
	PF_FloatRGBA10                                                                   = 10,
	PF_DepthStencil11                                                                = 11,
	PF_ShadowDepth12                                                                 = 12,
	PF_R32_FLOAT13                                                                   = 13,
	PF_G16R1614                                                                      = 14,
	PF_G16R16F15                                                                     = 15,
	PF_G16R16F_FILTER16                                                              = 16,
	PF_G32R32F17                                                                     = 17,
	PF_A2B10G10R1018                                                                 = 18,
	PF_A16B16G16R1619                                                                = 19,
	PF_D2420                                                                         = 20,
	PF_R16F21                                                                        = 21,
	PF_R16F_FILTER22                                                                 = 22,
	PF_BC523                                                                         = 23,
	PF_V8U824                                                                        = 24,
	PF_A125                                                                          = 25,
	PF_FloatR11G11B1026                                                              = 26,
	PF_A827                                                                          = 27,
	PF_R32_UINT28                                                                    = 28,
	PF_R32_SINT29                                                                    = 29,
	PF_PVRTC230                                                                      = 30,
	PF_PVRTC431                                                                      = 31,
	PF_R16_UINT32                                                                    = 32,
	PF_R16_SINT33                                                                    = 33,
	PF_R16G16B16A16_UINT34                                                           = 34,
	PF_R16G16B16A16_SINT35                                                           = 35,
	PF_R5G6B5_UNORM36                                                                = 36,
	PF_R8G8B8A837                                                                    = 37,
	PF_A8R8G8B838                                                                    = 38,
	PF_BC439                                                                         = 39,
	PF_R8G840                                                                        = 40,
	PF_ATC_RGB41                                                                     = 41,
	PF_ATC_RGBA_E42                                                                  = 42,
	PF_ATC_RGBA_I43                                                                  = 43,
	PF_X24_G844                                                                      = 44,
	PF_ETC145                                                                        = 45,
	PF_ETC2_RGB46                                                                    = 46,
	PF_ETC2_RGBA47                                                                   = 47,
	PF_R32G32B32A32_UINT48                                                           = 48,
	PF_R16G16_UINT49                                                                 = 49,
	PF_ASTC_4x450                                                                    = 50,
	PF_ASTC_6x651                                                                    = 51,
	PF_ASTC_8x852                                                                    = 52,
	PF_ASTC_10x1053                                                                  = 53,
	PF_ASTC_12x1254                                                                  = 54,
	PF_BC6H55                                                                        = 55,
	PF_BC756                                                                         = 56,
	PF_R8_UINT57                                                                     = 57,
	PF_L858                                                                          = 58,
	PF_XGXR859                                                                       = 59,
	PF_R8G8B8A8_UINT60                                                               = 60,
	PF_R8G8B8A8_SNORM61                                                              = 61,
	PF_R16G16B16A16_UNORM62                                                          = 62,
	PF_R16G16B16A16_SNORM63                                                          = 63,
	PF_PLATFORM_HDR64                                                                = 64,
	PF_PLATFORM_HDR65                                                                = 65,
	PF_PLATFORM_HDR66                                                                = 66,
	PF_NV1267                                                                        = 67,
	PF_R32G32_UINT68                                                                 = 68,
	PF_ETC2_R11_EAC69                                                                = 69,
	PF_ETC2_RG11_EAC70                                                               = 70,
	PF_R871                                                                          = 71,
	PF_B5G5R5A1_UNORM72                                                              = 72,
	PF_ASTC_4x4_HDR73                                                                = 73,
	PF_ASTC_6x6_HDR74                                                                = 74,
	PF_ASTC_8x8_HDR75                                                                = 75,
	PF_ASTC_10x10_HDR76                                                              = 76,
	PF_ASTC_12x12_HDR77                                                              = 77,
	PF_G16R16_SNORM78                                                                = 78,
	PF_R8G8_UINT79                                                                   = 79,
	PF_R32G32B32_UINT80                                                              = 80,
	PF_R32G32B32_SINT81                                                              = 81,
	PF_R32G32B32F82                                                                  = 82,
	PF_R8_SINT83                                                                     = 83,
	PF_R64_UINT84                                                                    = 84,
	PF_R9G9B9EXP585                                                                  = 85,
	PF_P01086                                                                        = 86,
	PF_ASTC_4x4_NORM_RG87                                                            = 87,
	PF_ASTC_6x6_NORM_RG88                                                            = 88,
	PF_ASTC_8x8_NORM_RG89                                                            = 89,
	PF_ASTC_10x10_NORM_RG90                                                          = 90,
	PF_ASTC_12x12_NORM_RG91                                                          = 91,
	PF_MAX92                                                                         = 92
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x15
enum EMouseCursor : uint8_t
{
	EMouseCursor__None0                                                              = 0,
	EMouseCursor__Default1                                                           = 1,
	EMouseCursor__TextEditBeam2                                                      = 2,
	EMouseCursor__ResizeLeftRight3                                                   = 3,
	EMouseCursor__ResizeUpDown4                                                      = 4,
	EMouseCursor__ResizeSouthEast5                                                   = 5,
	EMouseCursor__ResizeSouthWest6                                                   = 6,
	EMouseCursor__CardinalCross7                                                     = 7,
	EMouseCursor__Crosshairs8                                                        = 8,
	EMouseCursor__Hand9                                                              = 9,
	EMouseCursor__GrabHand10                                                         = 10,
	EMouseCursor__GrabHandClosed11                                                   = 11,
	EMouseCursor__SlashedCircle12                                                    = 12,
	EMouseCursor__EyeDropper13                                                       = 13,
	EMouseCursor__EMouseCursor_MAX14                                                 = 14
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x55
enum EUnit : uint8_t
{
	EUnit__Micrometers0                                                              = 0,
	EUnit__Millimeters1                                                              = 1,
	EUnit__Centimeters2                                                              = 2,
	EUnit__Meters3                                                                   = 3,
	EUnit__Kilometers4                                                               = 4,
	EUnit__Inches5                                                                   = 5,
	EUnit__Feet6                                                                     = 6,
	EUnit__Yards7                                                                    = 7,
	EUnit__Miles8                                                                    = 8,
	EUnit__Lightyears9                                                               = 9,
	EUnit__Degrees10                                                                 = 10,
	EUnit__Radians11                                                                 = 11,
	EUnit__CentimetersPerSecond12                                                    = 12,
	EUnit__MetersPerSecond13                                                         = 13,
	EUnit__KilometersPerHour14                                                       = 14,
	EUnit__MilesPerHour15                                                            = 15,
	EUnit__Celsius16                                                                 = 16,
	EUnit__Farenheit17                                                               = 17,
	EUnit__Kelvin18                                                                  = 18,
	EUnit__Micrograms19                                                              = 19,
	EUnit__Milligrams20                                                              = 20,
	EUnit__Grams21                                                                   = 21,
	EUnit__Kilograms22                                                               = 22,
	EUnit__MetricTons23                                                              = 23,
	EUnit__Ounces24                                                                  = 24,
	EUnit__Pounds25                                                                  = 25,
	EUnit__Stones26                                                                  = 26,
	EUnit__Newtons27                                                                 = 27,
	EUnit__PoundsForce28                                                             = 28,
	EUnit__KilogramsForce29                                                          = 29,
	EUnit__KilogramCentimetersPerSecondSquared30                                     = 30,
	EUnit__NewtonMeters31                                                            = 31,
	EUnit__KilogramCentimetersSquaredPerSecondSquared32                              = 32,
	EUnit__Hertz33                                                                   = 33,
	EUnit__Kilohertz34                                                               = 34,
	EUnit__Megahertz35                                                               = 35,
	EUnit__Gigahertz36                                                               = 36,
	EUnit__RevolutionsPerMinute37                                                    = 37,
	EUnit__Bytes38                                                                   = 38,
	EUnit__Kilobytes39                                                               = 39,
	EUnit__Megabytes40                                                               = 40,
	EUnit__Gigabytes41                                                               = 41,
	EUnit__Terabytes42                                                               = 42,
	EUnit__Lumens43                                                                  = 43,
	EUnit__Milliseconds44                                                            = 50,
	EUnit__Seconds45                                                                 = 51,
	EUnit__Minutes46                                                                 = 52,
	EUnit__Hours47                                                                   = 53,
	EUnit__Days48                                                                    = 54,
	EUnit__Months49                                                                  = 55,
	EUnit__Years50                                                                   = 56,
	EUnit__Multiplier51                                                              = 59,
	EUnit__Percentage52                                                              = 58,
	EUnit__Unspecified53                                                             = 64,
	EUnit__EUnit_MAX54                                                               = 65
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x04
enum EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default0                                        = 0,
	EPropertyAccessChangeNotifyMode__Never1                                          = 1,
	EPropertyAccessChangeNotifyMode__Always2                                         = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX3            = 3
};

/// Enum /Script/CoreUObject.EAppMsgCategory
/// Size: 0x05
enum EAppMsgCategory : uint8_t
{
	EAppMsgCategory__Warning0                                                        = 0,
	EAppMsgCategory__Error1                                                          = 1,
	EAppMsgCategory__Success2                                                        = 2,
	EAppMsgCategory__Info3                                                           = 3,
	EAppMsgCategory__EAppMsgCategory_MAX4                                            = 4
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x09
enum EAppReturnType : uint8_t
{
	EAppReturnType__No0                                                              = 0,
	EAppReturnType__Yes1                                                             = 1,
	EAppReturnType__YesAll2                                                          = 2,
	EAppReturnType__NoAll3                                                           = 3,
	EAppReturnType__Cancel4                                                          = 4,
	EAppReturnType__Ok5                                                              = 5,
	EAppReturnType__Retry6                                                           = 6,
	EAppReturnType__Continue7                                                        = 7,
	EAppReturnType__EAppReturnType_MAX8                                              = 8
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x09
enum EAppMsgType : uint8_t
{
	EAppMsgType__Ok0                                                                 = 0,
	EAppMsgType__YesNo1                                                              = 1,
	EAppMsgType__OkCancel2                                                           = 2,
	EAppMsgType__YesNoCancel3                                                        = 3,
	EAppMsgType__CancelRetryContinue4                                                = 4,
	EAppMsgType__YesNoYesAllNoAll5                                                   = 5,
	EAppMsgType__YesNoYesAllNoAllCancel6                                             = 6,
	EAppMsgType__YesNoYesAll7                                                        = 7,
	EAppMsgType__EAppMsgType_MAX8                                                    = 8
};

/// Enum /Script/CoreUObject.EInputDeviceTriggerMask
/// Size: 0x05
enum EInputDeviceTriggerMask : uint8_t
{
	EInputDeviceTriggerMask__None0                                                   = 0,
	EInputDeviceTriggerMask__Left1                                                   = 1,
	EInputDeviceTriggerMask__Right2                                                  = 2,
	EInputDeviceTriggerMask__All3                                                    = 3,
	EInputDeviceTriggerMask__EInputDeviceTriggerMask_MAX4                            = 4
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x04
enum EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid0                                                  = 0,
	EDataValidationResult__Valid1                                                    = 1,
	EDataValidationResult__NotValidated2                                             = 2,
	EDataValidationResult__EDataValidationResult_MAX3                                = 3
};

