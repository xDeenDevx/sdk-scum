/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DcxVehicle.

/// Class /Script/DcxVehicle.DcxVehicle
/// Size: 0x0010 (0x000280 - 0x000290)
class ADcxVehicle : public APawn
{ 
public:
	USkeletalMeshComponent*                            Mesh;                                                       // 0x0280   (0x0008)  
	UDcxVehicleWheelsComponent*                        VehicleWheels;                                              // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicle.GetVehicleWheels
	UDcxVehicleWheelsComponent* GetVehicleWheels();                                                                          // [0x934c60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicle.GetMesh
	USkeletalMeshComponent* GetMesh();                                                                                       // [0x9347a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
	void DcxVehicleSetBasisVectors(FVector& Up, FVector& Forward);                                                           // [0x933de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/DcxVehicle.DcxVehicle4W
/// Size: 0x0000 (0x000290 - 0x000290)
class ADcxVehicle4W : public ADcxVehicle
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleAnimInstance
/// Size: 0x0790 (0x0002C0 - 0x000A50)
class UDcxVehicleAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x780];                                     // 0x02C0   (0x0780)  MISSED
	UDcxVehicleWheelsComponent*                        VehicleWheels;                                              // 0x0A40   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0A48   (0x0008)  MISSED
};

/// Class /Script/DcxVehicle.DcxVehicleWheelsComponent
/// Size: 0x0138 (0x000138 - 0x000270)
class UDcxVehicleWheelsComponent : public UPawnMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0138   (0x0038)  MISSED
	float                                              ChassisMass;                                                // 0x0170   (0x0004)  
	FVector                                            InertiaTensorScale;                                         // 0x0174   (0x000C)  
	TArray<FDcxVehicleWheelConfiguration>              WheelConfigurations;                                        // 0x0180   (0x0010)  
	FDcxVehicleTireLoadFilterData                      TireLoadFilter;                                             // 0x0190   (0x0010)  
	bool                                               bUseAvoidance;                                              // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              AvoidanceWeight;                                            // 0x01A4   (0x0004)  
	int32_t                                            AvoidanceUID;                                               // 0x01A8   (0x0004)  
	FNavAvoidanceMask                                  AvoidanceGroup;                                             // 0x01AC   (0x0004)  
	FNavAvoidanceMask                                  GroupsToAvoid;                                              // 0x01B0   (0x0004)  
	FNavAvoidanceMask                                  GroupsToIgnore;                                             // 0x01B4   (0x0004)  
	float                                              ThresholdLongitudinalSpeed;                                 // 0x01B8   (0x0004)  
	int32_t                                            LowForwardSpeedSubStepCount;                                // 0x01BC   (0x0004)  
	int32_t                                            HighForwardSpeedSubStepCount;                               // 0x01C0   (0x0004)  
	float                                              DragCoefficient;                                            // 0x01C4   (0x0004)  
	float                                              DragArea;                                                   // 0x01C8   (0x0004)  
	FDcxVehicleDriveInputRate                          ThrottleRate;                                               // 0x01CC   (0x0008)  
	FDcxVehicleDriveInputRate                          BrakeRate;                                                  // 0x01D4   (0x0008)  
	FDcxVehicleDriveInputRate                          HandbrakeRate;                                              // 0x01DC   (0x0008)  
	FDcxVehicleDriveInputRate                          SteerRate;                                                  // 0x01E4   (0x0008)  
	float                                              AvoidanceRadius;                                            // 0x01EC   (0x0004)  
	float                                              AvoidanceHeight;                                            // 0x01F0   (0x0004)  
	float                                              AvoidanceConsiderationRadius;                               // 0x01F4   (0x0004)  
	float                                              AvoidanceThrottleStep;                                      // 0x01F8   (0x0004)  
	float                                              AvoidanceBrakeStep;                                         // 0x01FC   (0x0004)  
	float                                              AvoidanceSteerStep;                                         // 0x0200   (0x0004)  
	bool                                               bRecreateRequired;                                          // 0x0204   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0205   (0x0003)  MISSED
	UDcxVehicleWheelsRawInput*                         RawInput;                                                   // 0x0208   (0x0008)  
	TArray<float>                                      SmoothAnalogControls;                                       // 0x0210   (0x0010)  
	FDcxVehicleDriveState                              ReplicatedState;                                            // 0x0220   (0x0018)  
	bool                                               bWasAvoidanceUpdated;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	FVector                                            AvoidanceVelocity;                                          // 0x023C   (0x000C)  
	FVector                                            AvoidanceLockVelocity;                                      // 0x0248   (0x000C)  
	float                                              AvoidanceLockTimer;                                         // 0x0254   (0x0004)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0258   (0x0018)  MISSED


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
	void SetWheelOffset(int32_t WheelIndex, FVector Offset);                                                                 // [0x9366a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
	void SetWheelData(int32_t WheelIndex, FDcxVehicleWheelData NewWheelData);                                                // [0x9365b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetTire
	void SetTire(int32_t WheelId, UDcxVehicleTire* NewTire);                                                                 // [0x9364e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
	void SetSuspensionData(int32_t WheelIndex, FDcxVehicleSuspensionData NewSuspensionData);                                 // [0x9362a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
	void SetGroupsToIgnore(FNavAvoidanceMask& Mask);                                                                         // [0x935eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
	void SetGroupsToAvoid(FNavAvoidanceMask& Mask);                                                                          // [0x935e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
	void SetChassisMass(float Mass);                                                                                         // [0x935550] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
	void SetAvoidanceGroup(FNavAvoidanceMask& Mask);                                                                         // [0x935370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
	void ServerUpdateState(FDcxAnalogControlArray AnalogControls, FDcxGear CurrentGear, FDcxGear TargetGear);                // [0x935220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.IsWheelInAir
	bool IsWheelInAir(int32_t WheelIndex);                                                                                   // [0x935180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
	bool IsWheelDisabled(int32_t WheelIndex);                                                                                // [0x9350e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
	bool GetWheelState(int32_t WheelIndex, FDcxVehicleWheelState& WheelState);                                               // [0x934f30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
	float GetWheelRotationSpeed(int32_t WheelIndex);                                                                         // [0x934e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
	float GetWheelRotationAngle(int32_t WheelIndex);                                                                         // [0x934df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
	FVector GetWheelOffset(int32_t WheelIndex);                                                                              // [0x934d40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
	FDcxVehicleWheelData GetWheelData(int32_t WheelIndex);                                                                   // [0x934c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetTire
	UDcxVehicleTire* GetTire(int32_t WheelIndex);                                                                            // [0x934b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
	FDcxVehicleSuspensionData GetSuspensionData(int32_t WheelIndex);                                                         // [0x9349f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
	UDcxVehicleWheelsRawInput* GetRawInput();                                                                                // [0x934830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
	int32_t GetNumWheels();                                                                                                  // [0x9347d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
	float GetForwardSpeed();                                                                                                 // [0x9345c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
	float GetChassisMass();                                                                                                  // [0x934250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
	FName GetBoneName(int32_t WheelIndex);                                                                                   // [0x9340f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
	float GetAnalogControl(char Control);                                                                                    // [0x934060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
	void EnableWheel(int32_t WheelIndex);                                                                                    // [0x933fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
	void EnableAvoidance(bool bEnabled);                                                                                     // [0x933f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
	void DisableWheel(int32_t WheelIndex);                                                                                   // [0x933eb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DcxVehicle.DcxVehicleDriveComponent
/// Size: 0x0178 (0x000270 - 0x0003E8)
class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{ 
public:
	FDcxVehicleEngineData                              EngineData;                                                 // 0x0270   (0x00A0)  
	FDcxVehicleGearboxData                             GearboxData;                                                // 0x0310   (0x0030)  
	FDcxVehicleClutchData                              ClutchData;                                                 // 0x0340   (0x0010)  
	bool                                               bAutoReverse;                                               // 0x0350   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              WrongDirectionThreshold;                                    // 0x0354   (0x0004)  
	bool                                               bAutoBrake;                                                 // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0359   (0x0003)  MISSED
	float                                              StopThreshold;                                              // 0x035C   (0x0004)  
	FRuntimeFloatCurve                                 SteerCurve;                                                 // 0x0360   (0x0088)  


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
	void SetTargetGear(int32_t NewGear, bool bImmediate);                                                                    // [0x936390] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetStickyFrictionEnabled
	void SetStickyFrictionEnabled(bool Value);                                                                               // [0x936210] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
	void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox> NewGearboxType);                                                     // [0x935da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
	void SetGearboxData(FDcxVehicleGearboxData NewGearboxData);                                                              // [0x935c70] Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
	void SetEngineRotationSpeed(float RPM);                                                                                  // [0x935ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetEngineData
	void SetEngineData(FDcxVehicleEngineData NewEngineData);                                                                 // [0x9359a0] Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.SetClutchData
	void SetClutchData(FDcxVehicleClutchData NewClutchData);                                                                 // [0x935650] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
	int32_t GetTargetGear();                                                                                                 // [0x934aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetStickyFrictionEnabled
	bool GetStickyFrictionEnabled();                                                                                         // [0x9349c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
	TEnumAsByte<EDcxVehicleGearbox> GetGearboxType();                                                                        // [0x934710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
	FDcxVehicleGearboxData GetGearboxData();                                                                                 // [0x934650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
	float GetEngineRotationSpeed();                                                                                          // [0x934590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetEngineData
	FDcxVehicleEngineData GetEngineData();                                                                                   // [0x934440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
	int32_t GetCurrentGear();                                                                                                // [0x9342f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent.GetClutchData
	FDcxVehicleClutchData GetClutchData();                                                                                   // [0x9342b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleDriveComponent4W
/// Size: 0x0020 (0x0003E8 - 0x000408)
class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{ 
public:
	FDcxVehicleDifferentialData4W                      DifferentialData;                                           // 0x03E8   (0x001C)  
	float                                              AckermannGeometryAccuracy;                                  // 0x0404   (0x0004)  


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
	void SetDifferentialData(FDcxVehicleDifferentialData4W NewDifferentialData);                                             // [0x9356e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
	UDcxVehicleDriveRawInput4W* GetRawInput4W();                                                                             // [0x934800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
	FDcxVehicleDifferentialData4W GetDifferentialData();                                                                     // [0x934320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleDriveComponentNW
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleDriveComponentTank
/// Size: 0x0008 (0x0003E8 - 0x0003F0)
class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{ 
public:
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      DriveModel;                                                 // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
	void SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel);                                          // [0x935780] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
	UDcxVehicleDriveRawInputTank* GetRawInputTank();                                                                         // [0x9348c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
	TEnumAsByte<EDcxVehicleDriveControlModelTank> GetDriveModel();                                                           // [0x934370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleWheelsRawInput
/// Size: 0x0018 (0x000028 - 0x000040)
class UDcxVehicleWheelsRawInput : public UObject
{ 
public:
	int32_t                                            ThrottleIndex;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<float>                                      RawAnalogControls;                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
	void SetThrottle(float Throttle);                                                                                        // [0x936460] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
	float GetThrottle();                                                                                                     // [0x934ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleDriveRawInput
/// Size: 0x0008 (0x000040 - 0x000048)
class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{ 
public:
	int32_t                                            ClutchIndex;                                                // 0x0040   (0x0004)  
	bool                                               bGearUp;                                                    // 0x0044   (0x0001)  
	bool                                               bGearDown;                                                  // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
	void SetGearUp(bool bGearUpPressed);                                                                                     // [0x935be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
	void SetGearDown(bool bGearDownPressed);                                                                                 // [0x935b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.SetClutch
	void SetClutch(float Clutch);                                                                                            // [0x9355d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
	bool GetGearUp();                                                                                                        // [0x934620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
	bool GetGearDown();                                                                                                      // [0x9345f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleDriveRawInput.GetClutch
	float GetClutch();                                                                                                       // [0x934280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleDriveRawInput4W
/// Size: 0x0000 (0x000048 - 0x000048)
class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleDriveRawInputNW
/// Size: 0x0000 (0x000048 - 0x000048)
class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleDriveRawInputTank
/// Size: 0x0008 (0x000048 - 0x000050)
class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/DcxVehicle.DcxVehicleNoDrive
/// Size: 0x0000 (0x000290 - 0x000290)
class ADcxVehicleNoDrive : public ADcxVehicle
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleNoDriveComponent
/// Size: 0x0008 (0x000270 - 0x000278)
class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{ 
public:
	bool                                               bUseRawInput;                                               // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0271   (0x0003)  MISSED
	float                                              MaxDriveTorque;                                             // 0x0274   (0x0004)  


	/// Functions
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
	void SetSteerAngle(int32_t WheelIndex, float SteerAngle);                                                                // [0x936140] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
	void SetDriveTorque(int32_t WheelIndex, float DriveTorque);                                                              // [0x935800] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
	void SetBrakeTorque(int32_t WheelIndex, float BrakeTorque);                                                              // [0x935480] Final|Native|Public|BlueprintCallable 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
	float GetSteerAngle(int32_t WheelIndex);                                                                                 // [0x934920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
	UDcxVehicleNoDriveRawInput* GetRawInputND();                                                                             // [0x934860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
	float GetDriveTorque(int32_t WheelIndex);                                                                                // [0x9343a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
	float GetBrakeTorque(int32_t WheelIndex);                                                                                // [0x9341b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DcxVehicle.DcxVehicleNoDriveRawInput
/// Size: 0x0000 (0x000040 - 0x000040)
class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleNW
/// Size: 0x0000 (0x000290 - 0x000290)
class ADcxVehicleNW : public ADcxVehicle
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleTank
/// Size: 0x0000 (0x000290 - 0x000290)
class ADcxVehicleTank : public ADcxVehicle
{ 
public:
};

/// Class /Script/DcxVehicle.DcxVehicleTire
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UDcxVehicleTire : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0030   (0x0004)  MISSED
	float                                              LateralStiffnessX;                                          // 0x0034   (0x0004)  
	float                                              LateralStiffnessY;                                          // 0x0038   (0x0004)  
	float                                              LongitudinalStiffnessPerUnitGravity;                        // 0x003C   (0x0004)  
	float                                              CamberStiffnessPerUnitGravity;                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FRuntimeFloatCurve                                 FrictionVsSlipGraph;                                        // 0x0048   (0x0088)  
	TArray<FDcxDrivableSurfaceToTireFrictionPair>      DrivableSurfaceToTireFrictionPairs;                         // 0x00D0   (0x0010)  
};

/// Struct /Script/DcxVehicle.DcxAnalogControlArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDcxAnalogControlArray
{ 
	TArray<float>                                      Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/DcxVehicle.DcxAnimNodeWheelSimulator
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FDcxAnimNodeWheelSimulator : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Struct /Script/DcxVehicle.DcxGear
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDcxGear
{ 
	int32_t                                            GearNum;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxMath
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDcxMath
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DcxVehicle.DcxVehicleAnimInstanceProxy
/// Size: 0x0010 (0x000770 - 0x000780)
struct FDcxVehicleAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0770   (0x0010)  MISSED
};

/// Struct /Script/DcxVehicle.DcxVehicleClutchData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDcxVehicleClutchData
{ 
	float                                              BitePoint;                                                  // 0x0000   (0x0004)  
	float                                              Strength;                                                   // 0x0004   (0x0004)  
	TEnumAsByte<EDcxVehicleClutchAccuracyMode>         AccuracyMode;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            EstimateIterations;                                         // 0x000C   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleDifferentialData4W
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDcxVehicleDifferentialData4W
{ 
	TEnumAsByte<EDcxVehicleDifferential4W>             DifferentialType;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FrontRearSplit;                                             // 0x0004   (0x0004)  
	float                                              FrontLeftRightSplit;                                        // 0x0008   (0x0004)  
	float                                              RearLeftRightSplit;                                         // 0x000C   (0x0004)  
	float                                              CenterBias;                                                 // 0x0010   (0x0004)  
	float                                              FrontBias;                                                  // 0x0014   (0x0004)  
	float                                              RearBias;                                                   // 0x0018   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleDriveInputRate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDcxVehicleDriveInputRate
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleDriveState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDcxVehicleDriveState
{ 
	FDcxAnalogControlArray                             AnalogControls;                                             // 0x0000   (0x0010)  
	FDcxGear                                           CurrentGear;                                                // 0x0010   (0x0004)  
	FDcxGear                                           TargetGear;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleEngineData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDcxVehicleEngineData
{ 
	FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)  
	float                                              MOI;                                                        // 0x0088   (0x0004)  
	float                                              IdleRPM;                                                    // 0x008C   (0x0004)  
	float                                              MaxRPM;                                                     // 0x0090   (0x0004)  
	float                                              DampingRateFullThrottle;                                    // 0x0094   (0x0004)  
	float                                              DampingRateZeroThrottleClutchEngaged;                       // 0x0098   (0x0004)  
	float                                              DampingRateZeroThrottleClutchDisengaged;                    // 0x009C   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleGearboxData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDcxVehicleGearboxData
{ 
	TEnumAsByte<EDcxVehicleGearbox>                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FinalRatio;                                                 // 0x0004   (0x0004)  
	float                                              SwitchTime;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FDcxVehicleGearData>                        ForwardGears;                                               // 0x0010   (0x0010)  
	float                                              ReverseGearRatio;                                           // 0x0020   (0x0004)  
	float                                              Latency;                                                    // 0x0024   (0x0004)  
	float                                              NeutralGearUpRatio;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/DcxVehicle.DcxVehicleGearData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDcxVehicleGearData
{ 
	float                                              Ratio;                                                      // 0x0000   (0x0004)  
	float                                              DownRatio;                                                  // 0x0004   (0x0004)  
	float                                              UpRatio;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleSuspensionData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDcxVehicleSuspensionData
{ 
	float                                              NaturalFrequency;                                           // 0x0000   (0x0004)  
	float                                              SpringDamperRatio;                                          // 0x0004   (0x0004)  
	float                                              MaxCompression;                                             // 0x0008   (0x0004)  
	float                                              MaxDroop;                                                   // 0x000C   (0x0004)  
	float                                              ForceOffset;                                                // 0x0010   (0x0004)  
	float                                              CamberAtRest;                                               // 0x0014   (0x0004)  
	float                                              CamberAtMaxCompression;                                     // 0x0018   (0x0004)  
	float                                              CamberAtMaxDroop;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDcxDrivableSurfaceToTireFrictionPair
{ 
	UPhysicalMaterial*                                 SurfaceMaterial;                                            // 0x0000   (0x0008)  
	float                                              FrictionScale;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/DcxVehicle.DcxVehicleTireLoadFilterData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDcxVehicleTireLoadFilterData
{ 
	float                                              MinNormalizedLoad;                                          // 0x0000   (0x0004)  
	float                                              MinFilteredNormalizedLoad;                                  // 0x0004   (0x0004)  
	float                                              MaxNormalizedLoad;                                          // 0x0008   (0x0004)  
	float                                              MaxFilteredNormalizedLoad;                                  // 0x000C   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleWheelData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDcxVehicleWheelData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Width;                                                      // 0x0004   (0x0004)  
	float                                              Mass;                                                       // 0x0008   (0x0004)  
	float                                              DampingRate;                                                // 0x000C   (0x0004)  
	float                                              MaxBrakeTorque;                                             // 0x0010   (0x0004)  
	float                                              MaxHandBrakeTorque;                                         // 0x0014   (0x0004)  
	float                                              MaxSteer;                                                   // 0x0018   (0x0004)  
	float                                              ToeAngle;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/DcxVehicle.DcxVehicleWheelConfiguration
/// Size: 0x0078 (0x000000 - 0x000078)
struct FDcxVehicleWheelConfiguration
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	FVector                                            Offset;                                                     // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UStaticMesh*                                       CollisionMesh;                                              // 0x0018   (0x0008)  
	bool                                               bUsePresetShape;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FDcxVehicleWheelData                               WheelData;                                                  // 0x0024   (0x0020)  
	FDcxVehicleSuspensionData                          SuspensionData;                                             // 0x0044   (0x0020)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	UDcxVehicleTire*                                   Tire;                                                       // 0x0068   (0x0008)  
	bool                                               bIsDriven;                                                  // 0x0070   (0x0001)  
	TEnumAsByte<EDcxVehicleWheelSweep>                 SweepType;                                                  // 0x0071   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Struct /Script/DcxVehicle.DcxVehicleWheelState
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FDcxVehicleWheelState
{ 
	FVector                                            SuspensionLineStart;                                        // 0x0000   (0x000C)  
	FVector                                            SuspensionLineDirection;                                    // 0x000C   (0x000C)  
	float                                              SuspensionLineLength;                                       // 0x0018   (0x0004)  
	bool                                               bIsInAir;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	AActor*                                            TireContactActor;                                           // 0x0020   (0x0008)  
	UPhysicalMaterial*                                 TireSurfaceMaterial;                                        // 0x0028   (0x0008)  
	FVector                                            TireContactPoint;                                           // 0x0030   (0x000C)  
	FVector                                            TireContactNormal;                                          // 0x003C   (0x000C)  
	float                                              TireFriction;                                               // 0x0048   (0x0004)  
	float                                              SuspensionJounce;                                           // 0x004C   (0x0004)  
	float                                              SuspensionSpringForce;                                      // 0x0050   (0x0004)  
	FVector                                            TireLongitudinalDirection;                                  // 0x0054   (0x000C)  
	FVector                                            TireLateralDirection;                                       // 0x0060   (0x000C)  
	float                                              LongitudinalSlip;                                           // 0x006C   (0x0004)  
	float                                              LateralSlip;                                                // 0x0070   (0x0004)  
	float                                              SteerAngle;                                                 // 0x0074   (0x0004)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0078   (0x0038)  MISSED
};

/// Enum /Script/DcxVehicle.EDcxVehicleClutchAccuracyMode
/// Size: 0x03
enum EDcxVehicleClutchAccuracyMode : uint8_t
{
	EDcxVehicleClutchAccuracyMode__Estimate                                          = 0,
	EDcxVehicleClutchAccuracyMode__BestPossible                                      = 1,
	EDcxVehicleClutchAccuracyMode__EDcxVehicleClutchAccuracyMode_MAX                 = 2
};

/// Enum /Script/DcxVehicle.EDcxVehicleDifferential4W
/// Size: 0x07
enum EDcxVehicleDifferential4W : uint8_t
{
	EDcxVehicleDifferential4W__LS_4WD                                                = 0,
	EDcxVehicleDifferential4W__LS_FrontWD                                            = 1,
	EDcxVehicleDifferential4W__LS_RearWD                                             = 2,
	EDcxVehicleDifferential4W__Open_4WD                                              = 3,
	EDcxVehicleDifferential4W__Open_FrontWD                                          = 4,
	EDcxVehicleDifferential4W__Open_RearWD                                           = 5,
	EDcxVehicleDifferential4W__EDcxVehicleDifferential4W_MAX                         = 6
};

/// Enum /Script/DcxVehicle.EDcxVehicleWheelOrder4W
/// Size: 0x05
enum EDcxVehicleWheelOrder4W : uint8_t
{
	EDcxVehicleWheelOrder4W__FrontLeft                                               = 0,
	EDcxVehicleWheelOrder4W__FrontRight                                              = 1,
	EDcxVehicleWheelOrder4W__RearLeft                                                = 2,
	EDcxVehicleWheelOrder4W__RearRight                                               = 3,
	EDcxVehicleWheelOrder4W__EDcxVehicleWheelOrder4W_MAX                             = 4
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControl4W
/// Size: 0x07
enum EDcxVehicleDriveControl4W : uint8_t
{
	EDcxVehicleDriveControl4W__Throttle                                              = 0,
	EDcxVehicleDriveControl4W__Brake                                                 = 1,
	EDcxVehicleDriveControl4W__Handbrake                                             = 2,
	EDcxVehicleDriveControl4W__Steer                                                 = 3,
	EDcxVehicleDriveControl4W__Clutch                                                = 4,
	EDcxVehicleDriveControl4W__NumControls                                           = 5,
	EDcxVehicleDriveControl4W__EDcxVehicleDriveControl4W_MAX                         = 6
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlNW
/// Size: 0x07
enum EDcxVehicleDriveControlNW : uint8_t
{
	EDcxVehicleDriveControlNW__Throttle                                              = 0,
	EDcxVehicleDriveControlNW__Brake                                                 = 1,
	EDcxVehicleDriveControlNW__Handbrake                                             = 2,
	EDcxVehicleDriveControlNW__Steer                                                 = 3,
	EDcxVehicleDriveControlNW__Clutch                                                = 4,
	EDcxVehicleDriveControlNW__NumControls                                           = 5,
	EDcxVehicleDriveControlNW__EDcxVehicleDriveControlNW_MAX                         = 6
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlModelTank
/// Size: 0x03
enum EDcxVehicleDriveControlModelTank : uint8_t
{
	EDcxVehicleDriveControlModelTank__Standard                                       = 0,
	EDcxVehicleDriveControlModelTank__Special                                        = 1,
	EDcxVehicleDriveControlModelTank__EDcxVehicleDriveControlModelTank_MAX           = 2
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlTank
/// Size: 0x08
enum EDcxVehicleDriveControlTank : uint8_t
{
	EDcxVehicleDriveControlTank__Throttle                                            = 0,
	EDcxVehicleDriveControlTank__BrakeLeft                                           = 1,
	EDcxVehicleDriveControlTank__BrakeRight                                          = 2,
	EDcxVehicleDriveControlTank__ThrustLeft                                          = 3,
	EDcxVehicleDriveControlTank__ThrustRight                                         = 4,
	EDcxVehicleDriveControlTank__Clutch                                              = 5,
	EDcxVehicleDriveControlTank__NumControls                                         = 6,
	EDcxVehicleDriveControlTank__EDcxVehicleDriveControlTank_MAX                     = 7
};

/// Enum /Script/DcxVehicle.EDcxVehicleGearbox
/// Size: 0x04
enum EDcxVehicleGearbox : uint8_t
{
	EDcxVehicleGearbox__Automatic                                                    = 0,
	EDcxVehicleGearbox__SemiAutomatic                                                = 1,
	EDcxVehicleGearbox__Manual                                                       = 2,
	EDcxVehicleGearbox__EDcxVehicleGearbox_MAX                                       = 3
};

/// Enum /Script/DcxVehicle.EDcxVehicleNoDriveControl
/// Size: 0x05
enum EDcxVehicleNoDriveControl : uint8_t
{
	EDcxVehicleNoDriveControl__Throttle                                              = 0,
	EDcxVehicleNoDriveControl__Brake                                                 = 1,
	EDcxVehicleNoDriveControl__Steer                                                 = 2,
	EDcxVehicleNoDriveControl__NumControls                                           = 3,
	EDcxVehicleNoDriveControl__EDcxVehicleNoDriveControl_MAX                         = 4
};

/// Enum /Script/DcxVehicle.EDcxVehicleWheelSweep
/// Size: 0x04
enum EDcxVehicleWheelSweep : uint8_t
{
	EDcxVehicleWheelSweep__Both                                                      = 0,
	EDcxVehicleWheelSweep__Simple                                                    = 1,
	EDcxVehicleWheelSweep__Complex                                                   = 2,
	EDcxVehicleWheelSweep__EDcxVehicleWheelSweep_MAX                                 = 3
};

