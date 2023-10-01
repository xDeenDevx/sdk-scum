/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ModelingOperators.

/// Enum /Script/ModelingOperators.ECSGOperation
/// Size: 0x07
enum ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB                                                      = 0,
	ECSGOperation__DifferenceBA                                                      = 1,
	ECSGOperation__Intersect                                                         = 2,
	ECSGOperation__Union                                                             = 3,
	ECSGOperation__TrimA                                                             = 4,
	ECSGOperation__TrimB                                                             = 5,
	ECSGOperation__ECSGOperation_MAX                                                 = 6
};

/// Enum /Script/ModelingOperators.ESplitNormalMethod
/// Size: 0x06
enum ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology                                          = 0,
	ESplitNormalMethod__FaceNormalThreshold                                          = 1,
	ESplitNormalMethod__FaceGroupID                                                  = 2,
	ESplitNormalMethod__PerTriangle                                                  = 3,
	ESplitNormalMethod__PerVertex                                                    = 4,
	ESplitNormalMethod__ESplitNormalMethod_MAX                                       = 5
};

/// Enum /Script/ModelingOperators.ENormalCalculationMethod
/// Size: 0x04
enum ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted                                           = 0,
	ENormalCalculationMethod__AngleWeighted                                          = 1,
	ENormalCalculationMethod__AreaAngleWeighting                                     = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX                           = 3
};

/// Enum /Script/ModelingOperators.EHoleFillOpFillType
/// Size: 0x06
enum EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan                                                 = 0,
	EHoleFillOpFillType__PolygonEarClipping                                          = 1,
	EHoleFillOpFillType__Planar                                                      = 2,
	EHoleFillOpFillType__Minimal                                                     = 3,
	EHoleFillOpFillType__Smooth                                                      = 4,
	EHoleFillOpFillType__EHoleFillOpFillType_MAX                                     = 5
};

/// Enum /Script/ModelingOperators.ERemeshSmoothingType
/// Size: 0x04
enum ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform                                                    = 0,
	ERemeshSmoothingType__Cotangent                                                  = 1,
	ERemeshSmoothingType__MeanValue                                                  = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX                                   = 3
};

/// Enum /Script/ModelingOperators.ERemeshType
/// Size: 0x04
enum ERemeshType : uint8_t
{
	ERemeshType__Standard                                                            = 0,
	ERemeshType__FullPass                                                            = 1,
	ERemeshType__NormalFlow                                                          = 2,
	ERemeshType__ERemeshType_MAX                                                     = 3
};

/// Enum /Script/ModelingOperators.EUVProjectionMethod
/// Size: 0x04
enum EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube                                                        = 0,
	EUVProjectionMethod__Cylinder                                                    = 1,
	EUVProjectionMethod__Plane                                                       = 2,
	EUVProjectionMethod__EUVProjectionMethod_MAX                                     = 3
};

/// Enum /Script/ModelingOperators.EMorphologyOperation
/// Size: 0x05
enum EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate                                                     = 0,
	EMorphologyOperation__Contract                                                   = 1,
	EMorphologyOperation__Close                                                      = 2,
	EMorphologyOperation__Open                                                       = 3,
	EMorphologyOperation__EMorphologyOperation_MAX                                   = 4
};

