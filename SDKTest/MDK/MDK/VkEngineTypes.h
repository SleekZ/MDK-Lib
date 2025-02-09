
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/VkEngineTypes.VkLaunchData_JoinMatchmakingSession
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkLaunchData_JoinMatchmakingSession : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptorIOContext
/// Size: 0x0040 (0x000000 - 0x000040)
class FValkyrieProjectDescriptorIOContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/VkEngineTypes.ValkyriePluginReferenceDescriptor
/// Size: 0x0018 (0x000000 - 0x000018)
class FValkyriePluginReferenceDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsRoot                                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsPublic                                                   OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectReferenceDescriptor
/// Size: 0x0038 (0x000000 - 0x000038)
class FValkyrieProjectReferenceDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(char)                                      FileVersion                                                 OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FOnlineLinkId)                             LinkCode                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectBindingsDescriptor
/// Size: 0x0060 (0x000000 - 0x000060)
class FValkyrieProjectBindingsDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Modules                                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptor
/// Size: 0x0230 (0x000000 - 0x000230)
class FValkyrieProjectDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(char)                                      FileVersion                                                 OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FString)                                   VersionSuffix                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   KeyArt                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DocsUrl                                                     OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EValkyrieProjectKind)                      Kind                                                        OFFSET(get<T>, {0x58, 4, 0, 0})
	CMember(EValkyrieProjectTemplateCategory)          TemplateCategory                                            OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FString)                                   CompatibilityVersion                                        OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           EditorPermissions                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   EpicApp                                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     SortPriority                                                OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(TArray<FValkyriePluginReferenceDescriptor>) Plugins                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FString, FJsonObjectWrapper>)         DataSets                                                    OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FValkyrieProjectReferenceDescriptor>) Dependencies                                              OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FValkyrieProjectBindingsDescriptor)        Bindings                                                    OFFSET(getStruct<T>, {0x1D0, 96, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkNamedId
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkNamedId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTypedId
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkTypedId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EVkIdType)                                 Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersionedLinkCode
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkVersionedLinkCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Mnemonic                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkContentFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Platform                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkArtifactOption
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkArtifactOption : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ArtifactId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EConsumerRole)                             Role                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FVkContentFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFoundMatchingArtifact
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkFoundMatchingArtifact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ArtifactId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVkContentFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersion
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkModuleVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ModuleId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionRef
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkModuleVersionRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ModuleId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionWithArtifacts
/// Size: 0x0010 (0x000018 - 0x000028)
class FVkModuleVersionWithArtifacts : public FVkModuleVersion
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FVkArtifactOption>)                 Artifacts                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleDoc
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FVkModuleDoc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ModuleId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Updated                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   ModuleName                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   ContentType                                                 OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   OFFSET(get<T>, {0x68, 80, 0, 0})
	SMember(FString)                                   AliasForModuleId                                            OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	DMember(int32_t)                                   LatestVersion                                               OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentPackage
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkContentPackage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    ProjectFlags                                                OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(TArray<FVkModuleVersionWithArtifacts>)     Content                                                     OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleBinaries
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkModuleBinaries : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   BaseUrl                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   manifest                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Files                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(double)                                    TotalSizeKb                                                 OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    ManifestSizeKb                                              OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(double)                                    ManifestDiskSizeKb                                          OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(double)                                    ManifestDownloadSizeKb                                      OFFSET(get<double>, {0x48, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedModule
/// Size: 0x0088 (0x000000 - 0x000088)
class FVkResolvedModule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   ModuleId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ArtifactId                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   CookJobId                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FVkModuleBinaries)                         Binaries                                                    OFFSET(getStruct<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFileSize
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkFileSize : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FString>)                           Types                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   SourceSize                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UncompressedSize                                            OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   CompressedSize                                              OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFileSizes
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkFileSizes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FVkFileSize>)                FileSizeMap                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorParam
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkExtendedErrorParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedError
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkExtendedError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   FormatKey                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   FormatNs                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVkExtendedErrorParam>)             Params                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorInformation
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkExtendedErrorInformation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ErrorCode                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ErrorMessage                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVkExtendedError>)                  AdditionalErrors                                            OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTicketDetails
/// Size: 0x0048 (0x000000 - 0x000048)
class FVkTicketDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EVkTicketStatus)                           Status                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDateTime)                                 StartDate                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndDate                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVkExtendedErrorInformation)               Error                                                       OFFSET(getStruct<T>, {0x18, 48, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersePath
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkVersePath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   VersePath                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersePathTarget
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkVersePathTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVkVersionedLinkCode)                      LinkCode                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedVersePath
/// Size: 0x0028 (0x000020 - 0x000048)
class FVkResolvedVersePath : public FVkVersePath
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVkVersePathTarget)                        Target                                                      OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentManifest
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkContentManifest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVkResolvedModule>)                 Content                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkBuildVersion
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkBuildVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Major                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Minor                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Patch                                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkJobOutput
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkJobOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   BaseUrl                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(double)                                    TotalSizeKb                                                 OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    UserContentTotalSizeKb                                      OFFSET(get<double>, {0x18, 8, 0, 0})
	CMember(TArray<FString>)                           Files                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   manifest                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionDoc
/// Size: 0x0168 (0x000000 - 0x000168)
class FVkModuleVersionDoc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   ModuleId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(EVkModuleAccess)                           Access                                                      OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FDateTime)                                 Created                                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TArray<FVkModuleVersionRef>)               Dependencies                                                OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FVkJobOutput)                              StagedFiles                                                 OFFSET(getStruct<T>, {0x80, 64, 0, 0})
	SMember(FVkBuildVersion)                           SourceVersion                                               OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FString)                                   ContentType                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   OFFSET(get<T>, {0xE8, 80, 0, 0})
	SMember(FString)                                   ArtifactKey                                                 OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   Checksum                                                    OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	CMember(TArray<FVkArtifactOption>)                 Artifacts                                                   OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectLimitsDoc
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkProjectLimitsDoc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   PublishingMemorySize                                        OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   PublishingDownloadSize                                      OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   ProjectUploadSize                                           OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   ModuleUploadConcurrencyLimit                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   FileCount                                                   OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   IndividualFileSizeKb                                        OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectUserInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FVkProjectUserInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      HasStar                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      IsNew                                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(TMap<FString, bool>)                       Access                                                      OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<FString>)                           Permissions                                                 OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateProjectRequest
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkCreateProjectRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   DesiredProjectId                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTransferProjectRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkTransferProjectRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   TeamId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateModuleRequest
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVkCreateModuleRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   ModuleName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FString)                                   ContentType                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   OFFSET(get<T>, {0x40, 80, 0, 0})
	SMember(FString)                                   DesiredModuleId                                             OFFSET(getStruct<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateModuleVersionRequest
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVkCreateModuleVersionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FString, FString>)                    RawFiles                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FVkModuleVersionRef>)               Dependencies                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FString)                                   Checksum                                                    OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   ManifestLink                                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedContent
/// Size: 0x0068 (0x000000 - 0x000068)
class FVkResolvedContent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVkModuleVersionRef)                       Root                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TMap<FString, int32_t>)                    Resolutions                                                 OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkSnapshotSaveRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkSnapshotSaveRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVkResolvedContent)                        Content                                                     OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	CMember(TArray<FVkVersionedLinkCode>)              Palette                                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   MapPath                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           OFFSET(getStruct<T>, {0x88, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSnapshot
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FVkProjectSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FDateTime)                                 CreatedAt                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   DeltaFileIndex                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FVkResolvedContent)                        Content                                                     OFFSET(getStruct<T>, {0x40, 104, 0, 0})
	CMember(TArray<FVkVersionedLinkCode>)              Palette                                                     OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   MapPath                                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkGenerateTestcodeRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkGenerateTestcodeRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVkResolvedContent)                        Content                                                     OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	SMember(FString)                                   CommitMessage                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	SMember(FString)                                   SourceControlBase                                           OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResult
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkProjectSearchResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Accessed                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FString)                                   LinkCode                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectInfoSlim
/// Size: 0x0068 (0x000000 - 0x000068)
class FVkProjectInfoSlim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVkTypedId)                                Owner                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   RcsProvider                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResultSlim
/// Size: 0x0088 (0x000000 - 0x000088)
class FVkProjectSearchResultSlim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Date                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVkProjectInfoSlim)                        Info                                                        OFFSET(getStruct<T>, {0x18, 104, 0, 0})
	DMember(bool)                                      is_starred                                                  OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      is_new                                                      OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamMembershipResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkTeamMembershipResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, bool>)                       Access                                                      OFFSET(get<T>, {0x10, 80, 0, 0})
	SMember(FString)                                   Status                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   MembershipId                                                OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   TeamId                                                      OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FDateTime)                                 Updated                                                     OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamAccessControl
/// Size: 0x0004 (0x000000 - 0x000004)
class FVkTeamAccessControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      Admin                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      Edit                                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Operate                                                     OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      Publish                                                     OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamAuthorizedEmailDomain
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkTeamAuthorizedEmailDomain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Domain                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVkTeamAccessControl)                      Access                                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamPublicProperties
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkTeamPublicProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVkTeamAuthorizedEmailDomain>)      EmailDomains                                                OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamDoc
/// Size: 0x0090 (0x000000 - 0x000090)
class FVkTeamDoc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   TeamId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Updated                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVkTypedId)                                Owner                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVkTeamPublicProperties)                   PublicProps                                                 OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	DMember(int32_t)                                   MemberCount                                                 OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkLaunchData_Link
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkLaunchData_Link : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   LinkCode                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessRequest
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkProjectPlaytestAccessRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FString>)                           Users                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlaytestGroupId                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectAccessControl
/// Size: 0x0005 (0x000000 - 0x000005)
class FVkProjectAccessControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      Read                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      Edit                                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Operate                                                     OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      Publish                                                     OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      Admin                                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessResult
/// Size: 0x0080 (0x000000 - 0x000080)
class FVkProjectPlaytestAccessResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVkNamedId)                                Owner                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   OwnerType                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, FVkProjectAccessControl>)    Playtesters                                                 OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkSnapshotDeltaFiles
/// Size: 0x0060 (0x000000 - 0x000060)
class FVkSnapshotDeltaFiles : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   SnapshotId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    DeltaFileLinks                                              OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Duration
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkProfileBuildResult_Duration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FDateTime)                                 Start                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 End                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Server
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkProfileBuildResult_Server : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   BuildId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Platform                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TMap<FString, float>)                      Stat                                                        OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Client
/// Size: 0x0080 (0x000000 - 0x000080)
class FVkProfileBuildResult_Client : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BuildId                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Platform                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, float>)                      Stat                                                        OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkProfileBuildResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Score                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVkProfileBuildResult_Duration)            Duration                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVkProfileBuildResult_Server)              Server                                                      OFFSET(getStruct<T>, {0x28, 112, 0, 0})
	CMember(TArray<FVkProfileBuildResult_Client>)      Clients                                                     OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkPublishedLink
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FVkPublishedLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   LinkCode                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   LinkVersion                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FDateTime)                                 LastPublished                                               OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FString)                                   base                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CommitMessage                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVkProfileBuildResult)                     ProfileResult                                               OFFSET(getStruct<T>, {0x40, 168, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectDoc
/// Size: 0x0170 (0x000000 - 0x000170)
class FVkProjectDoc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVkTypedId)                                Owner                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	SMember(FVkPublishedLink)                          LiveLink                                                    OFFSET(getStruct<T>, {0x88, 232, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkLinkCodeInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FVkLinkCodeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   LinkCode                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   CreatorName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MetaData                                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkMetaDataFlags
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkMetaDataFlags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FString>)                    _validation_flags                                           OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectDescriptorFileVersion
/// Size: 0x18
enum EValkyrieProjectDescriptorFileVersion : uint8_t
{
	EValkyrieProjectDescriptorFileVersion__Invalid0                                  = 0,
	EValkyrieProjectDescriptorFileVersion__Initial1                                  = 1,
	EValkyrieProjectDescriptorFileVersion__AddProjectMetadata2                       = 2,
	EValkyrieProjectDescriptorFileVersion__AddedCompatibilityLabel3                  = 3,
	EValkyrieProjectDescriptorFileVersion__AddBindings4                              = 4,
	EValkyrieProjectDescriptorFileVersion__AddEditorPermissions5                     = 5,
	EValkyrieProjectDescriptorFileVersion__AddEpicApp6                               = 6,
	EValkyrieProjectDescriptorFileVersion__AddDataSets7                              = 7,
	EValkyrieProjectDescriptorFileVersion__AddVersionSuffix8                         = 8,
	EValkyrieProjectDescriptorFileVersion__AddProjectKind9                           = 9,
	EValkyrieProjectDescriptorFileVersion__AddMetaDataTags10                         = 10,
	EValkyrieProjectDescriptorFileVersion__RevertMetaDataTags11                      = 11,
	EValkyrieProjectDescriptorFileVersion__AddDocsUrl12                              = 12,
	EValkyrieProjectDescriptorFileVersion__AddTemplateCategory13                     = 13,
	EValkyrieProjectDescriptorFileVersion__BranchDependencies14                      = 14,
	EValkyrieProjectDescriptorFileVersion__LatestPlusOne15                           = 15,
	EValkyrieProjectDescriptorFileVersion__Latest16                                  = 14,
	EValkyrieProjectDescriptorFileVersion__EValkyrieProjectDescriptorFileVersion_MAX17 = 16
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectReferenceDescriptorFileVersion
/// Size: 0x06
enum EValkyrieProjectReferenceDescriptorFileVersion : uint8_t
{
	EValkyrieProjectReferenceDescriptorFileVersion__Invalid0                         = 0,
	EValkyrieProjectReferenceDescriptorFileVersion__Initial1                         = 1,
	EValkyrieProjectReferenceDescriptorFileVersion__AddLinkCode2                     = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__LatestPlusOne3                   = 3,
	EValkyrieProjectReferenceDescriptorFileVersion__Latest4                          = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__EValkyrieProjectReferenceDescriptorFileVersion_MAX5 = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectKind
/// Size: 0x06
enum EValkyrieProjectKind : uint8_t
{
	EValkyrieProjectKind__Island0                                                    = 0,
	EValkyrieProjectKind__Library1                                                   = 1,
	EValkyrieProjectKind__Count2                                                     = 2,
	EValkyrieProjectKind__Unspecified3                                               = 3,
	EValkyrieProjectKind__Default4                                                   = 0,
	EValkyrieProjectKind__EValkyrieProjectKind_MAX5                                  = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectTemplateCategory
/// Size: 0x06
enum EValkyrieProjectTemplateCategory : uint8_t
{
	EValkyrieProjectTemplateCategory__UserGenerated0                                 = 0,
	EValkyrieProjectTemplateCategory__FeatureExample1                                = 1,
	EValkyrieProjectTemplateCategory__SampleProject2                                 = 2,
	EValkyrieProjectTemplateCategory__Count3                                         = 3,
	EValkyrieProjectTemplateCategory__Default4                                       = 0,
	EValkyrieProjectTemplateCategory__EValkyrieProjectTemplateCategory_MAX5          = 4
};

/// Enum /Script/VkEngineTypes.EConsumerRole
/// Size: 0x04
enum EConsumerRole : uint8_t
{
	EConsumerRole__Server0                                                           = 0,
	EConsumerRole__Client1                                                           = 1,
	EConsumerRole__Editor2                                                           = 2,
	EConsumerRole__EConsumerRole_MAX3                                                = 3
};

/// Enum /Script/VkEngineTypes.EVkLinkPublishMode
/// Size: 0x03
enum EVkLinkPublishMode : uint8_t
{
	EVkLinkPublishMode__Live0                                                        = 0,
	EVkLinkPublishMode__Playtest1                                                    = 1,
	EVkLinkPublishMode__EVkLinkPublishMode_MAX2                                      = 2
};

/// Enum /Script/VkEngineTypes.EVkIdType
/// Size: 0x03
enum EVkIdType : uint8_t
{
	EVkIdType__Account0                                                              = 0,
	EVkIdType__Team1                                                                 = 1,
	EVkIdType__EVkIdType_MAX2                                                        = 2
};

/// Enum /Script/VkEngineTypes.EVkTicketStatus
/// Size: 0x05
enum EVkTicketStatus : uint8_t
{
	EVkTicketStatus__None0                                                           = 0,
	EVkTicketStatus__Succeeded1                                                      = 1,
	EVkTicketStatus__Running2                                                        = 2,
	EVkTicketStatus__Failed3                                                         = 3,
	EVkTicketStatus__EVkTicketStatus_MAX4                                            = 4
};

/// Enum /Script/VkEngineTypes.EVkModuleAccess
/// Size: 0x04
enum EVkModuleAccess : uint8_t
{
	EVkModuleAccess__Private0                                                        = 0,
	EVkModuleAccess__Protected1                                                      = 1,
	EVkModuleAccess__Public2                                                         = 2,
	EVkModuleAccess__EVkModuleAccess_MAX3                                            = 3
};

/// Enum /Script/VkEngineTypes.EVkValidationFlags
/// Size: 0x07
enum EVkValidationFlags : uint8_t
{
	EVkValidationFlags__None0                                                        = 0,
	EVkValidationFlags__VF_IgnoreValidation1                                         = 1,
	EVkValidationFlags__VF_AllowMissingGameFeatureDataAsset2                         = 2,
	EVkValidationFlags__VF_AllowEngineContent3                                       = 4,
	EVkValidationFlags__VF_AllowGameContent4                                         = 8,
	EVkValidationFlags__VF_NoPreCheckVerse5                                          = 16,
	EVkValidationFlags__EVkValidationFlags_MAX6                                      = 17
};

