/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemOculus.

/// Class /Script/OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
	UOculusCreateSessionCallbackProxy* CreateSession(int32_t PublicConnections, FString OculusMatchmakingPool);              // [0x16d53d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusEntitlementCallbackProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
	UOculusEntitlementCallbackProxy* VerifyEntitlement();                                                                    // [0x16d57e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32_t MaxResults);                                             // [0x16d5630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
	UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32_t MaxResults, FString OculusMatchmakingPool);            // [0x16d5500] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
	UOculusIdentityCallbackProxy* GetOculusIdentity(int32_t LocalUserNum);                                                   // [0x16d56c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusNetConnection
/// Size: 0x0010 (0x001C48 - 0x001C58)
class UOculusNetConnection : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1C48   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemOculus.OculusNetDriver
/// Size: 0x00B8 (0x0007E0 - 0x000898)
class UOculusNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x07E0   (0x00B8)  MISSED
};

/// Class /Script/OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
	UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);                              // [0x16d5750] Final|Native|Static|Public|BlueprintCallable 
};

