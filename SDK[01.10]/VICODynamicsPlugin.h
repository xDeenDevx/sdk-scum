/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VICODynamicsPlugin.

/// Class /Script/VICODynamicsPlugin.BaseVDComponent
/// Size: 0x0210 (0x000480 - 0x000690)
class UBaseVDComponent : public UMeshComponent
{ 
public:
	UVDSimulation*                                     SimulationInstance;                                         // 0x0480   (0x0008)  
	UVDSimulatedObject*                                VDSimObject;                                                // 0x0488   (0x0008)  
	TArray<UVDSimulatedParticle*>                      Particles;                                                  // 0x0490   (0x0010)  
	float                                              FrictionCoefficient;                                        // 0x04A0   (0x0004)  
	float                                              RestitutionCoefficient;                                     // 0x04A4   (0x0004)  
	FVDCollisionSettings                               CollisionSettings;                                          // 0x04A8   (0x0040)  
	float                                              ParticleRadius;                                             // 0x04E8   (0x0004)  
	bool                                               AttachToRigids;                                             // 0x04EC   (0x0001)  
	bool                                               AttachToParticles;                                          // 0x04ED   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x04EE   (0x0002)  MISSED
	float                                              AttachToParticlesConstraintStiffness;                       // 0x04F0   (0x0004)  
	float                                              EndOffset;                                                  // 0x04F4   (0x0004)  
	float                                              DetectionRadiusInflationFactor;                             // 0x04F8   (0x0004)  
	bool                                               CreateTensionConstraintsForSimulatingRigids;                // 0x04FC   (0x0001)  
	bool                                               bSnapToSimulatingAttachment;                                // 0x04FD   (0x0001)  
	bool                                               ManuallyAttachParticles;                                    // 0x04FE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x04FF   (0x0001)  MISSED
	TArray<FVDParticleAttachment>                      ParticleAttachments;                                        // 0x0500   (0x0010)  
	float                                              TensionForce;                                               // 0x0510   (0x0004)  
	float                                              TensionDampening;                                           // 0x0514   (0x0004)  
	bool                                               AdjustOtherParticleLocationsBasedOnAttachments;             // 0x0518:0 (0x0001)  
	bool                                               AffectedByGlobalWind;                                       // 0x0518:1 (0x0001)  
	bool                                               UseExplicitRigidBodyCollision;                              // 0x0518:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0519   (0x0003)  MISSED
	float                                              WindResistance;                                             // 0x051C   (0x0004)  
	TArray<FComponentReference>                        AffectedByWindSources;                                      // 0x0520   (0x0010)  
	bool                                               CheckForWindOccluders;                                      // 0x0530   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0531   (0x0003)  MISSED
	float                                              MaxWindOccluderDistance;                                    // 0x0534   (0x0004)  
	FVDCollisionSettings                               WindOccluderTraceSettings;                                  // 0x0538   (0x0040)  
	FMulticastInlineDelegate                           OnSimulationDataCreated;                                    // 0x0578   (0x0010)  
	FMulticastInlineDelegate                           OnPreSimulationSync;                                        // 0x0588   (0x0010)  
	FMulticastInlineDelegate                           OnSimulationSync;                                           // 0x0598   (0x0010)  
	bool                                               ShowParticles;                                              // 0x05A8:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x05A9   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x05AC   (0x0004)  
	float                                              MinConstraintDistance;                                      // 0x05B0   (0x0004)  
	bool                                               SimulateOnlyWhenRendered;                                   // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x05B5   (0x0003)  MISSED
	float                                              SimulationToggleThreshold;                                  // 0x05B8   (0x0004)  
	bool                                               EnableParticleToParticleCollisions;                         // 0x05BC:0 (0x0001)  
	bool                                               ConsiderInnerCollisions;                                    // 0x05BC:1 (0x0001)  
	bool                                               SkipRelativeVelocityCheckDuringRigidBodyCollisions;         // 0x05BC:2 (0x0001)  
	unsigned char                                      UnknownBit06 : 1;                                           // 0x05BC:3 (0x0001)  MISSED
	unsigned char                                      UnknownBit07 : 1;                                           // 0x05BC:4 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x05BC:5 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x05BC:6 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x05BC:7 (0x0001)  MISSED
	bool                                               bNotifyOnVDCollision;                                       // 0x05BD:0 (0x0001)  
	unsigned char                                      UnknownData11_4[0x2];                                       // 0x05BE   (0x0002)  MISSED
	FMulticastInlineDelegate                           OnVDCollisionEvent;                                         // 0x05C0   (0x0010)  
	TMap<UVDSimulatedParticle*, FVDCollision>          PendingCollisionNotifications;                              // 0x05D0   (0x0050)  
	unsigned char                                      UnknownData12_5[0x20];                                      // 0x0620   (0x0020)  MISSED
	TArray<UVDParticleSpringConstraint*>               ConstraintsToOtherParticles;                                // 0x0640   (0x0010)  
	unsigned char                                      UnknownData13_5[0x20];                                      // 0x0650   (0x0020)  MISSED
	bool                                               bUseLocationCache;                                          // 0x0670:0 (0x0001)  
	bool                                               bApplyCachedStartLocationBeforeAttachToRigids;              // 0x0670:1 (0x0001)  
	unsigned char                                      UnknownData14_4[0x7];                                       // 0x0671   (0x0007)  MISSED
	TArray<FVDCachedParticleStartLocation>             CachedStartLocations;                                       // 0x0678   (0x0010)  
	unsigned char                                      UnknownData15_6[0x8];                                       // 0x0688   (0x0008)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision);                                                        // [0x13ab120] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	void SetAffectedByGlobalWind(bool IsAffected);                                                                           // [0x13aa930] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.OnSync
	void OnSync();                                                                                                           // [0x2859740] Event|Protected|BlueprintEvent 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	int32_t GetTensionConstraintCount();                                                                                     // [0x13aa350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	FVector GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex);                                        // [0x13a9f60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
	void AttachToOverlappingRigidBodies();                                                                                   // [0x13a97a0] Native|Public|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/VICODynamicsPlugin.VDColliderComponent
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UVDColliderComponent : public UActorComponent
{ 
public:
	UVDSimulation*                                     SimulationInstance;                                         // 0x00B0   (0x0008)  
	TArray<FComponentReference>                        AssociatedVDComponents;                                     // 0x00B8   (0x0010)  
	bool                                               bAddAllComponents;                                          // 0x00C8:0 (0x0001)  
	bool                                               bIgnoreConvexShapes;                                        // 0x00C8:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<FName>                                      SpecificColliders;                                          // 0x00D0   (0x0010)  
};

/// Class /Script/VICODynamicsPlugin.VDRopeComponent
/// Size: 0x0080 (0x000690 - 0x000710)
class UVDRopeComponent : public UBaseVDComponent
{ 
public:
	float                                              StretchStiffness;                                           // 0x0688   (0x0004)  
	float                                              BendStiffness;                                              // 0x068C   (0x0004)  
	float                                              Mass;                                                       // 0x0690   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0694   (0x0004)  
	float                                              Length;                                                     // 0x0698   (0x0004)  
	float                                              Width;                                                      // 0x069C   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x06A0   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x06A4   (0x0004)  
	float                                              TileMaterial;                                               // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x24];                                      // 0x06AC   (0x0024)  MISSED
	TArray<UVDParticleSpringConstraint*>               StretchConstraints;                                         // 0x06D0   (0x0010)  
	TArray<UVDParticleSpringConstraint*>               BendConstraints;                                            // 0x06E0   (0x0010)  
	TArray<FRopePiece>                                 Pieces;                                                     // 0x06F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0700   (0x0010)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	void SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength);                                    // [0x13aae00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	void SetNewRestLength(float NewLength, int32_t PieceIndex);                                                              // [0x13aad30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.ResetRope
	void ResetRope();                                                                                                        // [0x13aa910] Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	float GetTrueLength(int32_t PieceIndex);                                                                                 // [0x13aa370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.GetPieces
	TArray<FRopePiece> GetPieces();                                                                                          // [0x13aa120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
	void BreakAtSegment(int32_t SegmentIndex);                                                                               // [0x13a97c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDDynamicRopeComponent
/// Size: 0x0000 (0x000710 - 0x000710)
class UVDDynamicRopeComponent : public UVDRopeComponent
{ 
public:
};

/// Class /Script/VICODynamicsPlugin.VDMeshClothComponent
/// Size: 0x00E0 (0x000690 - 0x000770)
class UVDMeshClothComponent : public UBaseVDComponent
{ 
public:
	UStaticMesh*                                       HullMesh;                                                   // 0x0688   (0x0008)  
	float                                              StretchStiffness;                                           // 0x0690   (0x0004)  
	float                                              BendStiffness;                                              // 0x0694   (0x0004)  
	float                                              Mass;                                                       // 0x0698   (0x0004)  
	float                                              DragCoefficient;                                            // 0x069C   (0x0004)  
	bool                                               PreserveVolume;                                             // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06A1   (0x0003)  MISSED
	float                                              CurrentVolume;                                              // 0x06A4   (0x0004)  
	float                                              OverrideRestVolume;                                         // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06AC   (0x0004)  MISSED
	bool                                               UseVertexColorDataForSetup;                                 // 0x06B0:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x06B1   (0x0003)  MISSED
	float                                              MaxBendConstraintDistance;                                  // 0x06B4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x28];                                      // 0x06B8   (0x0028)  MISSED
	TArray<UVDParticleSpringConstraint*>               StretchConstraints;                                         // 0x06E0   (0x0010)  
	TArray<UVDParticleSpringConstraint*>               BendConstraints;                                            // 0x06F0   (0x0010)  
	UVDMeshVolumeConstraint*                           VolumeConstraint;                                           // 0x0700   (0x0008)  
	unsigned char                                      UnknownData04_6[0x68];                                      // 0x0708   (0x0068)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	UVDMeshVolumeConstraint* GetVolumeConstraint();                                                                          // [0x13aa440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	TArray<UVDParticleSpringConstraint*> GetStretchConstraintsArray();                                                       // [0x13aa320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
	TArray<UVDParticleSpringConstraint*> GetBendConstraintsArray();                                                          // [0x13a9de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDMeshVolumeConstraint
/// Size: 0x0010 (0x000028 - 0x000038)
class UVDMeshVolumeConstraint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDParticleSpringConstraint
/// Size: 0x0010 (0x000028 - 0x000038)
class UVDParticleSpringConstraint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDProceduralClothComponent
/// Size: 0x0070 (0x000690 - 0x000700)
class UVDProceduralClothComponent : public UBaseVDComponent
{ 
public:
	float                                              StretchStiffness;                                           // 0x0688   (0x0004)  
	float                                              BendStiffness;                                              // 0x068C   (0x0004)  
	float                                              Mass;                                                       // 0x0690   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0694   (0x0004)  
	float                                              Width;                                                      // 0x0698   (0x0004)  
	float                                              Height;                                                     // 0x069C   (0x0004)  
	int32_t                                            NumParticlesWide;                                           // 0x06A0   (0x0004)  
	int32_t                                            NumParticlesHigh;                                           // 0x06A4   (0x0004)  
	float                                              TileMaterialAlongWidth;                                     // 0x06A8   (0x0004)  
	float                                              TileMaterialAlongHeight;                                    // 0x06AC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x06B0   (0x0020)  MISSED
	TArray<UVDParticleSpringConstraint*>               StretchConstraints;                                         // 0x06D0   (0x0010)  
	TArray<UVDParticleSpringConstraint*>               BendConstraints;                                            // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x06F0   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSimulatedObject
/// Size: 0x0050 (0x000028 - 0x000078)
class UVDSimulatedObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSimulatedParticle
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UVDSimulatedParticle : public UObject
{ 
public:
	bool                                               IsAttached;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FVDParticleAttachment                              Attachment;                                                 // 0x0030   (0x0060)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	void SetVelocity(FVector& NewVelocity);                                                                                  // [0x13ae830] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	void SetRestitutionCoefficient(float NewRestitutionCoefficient);                                                         // [0x13ae690] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	void SetRadius(float NewRadius);                                                                                         // [0x13ae590] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetMass
	void SetMass(float NewMass);                                                                                             // [0x13ae360] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	void SetLocation(FVector& NewLocation);                                                                                  // [0x13ae2d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	void SetIsWindOccluded(bool IsOccluded);                                                                                 // [0x13ae240] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	void SetIsRigidBodyCollisionEnabled(bool IsEnabled);                                                                     // [0x13ae1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	void SetIsParticleCollisionEnabled(bool IsEnabled);                                                                      // [0x13ae120] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	void SetIsFree(bool IsFree);                                                                                             // [0x13ae090] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	void SetFrictionCoefficient(float NewFrictionCoefficient);                                                               // [0x13adf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	void SetDragCoefficient(float NewDragCoefficient);                                                                       // [0x13ade70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	FVector GetVelocity();                                                                                                   // [0x13ada90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	float GetRestitutionCoefficient();                                                                                       // [0x13ad990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	float GetRadius();                                                                                                       // [0x13ad960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetMass
	float GetMass();                                                                                                         // [0x13ad930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	FVector GetLocation();                                                                                                   // [0x13ad8f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	bool GetIsWindOccluded();                                                                                                // [0x13ad8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	bool GetIsRigidBodyCollisionEnabled();                                                                                   // [0x13ad870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	bool GetIsParticleCollisionEnabled();                                                                                    // [0x13ad840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	bool GetIsFree();                                                                                                        // [0x13ad810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	float GetFrictionCoefficient();                                                                                          // [0x13ad7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	float GetDragCoefficient();                                                                                              // [0x13ad790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	bool GetAttachment(FVDParticleAttachment& OutAttachment);                                                                // [0x13ad4e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.Detach
	void Detach();                                                                                                           // [0x13ad4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	void CopyAttachment(FVDParticleAttachment& Attachment, bool UseCurrentMass);                                             // [0x13ad380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	bool AttachToLocation(FVector Location, bool IsRelative);                                                                // [0x13ad290] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	bool AttachToComponent(UPrimitiveComponent* Component, FVector Location, bool SimulateTension, FName Socket);            // [0x13ad100] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	bool AttachToActor(AActor* Actor, FVector Location, bool SimulateTension, FName Socket);                                 // [0x13acf70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AddForce
	void AddForce(FVector& force);                                                                                           // [0x13acee0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDSimulation
/// Size: 0x0150 (0x000028 - 0x000178)
class UVDSimulation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x140];                                     // 0x0028   (0x0140)  MISSED
	TArray<UVDWindDirectionalSourceComponent*>         WindSources;                                                // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetSubstepCount
	void SetSubstepCount(int32_t SubstepCount);                                                                              // [0x13ae7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	void SetSelfCollisionEnabled(bool IsEnabled);                                                                            // [0x13ae710] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	void SetPhysXSceneCollisionEnabled(bool IsEnabled);                                                                      // [0x13ae500] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	void SetPerFrameCollisionCacheEnable(bool IsEnabled);                                                                    // [0x13ae3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);                                                             // [0x13ae470] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);                                                             // [0x13ae000] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetFrameRate
	void SetFrameRate(int32_t FrameRate);                                                                                    // [0x13adef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	void SetConstraintIterationCount(int32_t ConstraintIterationCount);                                                      // [0x13adde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	void SetConstrainSimulationTo2DPlane(bool IsEnabled);                                                                    // [0x13add50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	void SetConstrainPlaneOrigin(FVector Origin);                                                                            // [0x13adcc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	void SetConstrainPlaneNormal(FVector Normal);                                                                            // [0x13adc30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	void RemoveExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider);                        // [0x13adb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	void RemoveAllExplicitColliderMappings(UBaseVDComponent* VDComponent);                                                   // [0x13adad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	bool k2QuerySphereOverlaps(FVector Location, float Radius, TArray<UVDSimulatedParticle*>& Overlaps, TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // [0x13aeac0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	bool k2QueryBoxOverlaps(FVector Location, FVector HalfExtents, TArray<UVDSimulatedParticle*>& Overlaps, TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // [0x13ae8c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetSettings
	FVDSettings GetSettings();                                                                                               // [0x13ada30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	bool GetIsRunningOnWorkerThread();                                                                                       // [0x13ad8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	bool GetIsExplicitRigidBodyCollisionEnabled();                                                                           // [0x13ad7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	void GetDirectionalWindParameters(UBaseVDComponent* VDComponent, FVector& OutDirection, float& OutSpeed, float& OutGust); // [0x13ad600] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
	void AddExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider, bool IgnoreConvexShapes);  // [0x13acdd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDSimulationSettingsActor
/// Size: 0x0058 (0x000220 - 0x000278)
class AVDSimulationSettingsActor : public AInfo
{ 
public:
	FVDSettings                                        Settings;                                                   // 0x0220   (0x0058)  


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
	FVDSettings GetSettings();                                                                                               // [0x13ad9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDSkinnedRopeComponent
/// Size: 0x0030 (0x000710 - 0x000740)
class UVDSkinnedRopeComponent : public UVDRopeComponent
{ 
public:
	FComponentReference                                PoseableMeshRef;                                            // 0x0708   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0730   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSplineRopeComponent
/// Size: 0x0030 (0x000710 - 0x000740)
class UVDSplineRopeComponent : public UVDRopeComponent
{ 
public:
	FComponentReference                                SplineRef;                                                  // 0x0708   (0x0028)  
	bool                                               bAutoAttachToSplineEndPoints;                               // 0x0730:0 (0x0001)  
	bool                                               bStretchToSplineLength;                                     // 0x0730:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0731   (0x0003)  MISSED
	float                                              SplineLength;                                               // 0x0734   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0738   (0x0008)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDWindDirectionalSourceActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AVDWindDirectionalSourceActor : public AInfo
{ 
public:
	UVDWindDirectionalSourceComponent*                 Component;                                                  // 0x0220   (0x0008)  
};

/// Class /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent
/// Size: 0x0040 (0x000200 - 0x000240)
class UVDWindDirectionalSourceComponent : public USceneComponent
{ 
public:
	float                                              Radius;                                                     // 0x01F8   (0x0004)  
	float                                              Strength;                                                   // 0x01FC   (0x0004)  
	float                                              Speed;                                                      // 0x0200   (0x0004)  
	float                                              MinGustAmount;                                              // 0x0204   (0x0004)  
	float                                              MaxGustAmount;                                              // 0x0208   (0x0004)  
	float                                              MinGustDuration;                                            // 0x020C   (0x0004)  
	float                                              MaxGustDuration;                                            // 0x0210   (0x0004)  
	float                                              MinGustTransitionSpeed;                                     // 0x0214   (0x0004)  
	float                                              MaxGustTransitionSpeed;                                     // 0x0218   (0x0004)  
	float                                              MinSecondsBetweenGusts;                                     // 0x021C   (0x0004)  
	float                                              MaxSecondsBetweenGusts;                                     // 0x0220   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0224   (0x001C)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	void SetRadius(float InRadius);                                                                                          // [0x13ae610] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
	float GetCurrentGust();                                                                                                  // [0x13ad5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VICODynamicsSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class UVICODynamicsSettings : public UObject
{ 
public:
	int32_t                                            ReserveParticleBudget;                                      // 0x0028   (0x0004)  
	int32_t                                            ReserveConstraintBudget;                                    // 0x002C   (0x0004)  
	int32_t                                            ReserveVolumeConstraintBudget;                              // 0x0030   (0x0004)  
	int32_t                                            BroadphaseNumCellsToAllocate;                               // 0x0034   (0x0004)  
	float                                              BroadphaseCellDimension;                                    // 0x0038   (0x0004)  
	int32_t                                            BroadphaseMaxParticlesPerCell;                              // 0x003C   (0x0004)  
	int32_t                                            NumberOfThreadsToUse;                                       // 0x0040   (0x0004)  
	bool                                               EnableSelfCollision;                                        // 0x0044   (0x0001)  
	bool                                               EnablePhysXSceneCollision;                                  // 0x0045   (0x0001)  
	bool                                               PerformExtraCollisionResolutionLoop;                        // 0x0046   (0x0001)  
	bool                                               EnableExplicitRigidBodyCollision;                           // 0x0047   (0x0001)  
	int32_t                                            SimulationFramerate;                                        // 0x0048   (0x0004)  
	bool                                               RunSimulationOnWorkerThread;                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	int32_t                                            WorkerThreadCoreAffinity;                                   // 0x0050   (0x0004)  
	int32_t                                            SimulationIterations;                                       // 0x0054   (0x0004)  
	int32_t                                            ConstraintIterations;                                       // 0x0058   (0x0004)  
	bool                                               ConstrainSimulationTo2DPlane;                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FVector                                            PlaneOrigin;                                                // 0x0060   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x006C   (0x000C)  
	bool                                               bCachePerFrameResults;                                      // 0x0078:0 (0x0001)  
	bool                                               bCacheOnlyCollisionsWithStaticRigidBodies;                  // 0x0078:1 (0x0001)  
	bool                                               bCacheNonHitsAlso;                                          // 0x0078:2 (0x0001)  
	bool                                               DrawCollisionDebug;                                         // 0x0078:3 (0x0001)  
	bool                                               bShowOnScreenStats;                                         // 0x0078:4 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDCachedParticleStartLocation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVDCachedParticleStartLocation
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	bool                                               bIsAttached;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDCollision
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVDCollision
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.RopePiece
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRopePiece
{ 
	int32_t                                            StartParticleIndex;                                         // 0x0000   (0x0004)  
	int32_t                                            EndParticleIndex;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/VICODynamicsPlugin.VDCollisionSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVDCollisionSettings
{ 
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FCollisionResponse                                 CollisionResponse;                                          // 0x0008   (0x0030)  
	FName                                              CollisionProfileName;                                       // 0x0038   (0x0008)  
};

/// Struct /Script/VICODynamicsPlugin.VDParticleInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FVDParticleInfo
{ 
	bool                                               IsFree;                                                     // 0x0000:0 (0x0001)  
	bool                                               IsRigidBodyCollisionEnabled;                                // 0x0000:1 (0x0001)  
	bool                                               IsParticleCollisionEnabled;                                 // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	float                                              Mass;                                                       // 0x0014   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0018   (0x0004)  
};

/// Struct /Script/VICODynamicsPlugin.VDParticleAttachment
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVDParticleAttachment
{ 
	int32_t                                            ParticleIndex;                                              // 0x0000   (0x0004)  
	bool                                               AttachingToAnotherParticle;                                 // 0x0004   (0x0001)  
	bool                                               SimulateTensionForces;                                      // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	bool                                               IsRelative;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FComponentReference                                ComponentRef;                                               // 0x0018   (0x0028)  
	FName                                              Socket;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDSimulationTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FVDSimulationTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVDSettings
{ 
	bool                                               bOverride_ReserveParticleBudget;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_ReserveConstraintBudget;                          // 0x0000:1 (0x0001)  
	bool                                               bOverride_ReserveVolumeConstraintBudget;                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_BroadphaseNumCellsToAllocate;                     // 0x0000:3 (0x0001)  
	bool                                               bOverride_BroadphaseCellDimension;                          // 0x0000:4 (0x0001)  
	bool                                               bOverride_BroadphaseMaxParticlesPerCell;                    // 0x0000:5 (0x0001)  
	bool                                               bOverride_NumberOfThreadsToUse;                             // 0x0000:6 (0x0001)  
	bool                                               bOverride_EnableSelfCollision;                              // 0x0000:7 (0x0001)  
	bool                                               bOverride_EnablePhysXSceneCollision;                        // 0x0001:0 (0x0001)  
	bool                                               bOverride_PerformExtraCollisionResolutionLoop;              // 0x0001:1 (0x0001)  
	bool                                               bOverride_EnableExplicitRigidBodyCollision;                 // 0x0001:2 (0x0001)  
	bool                                               bOverride_SimulationFramerate;                              // 0x0001:3 (0x0001)  
	bool                                               bOverride_RunSimulationOnWorkerThread;                      // 0x0001:4 (0x0001)  
	bool                                               bOverride_WorkerThreadCoreAffinity;                         // 0x0001:5 (0x0001)  
	bool                                               bOverride_SimulationIterations;                             // 0x0001:6 (0x0001)  
	bool                                               bOverride_ConstraintIterations;                             // 0x0001:7 (0x0001)  
	bool                                               bOverride_ConstrainSimulationTo2DPlane;                     // 0x0002:0 (0x0001)  
	bool                                               bOverride_PlaneOrigin;                                      // 0x0002:1 (0x0001)  
	bool                                               bOverride_PlaneNormal;                                      // 0x0002:2 (0x0001)  
	bool                                               bOverride_CachePerFrameResults;                             // 0x0002:3 (0x0001)  
	bool                                               bOverride_CacheOnlyCollisionsWithStaticRigidBodies;         // 0x0002:4 (0x0001)  
	bool                                               bOverride_CacheNonHitsAlso;                                 // 0x0002:5 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            ReserveParticleBudget;                                      // 0x0004   (0x0004)  
	int32_t                                            ReserveConstraintBudget;                                    // 0x0008   (0x0004)  
	int32_t                                            ReserveVolumeConstraintBudget;                              // 0x000C   (0x0004)  
	int32_t                                            BroadphaseNumCellsToAllocate;                               // 0x0010   (0x0004)  
	float                                              BroadphaseCellDimension;                                    // 0x0014   (0x0004)  
	int32_t                                            BroadphaseMaxParticlesPerCell;                              // 0x0018   (0x0004)  
	int32_t                                            NumberOfThreadsToUse;                                       // 0x001C   (0x0004)  
	bool                                               EnableSelfCollision;                                        // 0x0020   (0x0001)  
	bool                                               EnablePhysXSceneCollision;                                  // 0x0021   (0x0001)  
	bool                                               PerformExtraCollisionResolutionLoop;                        // 0x0022   (0x0001)  
	bool                                               EnableExplicitRigidBodyCollision;                           // 0x0023   (0x0001)  
	int32_t                                            SimulationFramerate;                                        // 0x0024   (0x0004)  
	bool                                               RunSimulationOnWorkerThread;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            WorkerThreadCoreAffinity;                                   // 0x002C   (0x0004)  
	int32_t                                            SimulationIterations;                                       // 0x0030   (0x0004)  
	int32_t                                            ConstraintIterations;                                       // 0x0034   (0x0004)  
	bool                                               ConstrainSimulationTo2DPlane;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FVector                                            PlaneOrigin;                                                // 0x003C   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x0048   (0x000C)  
	bool                                               bCachePerFrameResults;                                      // 0x0054:0 (0x0001)  
	bool                                               bCacheOnlyCollisionsWithStaticRigidBodies;                  // 0x0054:1 (0x0001)  
	bool                                               bCacheNonHitsAlso;                                          // 0x0054:2 (0x0001)  
	bool                                               DrawCollisionDebug;                                         // 0x0054:3 (0x0001)  
	bool                                               bShowOnScreenStats;                                         // 0x0054:4 (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

