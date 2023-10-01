/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraAnimNotifies.

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0058 (0x000038 - 0x000090)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	UNiagaraSystem*                                    Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)  
	FVector                                            Scale;                                                      // 0x0058   (0x000C)  
	bool                                               bAbsoluteScale;                                             // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1B];                                      // 0x0065   (0x001B)  MISSED
	bool                                               Attached;                                                   // 0x0080:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x0084   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	UFXSystemComponent* GetSpawnedEffect();                                                                                  // [0x11372e0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0030 (0x000030 - 0x000060)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	UNiagaraSystem*                                    Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)  
	bool                                               bDestroyAtEnd;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	UFXSystemComponent* GetSpawnedEffect(UMeshComponent* MeshComp);                                                          // [0x1137240] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0050 (0x000060 - 0x0000B0)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0060   (0x0050)  MISSED
};

