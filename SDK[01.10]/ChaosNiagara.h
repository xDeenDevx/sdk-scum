/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosNiagara.

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0200 (0x000038 - 0x000238)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
public:
	TSet<AChaosSolverActor*>                           ChaosSolverActorSet;                                        // 0x0038   (0x0050)  
	EDataSourceTypeEnum                                DataSourceType;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            DataProcessFrequency;                                       // 0x008C   (0x0004)  
	int32_t                                            MaxNumberOfDataEntriesToSpawn;                              // 0x0090   (0x0004)  
	bool                                               DoSpawn;                                                    // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FVector2D                                          SpawnMultiplierMinMax;                                      // 0x0098   (0x0008)  
	float                                              SpawnChance;                                                // 0x00A0   (0x0004)  
	FVector2D                                          ImpulseToSpawnMinMax;                                       // 0x00A4   (0x0008)  
	FVector2D                                          SpeedToSpawnMinMax;                                         // 0x00AC   (0x0008)  
	FVector2D                                          MassToSpawnMinMax;                                          // 0x00B4   (0x0008)  
	FVector2D                                          ExtentMinToSpawnMinMax;                                     // 0x00BC   (0x0008)  
	FVector2D                                          ExtentMaxToSpawnMinMax;                                     // 0x00C4   (0x0008)  
	FVector2D                                          VolumeToSpawnMinMax;                                        // 0x00CC   (0x0008)  
	FVector2D                                          SolverTimeToSpawnMinMax;                                    // 0x00D4   (0x0008)  
	int32_t                                            SurfaceTypeToSpawn;                                         // 0x00DC   (0x0004)  
	ELocationFilteringModeEnum                         LocationFilteringMode;                                      // 0x00E0   (0x0001)  
	ELocationXToSpawnEnum                              LocationXToSpawn;                                           // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FVector2D                                          LocationXToSpawnMinMax;                                     // 0x00E4   (0x0008)  
	ELocationYToSpawnEnum                              LocationYToSpawn;                                           // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FVector2D                                          LocationYToSpawnMinMax;                                     // 0x00F0   (0x0008)  
	ELocationZToSpawnEnum                              LocationZToSpawn;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FVector2D                                          LocationZToSpawnMinMax;                                     // 0x00FC   (0x0008)  
	EDataSortTypeEnum                                  DataSortingType;                                            // 0x0104   (0x0001)  
	bool                                               bGetExternalCollisionData;                                  // 0x0105   (0x0001)  
	bool                                               DoSpatialHash;                                              // 0x0106   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0107   (0x0001)  MISSED
	FVector                                            SpatialHashVolumeMin;                                       // 0x0108   (0x000C)  
	FVector                                            SpatialHashVolumeMax;                                       // 0x0114   (0x000C)  
	FVector                                            SpatialHashVolumeCellSize;                                  // 0x0120   (0x000C)  
	int32_t                                            MaxDataPerCell;                                             // 0x012C   (0x0004)  
	bool                                               bApplyMaterialsFilter;                                      // 0x0130   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	TSet<UPhysicalMaterial*>                           ChaosBreakingMaterialSet;                                   // 0x0138   (0x0050)  
	bool                                               bGetExternalBreakingData;                                   // 0x0188   (0x0001)  
	bool                                               bGetExternalTrailingData;                                   // 0x0189   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x018A   (0x0002)  MISSED
	FVector2D                                          RandomPositionMagnitudeMinMax;                              // 0x018C   (0x0008)  
	float                                              InheritedVelocityMultiplier;                                // 0x0194   (0x0004)  
	ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                               // 0x0198   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0199   (0x0003)  MISSED
	FVector2D                                          RandomVelocityMagnitudeMinMax;                              // 0x019C   (0x0008)  
	float                                              SpreadAngleMax;                                             // 0x01A4   (0x0004)  
	FVector                                            VelocityOffsetMin;                                          // 0x01A8   (0x000C)  
	FVector                                            VelocityOffsetMax;                                          // 0x01B4   (0x000C)  
	FVector2D                                          FinalVelocityMagnitudeMinMax;                               // 0x01C0   (0x0008)  
	float                                              MaxLatency;                                                 // 0x01C8   (0x0004)  
	EDebugTypeEnum                                     DebugType;                                                  // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x01CD   (0x0003)  MISSED
	int32_t                                            LastSpawnedPointID;                                         // 0x01D0   (0x0004)  
	float                                              LastSpawnTime;                                              // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData10_5[0x10];                                      // 0x01D8   (0x0010)  MISSED
	float                                              SolverTime;                                                 // 0x01E8   (0x0004)  
	float                                              TimeStampOfLastProcessedData;                               // 0x01EC   (0x0004)  
	unsigned char                                      UnknownData11_6[0x48];                                      // 0x01F0   (0x0048)  MISSED
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{ 
public:
};

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0044 (0x000000 - 0x000044)
struct FChaosDestructionEvent
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0018   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x05
enum ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None                        = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min                         = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max                         = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax                      = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x05
enum ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None                        = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min                         = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max                         = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax                      = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x05
enum ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None                        = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min                         = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max                         = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax                      = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x03
enum ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive         = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive         = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max                                     = 2
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x04
enum EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision                       = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking                        = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing                        = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max                                            = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x04
enum EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug                                   = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver                             = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex                      = 2,
	EDebugTypeEnum__ChaosNiagara_Max                                                 = 3
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x04
enum ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max                              = 3
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x05
enum EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting                           = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle                       = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin                  = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax                  = 3,
	EDataSortTypeEnum__ChaosNiagara_Max                                              = 4
};

