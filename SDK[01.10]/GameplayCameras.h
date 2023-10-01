/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayCameras.

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UTestCameraShake : public UCameraShakeBase
{ 
public:
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	float                                              BlendInTime;                                                // 0x002C   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0018 (0x000038 - 0x000050)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	FVector                                            LocationOffset;                                             // 0x0038   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0044   (0x000C)  
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0020 (0x000028 - 0x000048)
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
public:
	TArray<UCameraShakePattern*>                       ChildPatterns;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
public:
};

/// Class /Script/GameplayCameras.MatineeCameraShake
/// Size: 0x0100 (0x0000B0 - 0x0001B0)
class UMatineeCameraShake : public UCameraShakeBase
{ 
public:
	float                                              OscillationDuration;                                        // 0x00A8   (0x0004)  
	float                                              OscillationBlendInTime;                                     // 0x00AC   (0x0004)  
	float                                              OscillationBlendOutTime;                                    // 0x00B0   (0x0004)  
	FROscillator                                       RotOscillation;                                             // 0x00B4   (0x0024)  
	FVOscillator                                       LocOscillation;                                             // 0x00D8   (0x0024)  
	FFOscillator                                       FOVOscillation;                                             // 0x00FC   (0x000C)  
	float                                              AnimPlayRate;                                               // 0x0108   (0x0004)  
	float                                              AnimScale;                                                  // 0x010C   (0x0004)  
	float                                              AnimBlendInTime;                                            // 0x0110   (0x0004)  
	float                                              AnimBlendOutTime;                                           // 0x0114   (0x0004)  
	float                                              RandomAnimSegmentDuration;                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	UCameraAnim*                                       Anim;                                                       // 0x0120   (0x0008)  
	UCameraAnimationSequence*                          AnimSequence;                                               // 0x0128   (0x0008)  
	bool                                               bRandomAnimSegment;                                         // 0x0130:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              OscillatorTimeRemaining;                                    // 0x0134   (0x0004)  
	UCameraAnimInst*                                   AnimInst;                                                   // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_5[0x40];                                      // 0x0140   (0x0040)  MISSED
	USequenceCameraShakePattern*                       SequenceShakePattern;                                       // 0x0180   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0188   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	UMatineeCameraShake* StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x97db60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	UMatineeCameraShake* StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x97d9a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveStopShake
	void ReceiveStopShake(bool bImmediately);                                                                                // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	bool ReceiveIsFinished();                                                                                                // [0x97d970] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x2859740] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.MatineeCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatineeCameraShakePattern : public UCameraShakePattern
{ 
public:
};

/// Class /Script/GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{ 
public:
};

/// Class /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FPerlinNoiseShaker                                 X;                                                          // 0x0040   (0x0008)  
	FPerlinNoiseShaker                                 Y;                                                          // 0x0048   (0x0008)  
	FPerlinNoiseShaker                                 Z;                                                          // 0x0050   (0x0008)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0058   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x005C   (0x0004)  
	FPerlinNoiseShaker                                 Pitch;                                                      // 0x0060   (0x0008)  
	FPerlinNoiseShaker                                 Yaw;                                                        // 0x0068   (0x0008)  
	FPerlinNoiseShaker                                 Roll;                                                       // 0x0070   (0x0008)  
	FPerlinNoiseShaker                                 FOV;                                                        // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FWaveOscillator                                    X;                                                          // 0x0040   (0x000C)  
	FWaveOscillator                                    Y;                                                          // 0x004C   (0x000C)  
	FWaveOscillator                                    Z;                                                          // 0x0058   (0x000C)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0064   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0068   (0x0004)  
	FWaveOscillator                                    Pitch;                                                      // 0x006C   (0x000C)  
	FWaveOscillator                                    Yaw;                                                        // 0x0078   (0x000C)  
	FWaveOscillator                                    Roll;                                                       // 0x0084   (0x000C)  
	FWaveOscillator                                    FOV;                                                        // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x009C   (0x003C)  MISSED
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
struct FVOscillator
{ 
	FFOscillator                                       X;                                                          // 0x0000   (0x000C)  
	FFOscillator                                       Y;                                                          // 0x000C   (0x000C)  
	FFOscillator                                       Z;                                                          // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                              // 0x0008   (0x0001)  
	EOscillatorWaveform                                Waveform;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
struct FROscillator
{ 
	FFOscillator                                       Pitch;                                                      // 0x0000   (0x000C)  
	FFOscillator                                       Yaw;                                                        // 0x000C   (0x000C)  
	FFOscillator                                       Roll;                                                       // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPerlinNoiseShaker
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
struct FWaveOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	EInitialWaveOscillatorOffsetType                   InitialOffsetType;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x03
enum EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1,
	EOO_MAX                                                                          = 2
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x03
enum EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX                                     = 2
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x03
enum EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX           = 2
};

