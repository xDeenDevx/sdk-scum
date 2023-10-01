/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ControlRig.

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0628 (0x000028 - 0x000650)
class UControlRig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1D];                                      // 0x0028   (0x001D)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	URigVM*                                            VM;                                                         // 0x0048   (0x0008)  
	FRigHierarchyContainer                             Hierarchy;                                                  // 0x0050   (0x0368)  
	TWeakObjectPtr<UControlRigGizmoLibrary*>           GizmoLibrary;                                               // 0x03B8   (0x0028)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x03E0   (0x0010)  MISSED
	TMap<FName, FCachedPropertyPath>                   InputProperties;                                            // 0x03F0   (0x0050)  
	TMap<FName, FCachedPropertyPath>                   OutputProperties;                                           // 0x0440   (0x0050)  
	FControlRigDrawContainer                           DrawContainer;                                              // 0x0490   (0x0018)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x04A8   (0x0018)  MISSED
	UAnimationDataSourceRegistry*                      DataSourceRegistry;                                         // 0x04C0   (0x0008)  
	TArray<FName>                                      EventQueue;                                                 // 0x04C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x78];                                      // 0x04D8   (0x0078)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x0550   (0x0060)  
	UControlRig*                                       InteractionRig;                                             // 0x05B0   (0x0008)  
	UClass*                                            InteractionRigClass;                                        // 0x05B8   (0x0008)  
	TArray<UAssetUserData*>                            AssetUserData;                                              // 0x05C0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x80];                                      // 0x05D0   (0x0080)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	void SetInteractionRigClass(UClass* InInteractionRigClass);                                                              // [0xaa1ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	void SetInteractionRig(UControlRig* InInteractionRig);                                                                   // [0xaa1a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	UClass* GetInteractionRigClass();                                                                                        // [0xaa06b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	UControlRig* GetInteractionRig();                                                                                        // [0xaa0690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000650 - 0x000660)
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000328 - 0x000328)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x00E0 (0x000450 - 0x000530)
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	UClass*                                            ControlRigClass;                                            // 0x0450   (0x0008)  
	FMulticastInlineDelegate                           OnPostInitializeDelegate;                                   // 0x0458   (0x0010)  
	FMulticastInlineDelegate                           OnPreSetupDelegate;                                         // 0x0468   (0x0010)  
	FMulticastInlineDelegate                           OnPostSetupDelegate;                                        // 0x0478   (0x0010)  
	FMulticastInlineDelegate                           OnPreUpdateDelegate;                                        // 0x0488   (0x0010)  
	FMulticastInlineDelegate                           OnPostUpdateDelegate;                                       // 0x0498   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x04A8   (0x0010)  
	bool                                               bResetTransformBeforeTick;                                  // 0x04B8   (0x0001)  
	bool                                               bResetInitialsBeforeSetup;                                  // 0x04B9   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x04BA   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x04BB   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x04BC   (0x0001)  
	bool                                               bShowDebugDrawing;                                          // 0x04BD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x04BE   (0x0002)  MISSED
	UControlRig*                                       ControlRig;                                                 // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x04C8   (0x0068)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	void Update(float DeltaTime);                                                                                            // [0xaa1c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0xaa1b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0xaa18c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0xaa1710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0xaa1640] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0xaa14b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0xaa1390] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0xaa1270] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0xaa1150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0xaa0fc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0xaa0ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	void SetControlFloat(FName ControlName, float Value);                                                                    // [0xaa0e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	void SetControlBool(FName ControlName, bool Value);                                                                      // [0xaa0d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0xaa0b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);                                            // [0xaa0ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreUpdate
	void OnPreUpdate(UControlRigComponent* Component);                                                                       // [0xaa0a40] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreSetup
	void OnPreSetup(UControlRigComponent* Component);                                                                        // [0xaa09b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostUpdate
	void OnPostUpdate(UControlRigComponent* Component);                                                                      // [0xaa0920] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostSetup
	void OnPostSetup(UControlRigComponent* Component);                                                                       // [0xaa0890] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	void OnPostInitialize(UControlRigComponent* Component);                                                                  // [0xaa0800] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	void Initialize();                                                                                                       // [0xaa07e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0xaa06d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0xaa0580] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0xaa0470] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0xaa0390] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	FVector2D GetControlVector2D(FName ControlName);                                                                         // [0xaa0300] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0xaa01f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0xaa0110] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0xaa0030] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	UControlRig* GetControlRig();                                                                                            // [0xaa0000] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0xa9ff20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0xa9fe10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	int32_t GetControlInt(FName ControlName);                                                                                // [0xa9fd70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	float GetControlFloat(FName ControlName);                                                                                // [0xa9fcd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	bool GetControlBool(FName ControlName);                                                                                  // [0xa9fc30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0xa9fb20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	float GetAbsoluteTime();                                                                                                 // [0xa9faf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0xa9fa20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	void ClearMappedElements();                                                                                              // [0xa9fa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0xa9f850] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0xa9f760] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0xa9f670] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);                                       // [0xa9f5e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x0098 (0x000220 - 0x0002B8)
class AControlRigControlActor : public AActor
{ 
public:
	AActor*                                            ActorToTrack;                                               // 0x0220   (0x0008)  
	UClass*                                            ControlRigClass;                                            // 0x0228   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x0230   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x0231   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0232   (0x0006)  MISSED
	UMaterialInterface*                                MaterialOverride;                                           // 0x0238   (0x0008)  
	FString                                            ColorParameter;                                             // 0x0240   (0x0010)  
	bool                                               bCastShadows;                                               // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	USceneComponent*                                   ActorRootComponent;                                         // 0x0258   (0x0008)  
	UControlRig*                                       ControlRig;                                                 // 0x0260   (0x0008)  
	TArray<FName>                                      ControlNames;                                               // 0x0268   (0x0010)  
	TArray<FTransform>                                 GizmoTransforms;                                            // 0x0278   (0x0010)  
	TArray<UStaticMeshComponent*>                      Components;                                                 // 0x0288   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  Materials;                                                  // 0x0298   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	void Refresh();                                                                                                          // [0xaa7ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	void Clear();                                                                                                            // [0xaa79c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigGizmoActor
/// Size: 0x0028 (0x000220 - 0x000248)
class AControlRigGizmoActor : public AActor
{ 
public:
	USceneComponent*                                   ActorRootComponent;                                         // 0x0220   (0x0008)  
	UStaticMeshComponent*                              StaticMeshComponent;                                        // 0x0228   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x0230   (0x0004)  
	FName                                              ControlName;                                                // 0x0234   (0x0008)  
	FName                                              ColorParameterName;                                         // 0x023C   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0244:0 (0x0001)  
	bool                                               bSelected;                                                  // 0x0244:1 (0x0001)  
	bool                                               bSelectable;                                                // 0x0244:2 (0x0001)  
	bool                                               bHovered;                                                   // 0x0244:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0245   (0x0003)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelected
	void SetSelected(bool bInSelected);                                                                                      // [0xaa7d80] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelectable
	void SetSelectable(bool bInSelectable);                                                                                  // [0xaa7cf0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetHovered
	void SetHovered(bool bInHovered);                                                                                        // [0xaa7c60] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetGlobalTransform
	void SetGlobalTransform(FTransform& InTransform);                                                                        // [0xaa7b80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetEnabled
	void SetEnabled(bool bInEnabled);                                                                                        // [0xaa7af0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnTransformChanged
	void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x2859740] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnSelectionChanged
	void OnSelectionChanged(bool bIsSelected);                                                                               // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnManipulatingChanged
	void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnHoveredChanged
	void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnEnabledChanged
	void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x2859740] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsSelectedInEditor
	bool IsSelectedInEditor();                                                                                               // [0xaa7aa0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsHovered
	bool IsHovered();                                                                                                        // [0xaa7a70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsEnabled
	bool IsEnabled();                                                                                                        // [0xaa7a40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.GetGlobalTransform
	FTransform GetGlobalTransform();                                                                                         // [0xaa79e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UControlRigGizmoLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FControlRigGizmoDefinition                         DefaultGizmo;                                               // 0x0030   (0x0060)  
	TWeakObjectPtr<UMaterial*>                         DefaultMaterial;                                            // 0x0090   (0x0028)  
	FName                                              MaterialColorParameter;                                     // 0x00B8   (0x0008)  
	TArray<FControlRigGizmoDefinition>                 Gizmos;                                                     // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0038 (0x000028 - 0x000060)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0028   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0029   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x002C   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0030   (0x0004)  
	float                                              ScalePrecision;                                             // 0x0034   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0038   (0x0004)  
	FName                                              EventNameA;                                                 // 0x003C   (0x0008)  
	FName                                              EventNameB;                                                 // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<UObject*>                                   Objects;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0058 (0x0001C8 - 0x000220)
class UControlRigSequence : public ULevelSequence
{ 
public:
	TWeakObjectPtr<UAnimSequence*>                     LastExportedToAnimationSequence;                            // 0x01C8   (0x0028)  
	TWeakObjectPtr<USkeletalMesh*>                     LastExportedUsingSkeletalMesh;                              // 0x01F0   (0x0028)  
	float                                              LastExportedFrameRate;                                      // 0x0218   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x021C   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
public:
	TArray<UControlRigValidationPass*>                 Passes;                                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0018 (0x000650 - 0x000668)
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x0650   (0x0010)  
	EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0660   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0661   (0x0007)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x01A0 (0x000148 - 0x0002E8)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	UControlRig*                                       ControlRig;                                                 // 0x0148   (0x0008)  
	UClass*                                            ControlRigClass;                                            // 0x0150   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x0158   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0170   (0x00A0)  
	TMap<FName, FChannelMapInfo>                       ControlChannelMap;                                          // 0x0210   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0260   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0270   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0280   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0038 (0x000090 - 0x0000C8)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0090   (0x0010)  MISSED
	UControlRig*                                       ControlRig;                                                 // 0x00A0   (0x0008)  
	UMovieSceneSection*                                SectionToKey;                                               // 0x00A8   (0x0008)  
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00B0   (0x0010)  
	FName                                              TrackName;                                                  // 0x00C0   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0030)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0030   (0x0060)  
	FName                                              LinkedNode;                                                 // 0x0090   (0x0008)  
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0118 (0x000058 - 0x000170)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	TMap<FName, uint16_t>                              ControlRigBoneMapping;                                      // 0x0068   (0x0050)  
	TMap<FName, uint16_t>                              ControlRigCurveMapping;                                     // 0x00B8   (0x0050)  
	TMap<FName, uint16_t>                              InputToCurveMappingUIDs;                                    // 0x0108   (0x0050)  
	TWeakObjectPtr<UNodeMappingContainer*>             NodeMappingContainer;                                       // 0x0158   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0160   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x0162   (0x0002)  
	bool                                               bExecute;                                                   // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0165   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x01F8 (0x000170 - 0x000368)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	UClass*                                            ControlRigClass;                                            // 0x0170   (0x0008)  
	UControlRig*                                       ControlRig;                                                 // 0x0178   (0x0008)  
	float                                              Alpha;                                                      // 0x0180   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0184   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0185:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton;                                    // 0x0185:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0186   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0188   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0190   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x01D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x01E0   (0x0030)  
	TMap<FName, FName>                                 InputMapping;                                               // 0x0210   (0x0050)  
	TMap<FName, FName>                                 OutputMapping;                                              // 0x0260   (0x0050)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x02B0   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000170 - 0x000178)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	TWeakObjectPtr<UControlRig*>                       ControlRig;                                                 // 0x0170   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A0 (0x000770 - 0x000810)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0770   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigComponentMappedComponent
{ 
	USceneComponent*                                   Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0010   (0x0001)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FControlRigComponentMappedElement
{ 
	FComponentReference                                ComponentReference;                                         // 0x0000   (0x0028)  
	int32_t                                            TransformIndex;                                             // 0x0028   (0x0004)  
	FName                                              TransformName;                                              // 0x002C   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x0038   (0x0008)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0050   (0x0030)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	EControlRigComponentSpace                          Space;                                                      // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	USceneComponent*                                   SceneComponent;                                             // 0x0088   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x0090   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x0094   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0008 (0x000058 - 0x000060)
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigDrawContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FControlRigDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0070   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
};

/// Struct /Script/ControlRig.GizmoActorCreationParam
/// Size: 0x0120 (0x000000 - 0x000120)
struct FGizmoActorCreationParam
{ 
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0060 (0x000000 - 0x000060)
struct FControlRigGizmoDefinition
{ 
	FName                                              GizmoName;                                                  // 0x0000   (0x0008)  
	TWeakObjectPtr<UStaticMesh*>                       StaticMesh;                                                 // 0x0008   (0x0028)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x000770 - 0x000810)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0770   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCRFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x000C)  
	FVector                                            B;                                                          // 0x000C   (0x000C)  
	FVector                                            C;                                                          // 0x0018   (0x000C)  
	FVector                                            D;                                                          // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigSequenceObjectReference
{ 
	UClass*                                            ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x02B0 (0x000A10 - 0x000CC0)
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2B0];                                     // 0x0A10   (0x02B0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
struct FControlRigSettingsPerPinBool
{ 
	TMap<FString, bool>                                Values;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCRSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            position;                                                   // 0x0010   (0x000C)  
	FVector                                            LinearVelocity;                                             // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	FVector                                            DataA;                                                      // 0x000C   (0x000C)  
	FVector                                            DataB;                                                      // 0x0018   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0034   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          FalloffType;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0040   (0x0004)  
	bool                                               bInverted;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0045   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0004   (0x000C)  
	float                                              Coefficient;                                                // 0x0010   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x00D0 (0x000008 - 0x0000D8)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x00A0)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x00C0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0098 (0x000000 - 0x000098)
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0090)  
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0098)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0020 (0x000080 - 0x0000A0)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigBoneHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigBone>                                   Bones;                                                      // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00C8 (0x000018 - 0x0000E0)
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         GlobalTransform;                                            // 0x0060   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0030)  
	TArray<int32_t>                                    Dependents;                                                 // 0x00C0   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0108 (0x000000 - 0x000108)
struct FRigControlHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0000   (0x0098)  MISSED
	TArray<FRigControl>                                Controls;                                                   // 0x0098   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x00A8   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x00F8   (0x0010)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02D8 (0x000018 - 0x0002F0)
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x001C   (0x0008)  
	FName                                              ParentName;                                                 // 0x0024   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x002C   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0030   (0x0008)  
	int32_t                                            SpaceIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0040   (0x0030)  
	FRigControlValue                                   InitialValue;                                               // 0x0070   (0x0080)  
	FRigControlValue                                   Value;                                                      // 0x00F0   (0x0080)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0170   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0171   (0x0001)  
	bool                                               bAnimatable;                                                // 0x0172   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x0173   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x0174   (0x0001)  
	bool                                               bLimitScale;                                                // 0x0175   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x0176   (0x0001)  
	unsigned char                                      UnknownData02_5[0x9];                                       // 0x0177   (0x0009)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0180   (0x0080)  
	FRigControlValue                                   MaximumValue;                                               // 0x0200   (0x0080)  
	bool                                               bGizmoEnabled;                                              // 0x0280   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x0281   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0282   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x0284   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	FTransform                                         GizmoTransform;                                             // 0x0290   (0x0030)  
	FLinearColor                                       GizmoColor;                                                 // 0x02C0   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x02D0   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x02E1   (0x0007)  MISSED
	UEnum*                                             ControlEnum;                                                // 0x02E8   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0044)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Storage;                                                    // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0044 (0x000000 - 0x000044)
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	bool                                               bValid;                                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigCurveContainer
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigCurve>                                  Curves;                                                     // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           Index;                                                      // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigElementKey
{ 
	ERigElementType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0368 (0x000000 - 0x000368)
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0098)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0098   (0x0090)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0128   (0x0108)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0230   (0x0098)  
	int32_t                                            Version;                                                    // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x9C];                                      // 0x02CC   (0x009C)  MISSED
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigSpaceHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0078 (0x000018 - 0x000090)
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0060   (0x0030)  
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigMirrorSettings
{ 
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            OldName;                                                    // 0x0008   (0x0010)  
	FString                                            NewName;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigHierarchyCopyPasteContent
{ 
	TArray<ERigElementType>                            Types;                                                      // 0x0000   (0x0010)  
	TArray<FString>                                    Contents;                                                   // 0x0010   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0020   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigElementKeyCollection
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0050   (0x0030)  
	float                                              CurveValue;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	TMap<FName, int32_t>                               EventToIndex;                                               // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)  
	TMap<FRigElementKey, int32_t>                      KeyToIndex;                                                 // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnitMutable : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            AccumulatedMinimum;                                         // 0x002C   (0x000C)  
	FVector                                            AccumulatedMaximum;                                         // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	float                                              Blend;                                                      // 0x0070   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	float                                              Blend;                                                      // 0x0030   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0035   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	float                                              Blend;                                                      // 0x0020   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	bool                                               bFlipOrder;                                                 // 0x0070   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	bool                                               bFlipOrder;                                                 // 0x0030   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0032   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0058 (0x000068 - 0x0000C0)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	float                                              Weight;                                                     // 0x00A0   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x00A4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00A6   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00A8   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x00E8 (0x000068 - 0x000150)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	FRigUnit_AimItem_Target                            primary;                                                    // 0x0074   (0x002C)  
	FRigUnit_AimItem_Target                            secondary;                                                  // 0x00A0   (0x002C)  
	float                                              Weight;                                                     // 0x00CC   (0x0004)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0110   (0x0014)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x002C (0x000000 - 0x00002C)
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x0020   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x00E8 (0x000068 - 0x000150)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FRigUnit_AimBone_Target                            primary;                                                    // 0x0070   (0x0028)  
	FRigUnit_AimBone_Target                            secondary;                                                  // 0x0098   (0x0028)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x00C5   (0x000B)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x0110   (0x0014)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0138 (0x000008 - 0x000140)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0030)  
	FRigUnit_AimItem_Target                            primary;                                                    // 0x0040   (0x002C)  
	FRigUnit_AimItem_Target                            secondary;                                                  // 0x006C   (0x002C)  
	float                                              Weight;                                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0110   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0124   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0058 (0x000068 - 0x0000C0)
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	EAimMode                                           AimMode;                                                    // 0x0070   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	FVector                                            AimVector;                                                  // 0x0074   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0090   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x00A0   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            AlignVector;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Scale;                                                      // 0x0014   (0x0004)  
	float                                              Bias;                                                       // 0x0018   (0x0004)  
	bool                                               bMapRange;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0020   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0028   (0x0008)  
	bool                                               bClampResult;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0034   (0x0004)  
	float                                              ClampMax;                                                   // 0x0038   (0x0004)  
	bool                                               bInterpResult;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0040   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0044   (0x0004)  
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0054   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	EControlRigAnimEasingType                          Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
	EControlRigAnimEasingType                          Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00A0   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x00A9   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00AB   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x00B0   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_BeginExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0040   (0x0010)  
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x0080 (0x000068 - 0x0000E8)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0068   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00B8   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00BC   (0x0004)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x0080 (0x000068 - 0x0000E8)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0068   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00B8   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00BC   (0x0004)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x00C0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00C2   (0x0006)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x00D8 (0x000068 - 0x000140)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Limit;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x00D8 (0x000068 - 0x000140)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0208 (0x000068 - 0x000270)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x0068   (0x000C)  
	FVector                                            Speed;                                                      // 0x0074   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0080   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A8   (0x0040)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          Items;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0020   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0040   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0050   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0060   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0070   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (0x000000 - 0x00003C)
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x000C)  
	float                                              PendulumBlend;                                              // 0x0014   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0018   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x001C   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          PendulumEase;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0028   (0x000C)  
	float                                              UnwindMinimum;                                              // 0x0034   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0038   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0004   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0010   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x001C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x0028   (0x000C)  
	float                                              WaveMinimum;                                                // 0x0034   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            ReachTarget;                                                // 0x0004   (0x000C)  
	FVector                                            ReachAxis;                                                  // 0x0010   (0x000C)  
	float                                              ReachMinimum;                                               // 0x001C   (0x0004)  
	float                                              ReachMaximum;                                               // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          ReachEase;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0208 (0x000068 - 0x000270)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0068   (0x0008)  
	FVector                                            Speed;                                                      // 0x0070   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x007C   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A4   (0x0040)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0090 (0x000068 - 0x0000F8)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0068   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0078   (0x000C)  
	int32_t                                            Index;                                                      // 0x0084   (0x0004)  
	int32_t                                            Count;                                                      // 0x0088   (0x0004)  
	float                                              Ratio;                                                      // 0x008C   (0x0004)  
	bool                                               Continue;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0098   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0040   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0038   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Base;                                                       // 0x0030   (0x0030)  
	FTransform                                         InitTransform;                                              // 0x0060   (0x0030)  
	FTransform                                         Result;                                                     // 0x0090   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00C0   (0x0009)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x00D0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	FRotator                                           Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)  
	float                                              MinimumU;                                                   // 0x0098   (0x0004)  
	float                                              MaximumU;                                                   // 0x009C   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Thickness;                                                  // 0x00B0   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0098 (0x000068 - 0x000100)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)  
	float                                              MinimumU;                                                   // 0x0098   (0x0004)  
	float                                              MaximumU;                                                   // 0x009C   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Thickness;                                                  // 0x00B0   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0058 (0x000068 - 0x0000C0)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
	float                                              Scale;                                                      // 0x0068   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x006C   (0x0010)  
	float                                              Thickness;                                                  // 0x007C   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0068   (0x000C)  
	FVector                                            B;                                                          // 0x0074   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0094   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0068   (0x000C)  
	FVector                                            B;                                                          // 0x0074   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FName                                              Space;                                                      // 0x0094   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Thickness;                                                  // 0x0088   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x008C   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Thickness;                                                  // 0x0088   (0x0004)  
	FName                                              Space;                                                      // 0x008C   (0x0008)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0094   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0068   (0x000C)  
	ERigUnitDebugPointMode                             mode;                                                       // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Scale;                                                      // 0x0088   (0x0004)  
	float                                              Thickness;                                                  // 0x008C   (0x0004)  
	FName                                              Space;                                                      // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x000C)  
	ERigUnitDebugPointMode                             mode;                                                       // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	float                                              Thickness;                                                  // 0x002C   (0x0004)  
	FName                                              Space;                                                      // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C4   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FName                                              Space;                                                      // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x0098 (0x000068 - 0x000100)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0068   (0x0010)  
	ERigUnitDebugTransformMode                         mode;                                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x007C   (0x0010)  
	float                                              Thickness;                                                  // 0x008C   (0x0004)  
	float                                              Scale;                                                      // 0x0090   (0x0004)  
	FName                                              Space;                                                      // 0x0094   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	ERigUnitDebugTransformMode                         mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00BC   (0x000C)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	ERigUnitDebugTransformMode                         mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FName                                              Space;                                                      // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	ERigUnitDebugTransformMode                         mode;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Thickness;                                                  // 0x0054   (0x0004)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	FName                                              Space;                                                      // 0x005C   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0064   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Delta;                                                      // 0x0040   (0x0030)  
	FTransform                                         PreviousValue;                                              // 0x0070   (0x0030)  
	FTransform                                         Cache;                                                      // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Delta;                                                      // 0x0020   (0x0010)  
	FQuat                                              PreviousValue;                                              // 0x0030   (0x0010)  
	FQuat                                              Cache;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Delta;                                                      // 0x0014   (0x000C)  
	FVector                                            PreviousValue;                                              // 0x0020   (0x000C)  
	FVector                                            Cache;                                                      // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x008C   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0090   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000068 - 0x0000E8)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x008C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0098   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000068 - 0x000078)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	float                                              Thickness;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0018 (0x000068 - 0x000080)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0098 (0x000068 - 0x000100)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0098 (0x000068 - 0x000100)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0198 (0x000068 - 0x000200)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00AC   (0x0004)  
	float                                              Maximum;                                                    // 0x00B0   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00F4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0198 (0x000068 - 0x000200)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00AC   (0x0004)  
	float                                              Maximum;                                                    // 0x00B0   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00F4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x0070 (0x000068 - 0x0000D8)
struct FRigUnit_ForLoopCount : FRigUnitMutable
{ 
	int32_t                                            Count;                                                      // 0x0068   (0x0004)  
	int32_t                                            Index;                                                      // 0x006C   (0x0004)  
	float                                              Ratio;                                                      // 0x0070   (0x0004)  
	bool                                               Continue;                                                   // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0078   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FTransform                                         Minimum;                                                    // 0x0050   (0x0030)  
	FTransform                                         Maximum;                                                    // 0x0080   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRotator                                           Rotator;                                                    // 0x0014   (0x000C)  
	FRotator                                           Minimum;                                                    // 0x0020   (0x000C)  
	FRotator                                           Maximum;                                                    // 0x002C   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0014   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0020   (0x000C)  
	FVector                                            Maximum;                                                    // 0x002C   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Minimum;                                                    // 0x0018   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0020   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0028   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0010   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0014   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0018   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0014   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0008)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0014   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	ETransformGetterType                               Type;                                                       // 0x0070   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	FName                                              Space;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	FCachedRigElement                                  CachedSpace;                                                // 0x0064   (0x0014)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x0018   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0025   (0x000B)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0060   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0074   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	bool                                               bInitial;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x0016   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedParents;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0014   (0x000C)  
	FCachedRigElement                                  CachedChild;                                                // 0x0020   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0034   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_InverseExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Old;                                                        // 0x0014   (0x0008)  
	FName                                              New;                                                        // 0x001C   (0x0008)  
	FRigElementKey                                     Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               Exists;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	int32_t                                            BufferSize;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	int32_t                                            BufferSize;                                                 // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0028   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	FVector                                            Vector;                                                     // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              Result;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0010)  
	FQuat                                              IfFalse;                                                    // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              T;                                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0015   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0014   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0018   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigUnit_MathRBFInterpolateVectorWorkData          WorkData;                                                   // 0x0020   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00B0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FLinearColor                                       Value;                                                      // 0x000C   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00B0   (0x0010)  
	FVector                                            Output;                                                     // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FVector                                            Value;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	float                                              Output;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0020   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x002C   (0x000C)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FRigUnit_MathRBFInterpolateQuatWorkData            WorkData;                                                   // 0x0040   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0040 (0x0000D0 - 0x000110)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00E0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00D0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FLinearColor                                       Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00D0   (0x0010)  
	FVector                                            Output;                                                     // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FVector                                            Value;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	float                                              Output;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0040   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0044   (0x0004)  
	float                                              Maximum;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0050   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0084   (0x0010)  
	float                                              DebugThickness;                                             // 0x0094   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Rotation;                                                   // 0x0014   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0024   (0x000C)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	FEulerTransform                                    EulerTransform;                                             // 0x0060   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Location;                                                   // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Direction;                                                  // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0030)  
	FTransform                                         IfFalse;                                                    // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	float                                              T;                                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Result;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Global;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Local;                                                      // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            Direction;                                                  // 0x0014   (0x000C)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x002C   (0x000C)  
	FVector                                            Result;                                                     // 0x0038   (0x000C)  
	float                                              Distance;                                                   // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0014   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0018   (0x0004)  
	float                                              Maximum;                                                    // 0x001C   (0x0004)  
	FTransform                                         Space;                                                      // 0x0020   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0054   (0x0010)  
	float                                              DebugThickness;                                             // 0x0064   (0x0004)  
	FVector                                            Result;                                                     // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	FVector                                            Result;                                                     // 0x003C   (0x000C)  
	FVector                                            Tangent;                                                    // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              MinimumLength;                                              // 0x0014   (0x0004)  
	float                                              MaximumLength;                                              // 0x0018   (0x0004)  
	FVector                                            Result;                                                     // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Length;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            IfTrue;                                                     // 0x000C   (0x000C)  
	FVector                                            IfFalse;                                                    // 0x0018   (0x000C)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Tolerance;                                                  // 0x0014   (0x0004)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            SourceMinimum;                                              // 0x0014   (0x000C)  
	FVector                                            SourceMaximum;                                              // 0x0020   (0x000C)  
	FVector                                            TargetMinimum;                                              // 0x002C   (0x000C)  
	FVector                                            TargetMaximum;                                              // 0x0038   (0x000C)  
	bool                                               bClamp;                                                     // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              T;                                                          // 0x0020   (0x0004)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Factor;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FVector                                            Result;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000068 - 0x000098)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	float                                              WeightMinimum;                                              // 0x007C   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0080   (0x0004)  
	EControlRigModifyBoneMode                          mode;                                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000068 - 0x000098)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	float                                              WeightMinimum;                                              // 0x007C   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0080   (0x0004)  
	EControlRigModifyBoneMode                          mode;                                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0068   (0x0008)  
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0070   (0x0010)  
	float                                              Precision;                                                  // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_NameBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_Contains : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Search;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_StartsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Start;                                                      // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_EndsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Ending;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NameReplace : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Old;                                                        // 0x0010   (0x0008)  
	FName                                              New;                                                        // 0x0018   (0x0008)  
	FName                                              Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x0018   (0x0008)  
	FName                                              Chopped;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_NameConcat : FRigUnit_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x0008)  
	FName                                              B;                                                          // 0x0010   (0x0008)  
	FName                                              Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
	FVector                                            position;                                                   // 0x0008   (0x000C)  
	FVector                                            Speed;                                                      // 0x0014   (0x000C)  
	FVector                                            Frequency;                                                  // 0x0020   (0x000C)  
	float                                              Minimum;                                                    // 0x002C   (0x0004)  
	float                                              Maximum;                                                    // 0x0030   (0x0004)  
	FVector                                            Result;                                                     // 0x0034   (0x000C)  
	FVector                                            Time;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x00F8 (0x000068 - 0x000160)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0068   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x0074   (0x0004)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         InitialGlobalTransform;                                     // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	bool                                               Switched;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0104   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0118   (0x0014)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0130   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0198 (0x000068 - 0x000200)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0068   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0078   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0088   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0098   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x00A8   (0x0004)  
	ECRSimPointIntegrateType                           IntegratorType;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x00B8   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x00CC   (0x000C)  
	FVector                                            SecondaryAimAxis;                                           // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00F0   (0x0050)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0140   (0x0030)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0170   (0x0088)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0020 (0x000068 - 0x000088)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            prefix;                                                     // 0x0070   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0080   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x0084   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000068 - 0x000068)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x0018   (0x000C)  
	bool                                               bOldParentInitial;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0028   (0x000C)  
	bool                                               bNewParentInitial;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x0035   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0070   (0x0014)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x0084   (0x0014)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x0098   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	bool                                               bRecomputeGlobal;                                           // 0x0074   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x0075   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0076   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0077   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0078   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Argument;                                                   // 0x0020   (0x0010)  
	float                                              angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0010)  
	FQuat                                              Argument1;                                                  // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	FVector                                            LastResult;                                                 // 0x0024   (0x000C)  
	int32_t                                            LastSeed;                                                   // 0x0030   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0018 (0x000068 - 0x000080)
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	ERigEvent                                          Event;                                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	FRigElementKey                                     Item;                                                       // 0x006C   (0x000C)  
	float                                              OffsetInSeconds;                                            // 0x0078   (0x0004)  
	bool                                               bEnable;                                                    // 0x007C   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x007E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x01E0 (0x000008 - 0x0001E8)
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
	FControlRigExecuteContext                          A;                                                          // 0x0068   (0x0060)  
	FControlRigExecuteContext                          B;                                                          // 0x00C8   (0x0060)  
	FControlRigExecuteContext                          C;                                                          // 0x0128   (0x0060)  
	FControlRigExecuteContext                          D;                                                          // 0x0188   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00D2   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00D4   (0x0014)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00D4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00DC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FVector                                            Translation;                                                // 0x0070   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0088   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0030 (0x000068 - 0x000098)
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0058 (0x000068 - 0x0000C0)
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	FTransform                                         Offset;                                                     // 0x0070   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00A4   (0x0014)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B4   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0030 (0x000068 - 0x000098)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FRotator                                           Rotator;                                                    // 0x0074   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0030 (0x000068 - 0x000098)
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FVector                                            Vector;                                                     // 0x0074   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FVector2D                                          Vector;                                                     // 0x0074   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x007C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	int32_t                                            Weight;                                                     // 0x0070   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x0074   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0028 (0x000068 - 0x000090)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	float                                              FloatValue;                                                 // 0x0074   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000068 - 0x000088)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0068   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0020 (0x000068 - 0x000088)
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0074   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            Pattern;                                                    // 0x0078   (0x0010)  
	bool                                               bVisible;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0020 (0x000068 - 0x000088)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0068   (0x0008)  
	float                                              Value;                                                      // 0x0070   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0074   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x0078 (0x000068 - 0x0000E0)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FName                                              Space;                                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0014)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00CC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0068   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0074   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0081   (0x000F)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x00C8   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x00DC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00D4   (0x0014)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00B4   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0078   (0x000C)  
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0048 (0x000068 - 0x0000B0)
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0075   (0x000B)  MISSED
	FQuat                                              Rotation;                                                   // 0x0080   (0x0010)  
	float                                              Weight;                                                     // 0x0090   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0098   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0038 (0x000068 - 0x0000A0)
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FVector                                            Translation;                                                // 0x0078   (0x000C)  
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)  
	bool                                               bInitial;                                                   // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x0076   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000068 - 0x0000C8)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	float                                              SlideAmount;                                                // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000068 - 0x0000C8)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	float                                              SlideAmount;                                                // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0168 (0x000068 - 0x0001D0)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	float                                              HierarchyStrength;                                          // 0x0078   (0x0004)  
	float                                              EffectorStrength;                                           // 0x007C   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0080   (0x0004)  
	float                                              RootStrength;                                               // 0x0084   (0x0004)  
	float                                              RootRatio;                                                  // 0x0088   (0x0004)  
	float                                              Damping;                                                    // 0x008C   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x0090   (0x000C)  
	bool                                               bFlipPolePlane;                                             // 0x009C   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x009D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x009E   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00A0   (0x0008)  
	FVector                                            PrimaryAxis;                                                // 0x00A8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00B4   (0x000C)  
	bool                                               bLiveSimulation;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x00D0   (0x0050)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0120   (0x00B0)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          CachedBones;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0038   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	float                                              SecondsAgo;                                                 // 0x0040   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0044   (0x0004)  
	float                                              TimeRange;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0090   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00A0   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              SecondsAgo;                                                 // 0x0014   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0018   (0x0004)  
	float                                              TimeRange;                                                  // 0x001C   (0x0004)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0030   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0030)  
	FTransform                                         Argument1;                                                  // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00D8 (0x000068 - 0x000140)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FRigElementKey                                     BaseItem;                                                   // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00C0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D8   (0x0060)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	TMap<int32_t, int32_t>                             ConstraintDataToTargets;                                    // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (0x000000 - 0x000040)
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0034   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0035   (0x0009)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00C8 (0x000068 - 0x000130)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0071   (0x000F)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseBone;                                                   // 0x00B0   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00B8   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x01B8 (0x000068 - 0x000220)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0068   (0x0008)  
	FName                                              EndJoint;                                                   // 0x0070   (0x0008)  
	FVector                                            PoleTarget;                                                 // 0x0078   (0x000C)  
	float                                              Spin;                                                       // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         EndEffector;                                                // 0x0090   (0x0030)  
	float                                              IKBlend;                                                    // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x00D0   (0x0030)  
	FTransform                                         MidJointFKTransform;                                        // 0x0100   (0x0030)  
	FTransform                                         EndJointFKTransform;                                        // 0x0130   (0x0030)  
	float                                              PreviousFKIKBlend;                                          // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0164   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0170   (0x0030)  
	FTransform                                         MidJointIKTransform;                                        // 0x01A0   (0x0030)  
	FTransform                                         EndJointIKTransform;                                        // 0x01D0   (0x0030)  
	int32_t                                            StartJointIndex;                                            // 0x0200   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x0204   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x0208   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x020C   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x0210   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0214   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0030)  
	FVector                                            PoleVector;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0050   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x0080   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x008C   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x0098   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00A0   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00A4   (0x0004)  
	float                                              BoneALength;                                                // 0x00A8   (0x0004)  
	float                                              BoneBLength;                                                // 0x00AC   (0x0004)  
	FTransform                                         Elbow;                                                      // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x000C)  
	FVector                                            PoleVector;                                                 // 0x0014   (0x000C)  
	FVector                                            Effector;                                                   // 0x0020   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0030   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0034   (0x0004)  
	float                                              BoneALength;                                                // 0x0038   (0x0004)  
	float                                              BoneBLength;                                                // 0x003C   (0x0004)  
	FVector                                            Elbow;                                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0148 (0x000068 - 0x0001B0)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x0068   (0x000C)  
	FRigElementKey                                     ItemB;                                                      // 0x0074   (0x000C)  
	FRigElementKey                                     EffectorItem;                                               // 0x0080   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0090   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00CC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00D8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00DC   (0x000C)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x00EC   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00FC   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0100   (0x0004)  
	float                                              Weight;                                                     // 0x0104   (0x0004)  
	float                                              ItemALength;                                                // 0x0108   (0x0004)  
	float                                              ItemBLength;                                                // 0x010C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_5[0xF];                                       // 0x0111   (0x000F)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0120   (0x0040)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x0160   (0x0014)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x0174   (0x0014)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x0188   (0x0014)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x019C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0128 (0x000068 - 0x000190)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0068   (0x0008)  
	FName                                              BoneB;                                                      // 0x0070   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0078   (0x0008)  
	FTransform                                         Effector;                                                   // 0x0080   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00B0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00BC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00C8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00CC   (0x000C)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00DC   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00E8   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00EC   (0x0004)  
	float                                              Weight;                                                     // 0x00F0   (0x0004)  
	float                                              BoneALength;                                                // 0x00F4   (0x0004)  
	float                                              BoneBLength;                                                // 0x00F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0100   (0x0040)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x0140   (0x0014)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x0154   (0x0014)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x0168   (0x0014)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x017C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x000C)  
	float                                              Strength;                                                   // 0x0014   (0x0004)  
	float                                              Damp;                                                       // 0x0018   (0x0004)  
	float                                              Blend;                                                      // 0x001C   (0x0004)  
	FVector                                            position;                                                   // 0x0020   (0x000C)  
	FVector                                            Velocity;                                                   // 0x002C   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0038   (0x000C)  
	FCRSimPoint                                        Point;                                                      // 0x0044   (0x0028)  
	bool                                               bInitialized;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x004C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x004C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x002C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x002C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	ERigUnitVisualDebugPointMode                       mode;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	ERigUnitVisualDebugPointMode                       mode;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x0030   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            End;                                                        // 0x0014   (0x000C)  
	TEnumAsByte<ECollisionChannel>                     Channel;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0024   (0x0004)  
	bool                                               bHit;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x002C   (0x000C)  
	FVector                                            HitNormal;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              Global;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              World;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Global;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            World;                                                      // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         Global;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         World;                                                      // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStructReference
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x03
enum EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX           = 2
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x03
enum EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x04
enum EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2,
	EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX                     = 3
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x05
enum EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__DynamicMesh                                             = 3,
	EControlRigDrawSettings__EControlRigDrawSettings_MAX                             = 4
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x32
enum EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30,
	EControlRigAnimEasingType__EControlRigAnimEasingType_MAX                         = 31
};

/// Enum /Script/ControlRig.EControlRigRotationOrder
/// Size: 0x07
enum EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ                                                    = 0,
	EControlRigRotationOrder__XZY                                                    = 1,
	EControlRigRotationOrder__YXZ                                                    = 2,
	EControlRigRotationOrder__YZX                                                    = 3,
	EControlRigRotationOrder__ZXY                                                    = 4,
	EControlRigRotationOrder__ZYX                                                    = 5,
	EControlRigRotationOrder__EControlRigRotationOrder_MAX                           = 6
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x03
enum ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1,
	ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX                           = 2
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x05
enum ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x02
enum ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX                                   = 1
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x04
enum ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX                             = 3
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x03
enum EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Max                                                 = 2
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x03
enum ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1,
	ERigBoneType__ERigBoneType_MAX                                                   = 2
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x04
enum ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2,
	ERigControlAxis__ERigControlAxis_MAX                                             = 3
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x05
enum ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3,
	ERigControlValueType__ERigControlValueType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x11
enum ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9,
	ERigControlType__ERigControlType_MAX                                             = 10
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode
/// Size: 0x05
enum ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append                                                  = 0,
	ERigHierarchyImportMode__Replace                                                 = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform                                   = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform                                  = 3,
	ERigHierarchyImportMode__Max                                                     = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x04
enum EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2,
	EControlRigSetKey__EControlRigSetKey_MAX                                         = 3
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x03
enum ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__Max                                                                   = 2
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x07
enum ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__All                                                             = 15,
	ERigElementType__ERigElementType_MAX                                             = 16
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x05
enum ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3,
	ERigSpaceType__ERigSpaceType_MAX                                                 = 4
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x03
enum EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1,
	EAimMode__MAX                                                                    = 2
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x03
enum ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x04
enum ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x03
enum EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX                         = 2
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x03
enum EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX                                 = 2
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType
/// Size: 0x04
enum ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX                               = 3
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType
/// Size: 0x05
enum ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERBFKernelType
/// Size: 0x06
enum ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4,
	ERBFKernelType__ERBFKernelType_MAX                                               = 5
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x04
enum EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2,
	EControlRigState__EControlRigState_MAX                                           = 3
};

