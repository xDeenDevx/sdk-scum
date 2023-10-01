/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemRedpointEOS.

/// Class /Script/OnlineSubsystemRedpointEOS.EOSControlChannel
/// Size: 0x0220 (0x000080 - 0x0002A0)
class UEOSControlChannel : public UControlChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x220];                                     // 0x0080   (0x0220)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSIpNetConnection
/// Size: 0x0000 (0x001C48 - 0x001C48)
class UEOSIpNetConnection : public UIpConnection
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSNetConnection
/// Size: 0x0010 (0x001BA8 - 0x001BB8)
class UEOSNetConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1BA8   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSNetDriver
/// Size: 0x0068 (0x0007E0 - 0x000848)
class UEOSNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x07E0   (0x0068)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UEOSSubsystem : public UGameInstanceSubsystem
{ 
public:
	FMulticastInlineDelegate                           OnAddWidgetToViewport;                                      // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveWidgetFromViewport;                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
/// Size: 0x0010 (0x000028 - 0x000038)
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
/// Size: 0x0000 (0x000028 - 0x000028)
class UEOSUserInterface_EnterDevicePinCode : public UInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
/// Size: 0x0010 (0x000028 - 0x000038)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
/// Size: 0x0000 (0x000028 - 0x000028)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public UInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
/// Size: 0x0010 (0x000028 - 0x000038)
class UEOSUserInterface_SelectEOSAccount_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
/// Size: 0x0000 (0x000028 - 0x000028)
class UEOSUserInterface_SelectEOSAccount : public UInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
/// Size: 0x0010 (0x000028 - 0x000038)
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
/// Size: 0x0000 (0x000028 - 0x000028)
class UEOSUserInterface_SignInOrCreateAccount : public UInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
/// Size: 0x0010 (0x000028 - 0x000038)
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
/// Size: 0x0000 (0x000028 - 0x000028)
class UEOSUserInterface_SwitchToCrossPlatformAccount : public UInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class URecentPlayersWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Struct /Script/OnlineSubsystemRedpointEOS.EOSUserInterface_CandidateEOSAccount
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FEOSUserInterface_CandidateEOSAccount
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0xB8];                                      // 0x0018   (0x00B8)  MISSED
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EStatTypingRule
/// Size: 0x06
enum EStatTypingRule : uint8_t
{
	EStatTypingRule__Int32                                                           = 0,
	EStatTypingRule__Bool                                                            = 1,
	EStatTypingRule__FloatTruncated                                                  = 2,
	EStatTypingRule__FloatEncoded                                                    = 3,
	EStatTypingRule__DoubleEncoded                                                   = 4,
	EStatTypingRule__EStatTypingRule_MAX                                             = 5
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EDedicatedServersDistributionMode
/// Size: 0x04
enum EDedicatedServersDistributionMode : uint8_t
{
	EDedicatedServersDistributionMode__DevelopersOnly                                = 0,
	EDedicatedServersDistributionMode__DevelopersAndPlayers                          = 1,
	EDedicatedServersDistributionMode__PlayersOnly                                   = 2,
	EDedicatedServersDistributionMode__EDedicatedServersDistributionMode_MAX         = 3
};

/// Enum /Script/OnlineSubsystemRedpointEOS.ENetworkAuthenticationMode
/// Size: 0x04
enum ENetworkAuthenticationMode : uint8_t
{
	ENetworkAuthenticationMode__Default                                              = 0,
	ENetworkAuthenticationMode__IDToken                                              = 1,
	ENetworkAuthenticationMode__Off                                                  = 2,
	ENetworkAuthenticationMode__ENetworkAuthenticationMode_MAX                       = 3
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EPartyJoinabilityConstraint
/// Size: 0x03
enum EPartyJoinabilityConstraint : uint8_t
{
	EPartyJoinabilityConstraint__AllowPlayersInMultipleParties                       = 0,
	EPartyJoinabilityConstraint__IgnoreInvitesIfAlreadyInParty                       = 1,
	EPartyJoinabilityConstraint__EPartyJoinabilityConstraint_MAX                     = 2
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EEOSApiVersion
/// Size: 0x04
enum EEOSApiVersion : uint8_t
{
	EEOSApiVersion__v2022_10                                                         = 0,
	EEOSApiVersion__v2022_05                                                         = 1,
	EEOSApiVersion__v2022_02                                                         = 2,
	EEOSApiVersion__v2022_MAX                                                        = 3
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EPresenceAdvertisementType
/// Size: 0x04
enum EPresenceAdvertisementType : uint8_t
{
	EPresenceAdvertisementType__None                                                 = 0,
	EPresenceAdvertisementType__Party                                                = 1,
	EPresenceAdvertisementType__Session                                              = 2,
	EPresenceAdvertisementType__EPresenceAdvertisementType_MAX                       = 3
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EEOSUserInterface_SignInOrCreateAccount_Choice
/// Size: 0x03
enum EEOSUserInterface_SignInOrCreateAccount_Choice : uint8_t
{
	EEOSUserInterface_SignInOrCreateAccount_Choice__SignIn                           = 0,
	EEOSUserInterface_SignInOrCreateAccount_Choice__CreateAccount                    = 1,
	EEOSUserInterface_SignInOrCreateAccount_Choice__EEOSUserInterface_SignInOrCreateAccount_MAX = 2
};

/// Enum /Script/OnlineSubsystemRedpointEOS.EEOSUserInterface_SwitchToCrossPlatformAccount_Choice
/// Size: 0x04
enum EEOSUserInterface_SwitchToCrossPlatformAccount_Choice : uint8_t
{
	EEOSUserInterface_SwitchToCrossPlatformAccount_Choice__SwitchToThisAccount       = 0,
	EEOSUserInterface_SwitchToCrossPlatformAccount_Choice__LinkADifferentAccount     = 1,
	EEOSUserInterface_SwitchToCrossPlatformAccount_Choice__CancelLinking             = 2,
	EEOSUserInterface_SwitchToCrossPlatformAccount_Choice__EEOSUserInterface_SwitchToCrossPlatformAccount_MAX = 3
};

