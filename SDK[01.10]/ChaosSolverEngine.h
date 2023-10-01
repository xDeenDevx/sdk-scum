/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosSolverEngine.

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x01B8 (0x0000B8 - 0x000270)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x110];                                     // 0x00B8   (0x0110)  MISSED
	TMap<UPrimitiveComponent*, FChaosHandlerSet>       CollisionEventRegistrations;                                // 0x01C8   (0x0050)  
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                                // 0x0218   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolver : public UObject
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (0x000220 - 0x000318)
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x0220   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x0288   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x028C   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0290   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x0294   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0298   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x029C   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x029E   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x02A0   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x02B4   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02C5   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x02C8   (0x0010)  
	float                                              MassScale;                                                  // 0x02D8   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x02DC   (0x0001)  
	bool                                               bHasFloor;                                                  // 0x02DD   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x02DE   (0x0002)  MISSED
	float                                              FloorHeight;                                                // 0x02E0   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x02E4   (0x0003)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x02E7   (0x0001)  MISSED
	UBillboardComponent*                               SpriteComponent;                                            // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x02F0   (0x0018)  MISSED
	UChaosGameplayEventDispatcher*                     GameplayEventDispatcherComponent;                           // 0x0308   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0310   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetSolverActive(bool bActive);                                                                                      // [0xaa7af0] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	void SetAsCurrentWorldSolver();                                                                                          // [0x4650ca0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0020 (0x000038 - 0x000058)
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0040   (0x0018)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FChaosPhysicsCollisionInfo
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	UPrimitiveComponent*                               OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FVector                                            Normal;                                                     // 0x001C   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x0028   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0034   (0x000C)  
	FVector                                            OtherVelocity;                                              // 0x0040   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x004C   (0x000C)  
	FVector                                            OtherAngularVelocity;                                       // 0x0058   (0x000C)  
	float                                              Mass;                                                       // 0x0064   (0x0004)  
	float                                              OtherMass;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FChaosBreakEvent
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0014   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0020   (0x000C)  
	float                                              Mass;                                                       // 0x002C   (0x0004)  
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (0x000000 - 0x000058)
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TSet<UObject*>                                     ChaosHandlers;                                              // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (0x000000 - 0x000003)
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x07
enum EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5,
	EClusterConnectionTypeEnum__Chaos_MAX                                            = 6
};

