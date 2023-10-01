/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TakeMovieScene.

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0380 (0x0000E8 - 0x000468)
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00E8   (0x0090)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x0178   (0x0090)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x0208   (0x0090)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x0298   (0x0090)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x0328   (0x00A0)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x03C8   (0x00A0)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UMovieSceneTakeSettings : public UObject
{ 
public:
	FString                                            HoursName;                                                  // 0x0028   (0x0010)  
	FString                                            MinutesName;                                                // 0x0038   (0x0010)  
	FString                                            SecondsName;                                                // 0x0048   (0x0010)  
	FString                                            FramesName;                                                 // 0x0058   (0x0010)  
	FString                                            SubFramesName;                                              // 0x0068   (0x0010)  
	FString                                            SlateName;                                                  // 0x0078   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0090   (0x0010)  
};

