
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MIDIDevice.MIDIDeviceControllerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMIDIDeviceControllerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MIDIDevice.MIDIDeviceController
/// Size: 0x0038 (0x000028 - 0x000060)
class UMIDIDeviceController : public UMIDIDeviceControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnMIDIEvent                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/MIDIDevice.MIDIDeviceInputController
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnMIDINoteOn                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDINoteOff                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDIPitchBend                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDIAftertouch                                            OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDIControlChange                                         OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDIProgramChange                                         OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMIDIChannelAftertouch                                     OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MIDIDevice.MIDIDeviceManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MIDIDevice.MIDIDeviceOutputController
/// Size: 0x0020 (0x000028 - 0x000048)
class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
	// void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber);                                                      // [0xa3ef19c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
	// void SendMIDIPitchBend(int32_t Channel, int32_t Pitch);                                                                  // [0xa3ef0b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
	// void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity);                                                    // [0xa3eefb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
	// void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity);                                                   // [0xa3eeebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
	// void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount);                                                // [0xa3eedc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
	// void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2);                             // [0xa3eec88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
	// void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value);                                                // [0xa3eeb8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
	// void SendMIDIChannelAftertouch(int32_t Channel, float Amount);                                                           // [0xa3eeac8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MIDIDevice.FoundMIDIDevice
/// Size: 0x0020 (0x000000 - 0x000020)
class FFoundMIDIDevice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCanReceiveFrom                                             OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bCanSendTo                                                  OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIsAlreadyInUse                                             OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bIsDefaultInputDevice                                       OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(bool)                                      bIsDefaultOutputDevice                                      OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/MIDIDevice.MIDIDeviceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FMIDIDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsAlreadyInUse                                             OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsDefaultDevice                                            OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Enum /Script/MIDIDevice.EMIDIEventType
/// Size: 0x09
enum EMIDIEventType : uint8_t
{
	EMIDIEventType__Unknown0                                                         = 0,
	EMIDIEventType__NoteOff1                                                         = 8,
	EMIDIEventType__NoteOn2                                                          = 9,
	EMIDIEventType__NoteAfterTouch3                                                  = 10,
	EMIDIEventType__ControlChange4                                                   = 11,
	EMIDIEventType__ProgramChange5                                                   = 12,
	EMIDIEventType__ChannelAfterTouch6                                               = 13,
	EMIDIEventType__PitchBend7                                                       = 14,
	EMIDIEventType__EMIDIEventType_MAX8                                              = 15
};

