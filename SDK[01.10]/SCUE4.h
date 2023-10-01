/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SCUE4.

/// Class /Script/SCUE4.SCLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USCLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SCUE4.SCUE4Settings
/// Size: 0x0010 (0x000028 - 0x000038)
class USCUE4Settings : public UObject
{ 
public:
	FString                                            KeyGeneratorPath;                                           // 0x0028   (0x0010)  
};

/// Class /Script/SCUE4.SafeGameInstance
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class USafeGameInstance : public UGameInstance
{ 
public:
};

/// Class /Script/SCUE4.SafeGameInstanceSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class USafeGameInstanceSubsystem : public UGameInstanceSubsystem
{ 
public:
};

/// Struct /Script/SCUE4.SafeColor
/// Size: 0x0098 (0x000000 - 0x000098)
struct FSafeColor
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            TrueR;                                                      // 0x0010   (0x0010)  
	FString                                            TrueG;                                                      // 0x0020   (0x0010)  
	FString                                            TrueB;                                                      // 0x0030   (0x0010)  
	FString                                            TrueA;                                                      // 0x0040   (0x0010)  
	FString                                            ShiftR;                                                     // 0x0050   (0x0010)  
	FString                                            ShiftG;                                                     // 0x0060   (0x0010)  
	FString                                            ShiftB;                                                     // 0x0070   (0x0010)  
	FString                                            ShiftA;                                                     // 0x0080   (0x0010)  
	char                                               Flag;                                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeVector4D
/// Size: 0x0098 (0x000000 - 0x000098)
struct FSafeVector4D
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            TrueX;                                                      // 0x0010   (0x0010)  
	FString                                            TrueY;                                                      // 0x0020   (0x0010)  
	FString                                            TrueZ;                                                      // 0x0030   (0x0010)  
	FString                                            TrueW;                                                      // 0x0040   (0x0010)  
	FString                                            ShiftX;                                                     // 0x0050   (0x0010)  
	FString                                            ShiftY;                                                     // 0x0060   (0x0010)  
	FString                                            ShiftZ;                                                     // 0x0070   (0x0010)  
	FString                                            ShiftW;                                                     // 0x0080   (0x0010)  
	char                                               Flag;                                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeVector2D
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSafeVector2D
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            TrueX;                                                      // 0x0010   (0x0010)  
	FString                                            TrueY;                                                      // 0x0020   (0x0010)  
	FString                                            ShiftX;                                                     // 0x0030   (0x0010)  
	FString                                            ShiftY;                                                     // 0x0040   (0x0010)  
	char                                               Flag;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeText
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeText
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeFloat
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeFloat
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeName
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeName
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeBool
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeBool
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeTransform
/// Size: 0x0168 (0x000000 - 0x000168)
struct FSafeTransform
{ 
	FSafeVector3D                                      Scale;                                                      // 0x0000   (0x0078)  
	FSafeVector3D                                      position;                                                   // 0x0078   (0x0078)  
	FSafeRotator                                       Rotation;                                                   // 0x00F0   (0x0078)  
};

/// Struct /Script/SCUE4.SafeRotator
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSafeRotator
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            TrueX;                                                      // 0x0010   (0x0010)  
	FString                                            TrueY;                                                      // 0x0020   (0x0010)  
	FString                                            TrueZ;                                                      // 0x0030   (0x0010)  
	FString                                            ShiftX;                                                     // 0x0040   (0x0010)  
	FString                                            ShiftY;                                                     // 0x0050   (0x0010)  
	FString                                            ShiftZ;                                                     // 0x0060   (0x0010)  
	char                                               Flag;                                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeVector3D
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSafeVector3D
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            TrueX;                                                      // 0x0010   (0x0010)  
	FString                                            TrueY;                                                      // 0x0020   (0x0010)  
	FString                                            TrueZ;                                                      // 0x0030   (0x0010)  
	FString                                            ShiftX;                                                     // 0x0040   (0x0010)  
	FString                                            ShiftY;                                                     // 0x0050   (0x0010)  
	FString                                            ShiftZ;                                                     // 0x0060   (0x0010)  
	char                                               Flag;                                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeByte
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeByte
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeInt
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeInt
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SCUE4.SafeString
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSafeString
{ 
	FString                                            Internal;                                                   // 0x0000   (0x0010)  
	FString                                            Base;                                                       // 0x0010   (0x0010)  
	FString                                            Shift;                                                      // 0x0020   (0x0010)  
	char                                               Flag;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

