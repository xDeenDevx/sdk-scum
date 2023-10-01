/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SoundUtilities.

/// Class /Script/SoundUtilities.SoundSimple
/// Size: 0x0018 (0x000170 - 0x000188)
class USoundSimple : public USoundBase
{ 
public:
	TArray<FSoundVariation>                            Variations;                                                 // 0x0170   (0x0010)  
	USoundWave*                                        SoundWave;                                                  // 0x0180   (0x0008)  
};

/// Class /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/SoundUtilities.SoundVariation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoundVariation
{ 
	USoundWave*                                        SoundWave;                                                  // 0x0000   (0x0008)  
	float                                              ProbabilityWeight;                                          // 0x0008   (0x0004)  
	FVector2D                                          VolumeRange;                                                // 0x000C   (0x0008)  
	FVector2D                                          PitchRange;                                                 // 0x0014   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

