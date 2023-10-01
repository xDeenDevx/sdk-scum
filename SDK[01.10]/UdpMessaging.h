/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UdpMessaging.

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UUdpMessagingSettings : public UObject
{ 
public:
	bool                                               EnabledByDefault;                                           // 0x0028   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0029   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              MaxSendRate;                                                // 0x002C   (0x0004)  
	uint32_t                                           AutoRepairAttemptLimit;                                     // 0x0030   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            UnicastEndpoint;                                            // 0x0038   (0x0010)  
	FString                                            MulticastEndpoint;                                          // 0x0048   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0058   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	TArray<FString>                                    StaticEndpoints;                                            // 0x0060   (0x0010)  
	bool                                               EnableTunnel;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FString                                            TunnelUnicastEndpoint;                                      // 0x0078   (0x0010)  
	FString                                            TunnelMulticastEndpoint;                                    // 0x0088   (0x0010)  
	TArray<FString>                                    RemoteTunnelEndpoints;                                      // 0x0098   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x06
enum EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX                                         = 5
};

