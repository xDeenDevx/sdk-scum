/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosCloth.

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UChaosClothConfig : public UClothConfigCommon
{ 
public:
	EClothMassMode                                     MassMode;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              UniformMass;                                                // 0x002C   (0x0004)  
	float                                              TotalMass;                                                  // 0x0030   (0x0004)  
	float                                              Density;                                                    // 0x0034   (0x0004)  
	float                                              MinPerParticleMass;                                         // 0x0038   (0x0004)  
	float                                              EdgeStiffness;                                              // 0x003C   (0x0004)  
	float                                              BendingStiffness;                                           // 0x0040   (0x0004)  
	bool                                               bUseBendingElements;                                        // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              AreaStiffness;                                              // 0x0048   (0x0004)  
	float                                              VolumeStiffness;                                            // 0x004C   (0x0004)  
	FChaosClothWeightedValue                           TetherStiffness;                                            // 0x0050   (0x0008)  
	float                                              LimitScale;                                                 // 0x0058   (0x0004)  
	bool                                               bUseGeodesicDistance;                                       // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              ShapeTargetStiffness;                                       // 0x0060   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0064   (0x0004)  
	float                                              FrictionCoefficient;                                        // 0x0068   (0x0004)  
	bool                                               bUseCCD;                                                    // 0x006C   (0x0001)  
	bool                                               bUseSelfCollisions;                                         // 0x006D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x006E   (0x0002)  MISSED
	float                                              SelfCollisionThickness;                                     // 0x0070   (0x0004)  
	bool                                               bUseLegacyBackstop;                                         // 0x0074   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              DampingCoefficient;                                         // 0x0078   (0x0004)  
	bool                                               bUsePointBasedWindModel;                                    // 0x007C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              DragCoefficient;                                            // 0x0080   (0x0004)  
	float                                              LiftCoefficient;                                            // 0x0084   (0x0004)  
	bool                                               bUseGravityOverride;                                        // 0x0088   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x008C   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0090   (0x000C)  
	FChaosClothWeightedValue                           AnimDriveStiffness;                                         // 0x009C   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveDamping;                                           // 0x00A4   (0x0008)  
	FVector                                            LinearVelocityScale;                                        // 0x00AC   (0x000C)  
	float                                              AngularVelocityScale;                                       // 0x00B8   (0x0004)  
	float                                              FictitiousAngularScale;                                     // 0x00BC   (0x0004)  
	bool                                               bUseTetrahedralConstraints;                                 // 0x00C0   (0x0001)  
	bool                                               bUseThinShellVolumeConstraints;                             // 0x00C1   (0x0001)  
	bool                                               bUseContinuousCollisionDetection;                           // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData07_6[0x5];                                       // 0x00C3   (0x0005)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
public:
	int32_t                                            IterationCount;                                             // 0x0028   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x002C   (0x0004)  
	bool                                               bUseLocalSpaceSimulation;                                   // 0x0030   (0x0001)  
	bool                                               bUseXPBDConstraints;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0010 (0x000030 - 0x000040)
class UChaosClothingInteractor : public UClothingInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChaosClothWeightedValue
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              High;                                                       // 0x0004   (0x0004)  
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x05
enum EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX                                 = 4
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x08
enum EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveStiffness                                        = 4,
	EChaosWeightMapTarget__AnimDriveDamping                                          = 5,
	EChaosWeightMapTarget__TetherStiffness                                           = 6,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX                                 = 7
};

