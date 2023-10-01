/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkControlRig.

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_LiveLinkBase : FRigUnit
{ 
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_LiveLinkEvaluteFrameTransform : FRigUnit_LiveLinkBase
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0008)  
	bool                                               bDrawDebug;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         DebugDrawOffset;                                            // 0x0030   (0x0030)  
	FTransform                                         Transform;                                                  // 0x0060   (0x0030)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_LiveLinkGetParameterValueByName : FRigUnit_LiveLinkBase
{ 
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0008   (0x0018)  
	FName                                              ParameterName;                                              // 0x0020   (0x0008)  
	float                                              Value;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_LiveLinkGetTransformByName : FRigUnit_LiveLinkBase
{ 
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0008   (0x0018)  
	FName                                              TransformName;                                              // 0x0020   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_LiveLinkEvaluteFrameAnimation : FRigUnit_LiveLinkBase
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0008)  
	bool                                               bDrawDebug;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         DebugDrawOffset;                                            // 0x0030   (0x0030)  
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0060   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

