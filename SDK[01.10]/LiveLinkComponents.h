/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkComponents.

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class ULiveLinkComponentController : public UActorComponent
{ 
public:
	FLiveLinkSubjectRepresentation                     SubjectRepresentation;                                      // 0x00B0   (0x0010)  
	TMap<UClass*, ULiveLinkControllerBase*>            ControllerMap;                                              // 0x00C0   (0x0050)  
	bool                                               bUpdateInEditor;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x0118   (0x0010)  
	FComponentReference                                ComponentToControl;                                         // 0x0128   (0x0028)  
	bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                      // 0x0150   (0x0001)  
	bool                                               bEvaluateLiveLink;                                          // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class ULiveLinkComponentSettings : public UObject
{ 
public:
	TMap<UClass*, UClass*>                             DefaultControllerForRole;                                   // 0x0028   (0x0050)  
};

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkControllerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0x000040 - 0x000040)
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
public:
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (0x000040 - 0x000048)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
public:
	FLiveLinkTransformControllerData                   TransformData;                                              // 0x0040   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (0x000000 - 0x000006)
struct FLiveLinkTransformControllerData
{ 
	bool                                               bWorldTransform;                                            // 0x0000   (0x0001)  
	bool                                               bUseLocation;                                               // 0x0001   (0x0001)  
	bool                                               bUseRotation;                                               // 0x0002   (0x0001)  
	bool                                               bUseScale;                                                  // 0x0003   (0x0001)  
	bool                                               bSweep;                                                     // 0x0004   (0x0001)  
	bool                                               bTeleport;                                                  // 0x0005   (0x0001)  
};

