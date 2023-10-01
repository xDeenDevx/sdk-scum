/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ArchVisCharacter.

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0060 (0x0004D0 - 0x000530)
class AArchVisCharacter : public ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x04C8   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x04D8   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x04E8   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x04F8   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x0508   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x0518   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0528   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x052C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0050 (0x000AF0 - 0x000B40)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0AF0   (0x000C)  
	FRotator                                           RotationalDeceleration;                                     // 0x0AFC   (0x000C)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0B08   (0x000C)  
	float                                              MinPitch;                                                   // 0x0B14   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0B18   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0B1C   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0B20   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0B24   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0B28   (0x0018)  MISSED
};

