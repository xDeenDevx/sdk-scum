/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLink.

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x000160 - 0x000168)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0160   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0162   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0030 (0x000028 - 0x000058)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      FrontAxis;                                                  // 0x0028   (0x0001)  
	ELiveLinkAxis                                      RightAxis;                                                  // 0x0029   (0x0001)  
	ELiveLinkAxis                                      UpAxis;                                                     // 0x002A   (0x0001)  
	bool                                               bUseOffsetPosition;                                         // 0x002B   (0x0001)  
	bool                                               bUseOffsetOrientation;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            OffsetPosition;                                             // 0x0030   (0x000C)  
	FRotator                                           OffsetOrientation;                                          // 0x003C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000058 - 0x000058)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x000160 - 0x000188)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0160   (0x0028)  MISSED
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class ULiveLinkComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x9e5dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x9e5be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                         // [0x9e5a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0x9e46b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00B0   (0x0008)  
	FName                                              ActorTransformBone;                                         // 0x00B8   (0x0008)  
	bool                                               bModifyActorTransform;                                      // 0x00C0   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class ULiveLinkInstance : public UAnimInstance
{ 
public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkInstance.SetSubject
	void SetSubject(FLiveLinkSubjectName SubjectName);                                                                       // [0x9e6bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
	void SetRetargetAsset(UClass* RetargetAsset);                                                                            // [0x9e6ac0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0020 (0x000028 - 0x000048)
class ULiveLinkPreset : public UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	void BuildFromClient();                                                                                                  // [0x9e3df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	bool ApplyToClient();                                                                                                    // [0x9e3dc0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	bool AddToClient(bool bRecreatePresets);                                                                                 // [0x9e3d20] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class ULiveLinkSettings : public UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)  
	UClass*                                            FrameInterpolationProcessor;                                // 0x0038   (0x0008)  
	TWeakObjectPtr<ULiveLinkPreset*>                   DefaultLiveLinkPreset;                                      // 0x0040   (0x0028)  
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0068   (0x0010)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0078   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0080   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0088   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0090   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0098   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x00A0   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x00A8   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00B8   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00C8   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0018)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0048   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x0050   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x005C   (0x0064)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A0   (0x0008)  
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0040 (0x000010 - 0x000050)
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)  
	UClass*                                            RetargetAsset;                                              // 0x0028   (0x0008)  
	ULiveLinkRetargetAsset*                            CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x0050 (0x000770 - 0x0007C0)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0770   (0x0050)  
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (0x000000 - 0x000038)
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            MachineName;                                                // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLiveLinkRoleProjectSetting
{ 
	UClass*                                            Role;                                                       // 0x0000   (0x0008)  
	UClass*                                            SettingClass;                                               // 0x0008   (0x0008)  
	UClass*                                            FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<UClass*>                                    FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x07
enum ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX                                                 = 6
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04
enum ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

