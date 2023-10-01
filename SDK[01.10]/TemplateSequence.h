/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateSequence.

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000060 - 0x000108)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0060   (0x0008)  
	TWeakObjectPtr<UClass*>                            BoundActorClass;                                            // 0x0068   (0x0028)  
	TWeakObjectPtr<AActor*>                            BoundPreviewActor;                                          // 0x0090   (0x0028)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000108 - 0x000108)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0648 (0x000028 - 0x000670)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0030   (0x0004)  
	bool                                               bConstrainAspectRatio;                                      // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x0560)  
	float                                              PostProcessBlendWeight;                                     // 0x05A0   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x05A4   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x05B0   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x05C8   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0620   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0624   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0628   (0x0004)  
	unsigned char                                      UnknownData03_6[0x44];                                      // 0x062C   (0x0044)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	UCameraAnimationSequence*                          Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	USequenceCameraShakeSequencePlayer*                Player;                                                     // 0x0048   (0x0008)  
	USequenceCameraShakeCameraStandIn*                 CameraStandIn;                                              // 0x0050   (0x0008)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0400 (0x000028 - 0x000428)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x2A8];                                     // 0x0028   (0x02A8)  MISSED
	UObject*                                           BoundObjectOverride;                                        // 0x02D0   (0x0008)  
	UMovieSceneSequence*                               Sequence;                                                   // 0x02D8   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02E0   (0x00E8)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x03C8   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0058 (0x000220 - 0x000278)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0220   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0230   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	UTemplateSequencePlayer*                           SequencePlayer;                                             // 0x0248   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0250   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0268   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0274   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	void SetSequence(UTemplateSequence* InSequence);                                                                         // [0x991190] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	void SetBinding(AActor* Actor, bool bOverridesDefault);                                                                  // [0x9910c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	UTemplateSequence* LoadSequence();                                                                                       // [0x991090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	UTemplateSequencePlayer* GetSequencePlayer();                                                                            // [0x991060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	UTemplateSequence* GetSequence();                                                                                        // [0x991030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004E8 - 0x0004F0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04E8   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0018 (0x000168 - 0x000180)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0168   (0x0008)  MISSED
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0170   (0x0010)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x00A0)  
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum ETemplateSectionPropertyScaleType : uint8_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX         = 3
};

