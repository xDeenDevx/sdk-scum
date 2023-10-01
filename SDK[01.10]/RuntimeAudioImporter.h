/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RuntimeAudioImporter.

/// Class /Script/RuntimeAudioImporter.ImportedSoundWave
/// Size: 0x0080 (0x0003C0 - 0x000440)
class UImportedSoundWave : public USoundWaveProcedural
{ 
public:
	int32_t                                            SamplingRate;                                               // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x1C];                                      // 0x03C4   (0x001C)  MISSED
	FMulticastInlineDelegate                           OnAudioPlaybackFinished;                                    // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x03F0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnGeneratePCMData;                                          // 0x0408   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0418   (0x0004)  MISSED
	int32_t                                            CurrentNumOfFrames;                                         // 0x041C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0420   (0x0020)  MISSED


	/// Functions
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
	bool RewindPlaybackTime(float PlaybackTime);                                                                             // [0x134d620] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory
	void ReleaseMemory();                                                                                                    // [0x134d600] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
	bool IsPlaybackFinished();                                                                                               // [0x134d5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
	float GetPlaybackTime();                                                                                                 // [0x134cff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
	float GetPlaybackPercentage();                                                                                           // [0x134cfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
	float GetDurationConst();                                                                                                // [0x134cf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetDuration
	float GetDuration();                                                                                                     // [0x134cf50] Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeAudioImporter.PreImportedSoundAsset
/// Size: 0x0018 (0x000028 - 0x000040)
class UPreImportedSoundAsset : public UObject
{ 
public:
	TArray<char>                                       AudioDataArray;                                             // 0x0028   (0x0010)  
	EAudioFormat                                       AudioFormat;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/RuntimeAudioImporter.RuntimeAudioCompressor
/// Size: 0x0028 (0x000028 - 0x000050)
class URuntimeAudioCompressor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnResult;                                                   // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor
	URuntimeAudioCompressor* CreateRuntimeAudioCompressor();                                                                 // [0x134cad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave
	void CompressSoundWave(UImportedSoundWave* ImportedSoundWaveRef, FCompressedSoundWaveInfo CompressedSoundWaveInfo, char Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer); // [0x134c800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary
/// Size: 0x0050 (0x000028 - 0x000078)
class URuntimeAudioImporterLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0050   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnResult;                                                   // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
	bool TranscodeRAWDataFromFile(FString FilePathFrom, ERAWAudioFormat FormatFrom, FString FilePathTo, ERAWAudioFormat FormatTo); // [0x134d870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
	void TranscodeRAWDataFromBuffer(TArray<char> RAWData_From, ERAWAudioFormat FormatFrom, TArray<char>& RAWData_To, ERAWAudioFormat FormatTo); // [0x134d6b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
	void ImportAudioFromRAWFile(FString FilePath, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels);        // [0x134d460] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
	void ImportAudioFromRAWBuffer(TArray<char> RAWBuffer, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels); // [0x134d2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
	void ImportAudioFromPreImportedSound(UPreImportedSoundAsset* PreImportedSoundAssetRef);                                  // [0x134d230] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
	void ImportAudioFromFile(FString FilePath, EAudioFormat Format);                                                         // [0x134d150] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
	void ImportAudioFromBuffer(TArray<char> AudioData, EAudioFormat Format);                                                 // [0x134d020] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
	EAudioFormat GetAudioFormatAdvanced(TArray<char>& AudioData);                                                            // [0x134cea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
	EAudioFormat GetAudioFormat(FString FilePath);                                                                           // [0x134ce00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
	bool ExportSoundWaveToFile(UImportedSoundWave* ImporterSoundWave, FString SavePath, EAudioFormat AudioFormat, char Quality); // [0x134cca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
	bool ExportSoundWaveToBuffer(UImportedSoundWave* ImporterSoundWave, TArray<char>& AudioData, EAudioFormat AudioFormat, char Quality); // [0x134cb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
	URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();                                                              // [0x134cb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
	FString ConvertSecondsToString(int32_t Seconds);                                                                         // [0x134ca00] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/RuntimeAudioImporter.CompressedSoundWaveInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCompressedSoundWaveInfo
{ 
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                                 // 0x0000   (0x0001)  
	bool                                               bLooping;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Volume;                                                     // 0x0004   (0x0004)  
	float                                              Pitch;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/RuntimeAudioImporter.PCMStruct
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPCMStruct
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Enum /Script/RuntimeAudioImporter.ETranscodingStatus
/// Size: 0x07
enum ETranscodingStatus : uint8_t
{
	ETranscodingStatus__SuccessfulImport                                             = 0,
	ETranscodingStatus__FailedToReadAudioDataArray                                   = 1,
	ETranscodingStatus__SoundWaveDeclarationError                                    = 2,
	ETranscodingStatus__InvalidAudioFormat                                           = 3,
	ETranscodingStatus__AudioDoesNotExist                                            = 4,
	ETranscodingStatus__LoadFileToArrayError                                         = 5,
	ETranscodingStatus__ETranscodingStatus_MAX                                       = 6
};

/// Enum /Script/RuntimeAudioImporter.ERAWAudioFormat
/// Size: 0x05
enum ERAWAudioFormat : uint8_t
{
	ERAWAudioFormat__Int16                                                           = 0,
	ERAWAudioFormat__Int32                                                           = 1,
	ERAWAudioFormat__UInt8                                                           = 2,
	ERAWAudioFormat__Float32                                                         = 3,
	ERAWAudioFormat__ERAWAudioFormat_MAX                                             = 4
};

/// Enum /Script/RuntimeAudioImporter.EAudioFormat
/// Size: 0x07
enum EAudioFormat : uint8_t
{
	EAudioFormat__Auto                                                               = 0,
	EAudioFormat__Mp3                                                                = 1,
	EAudioFormat__Wav                                                                = 2,
	EAudioFormat__Flac                                                               = 3,
	EAudioFormat__OggVorbis                                                          = 4,
	EAudioFormat__Invalid                                                            = 5,
	EAudioFormat__EAudioFormat_MAX                                                   = 6
};

/// Enum /Script/RuntimeAudioImporter.EWAVEncodingFormat
/// Size: 0x08
enum EWAVEncodingFormat : uint8_t
{
	EWAVEncodingFormat__FORMAT_PCM                                                   = 0,
	EWAVEncodingFormat__FORMAT_ADPCM                                                 = 1,
	EWAVEncodingFormat__FORMAT_IEEE_FLOAT                                            = 2,
	EWAVEncodingFormat__FORMAT_ALAW                                                  = 3,
	EWAVEncodingFormat__FORMAT_MULAW                                                 = 4,
	EWAVEncodingFormat__FORMAT_DVI_ADPCM                                             = 5,
	EWAVEncodingFormat__FORMAT_EXTENSIBLE                                            = 6,
	EWAVEncodingFormat__FORMAT_MAX                                                   = 7
};

