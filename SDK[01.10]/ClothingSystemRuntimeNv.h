/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ClothingSystemRuntimeNv.

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0120 (0x000028 - 0x000148)
class UClothConfigNv : public UClothConfigCommon
{ 
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x002C   (0x0010)  
	FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x003C   (0x0010)  
	FClothConstraintSetupNv                            BendConstraint;                                             // 0x004C   (0x0010)  
	FClothConstraintSetupNv                            ShearConstraint;                                            // 0x005C   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x006C   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0070   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x0074   (0x0004)  
	FVector                                            Damping;                                                    // 0x0078   (0x000C)  
	float                                              Friction;                                                   // 0x0084   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x0088   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x008C   (0x0004)  
	float                                              WindIntensityScale;                                         // 0x0090   (0x0004)  
	FVector                                            LinearDrag;                                                 // 0x0094   (0x000C)  
	FVector                                            AngularDrag;                                                // 0x00A0   (0x000C)  
	FVector                                            LinearInertiaScale;                                         // 0x00AC   (0x000C)  
	FVector                                            AngularInertiaScale;                                        // 0x00B8   (0x000C)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x00C4   (0x000C)  
	float                                              SolverFrequency;                                            // 0x00D0   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00D4   (0x0004)  
	float                                              GravityScale;                                               // 0x00D8   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x00DC   (0x000C)  
	bool                                               bUseGravityOverride;                                        // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x00EC   (0x0004)  
	float                                              TetherLimit;                                                // 0x00F0   (0x0004)  
	float                                              CollisionThickness;                                         // 0x00F4   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x00F8   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x00FC   (0x0004)  
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0104   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0114   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0124   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0134   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
	TArray<float>                                      MaxDistances;                                               // 0x00E0   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00F0   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x0100   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x0110   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClothConstraintSetupNv
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x03
enum EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX                                 = 2
};

