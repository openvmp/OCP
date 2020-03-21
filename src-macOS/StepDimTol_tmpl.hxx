#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_Datum.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>

// module includes
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepDimTol_Array1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_HArray1OfDatumReference.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <StepDimTol_Array1OfDatumReferenceModifier.hxx>
#include <StepDimTol_HArray1OfDatumReferenceModifier.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepDimTol_HArray1OfDatumSystemOrReference.hxx>
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepDimTol_DatumOrCommonDatum.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepDimTol_LimitCondition.hxx>
#include <StepDimTol_Array1OfDatumSystemOrReference.hxx>
#include <StepDimTol_PlacedDatumTargetFeature.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepDimTol_DatumSystemOrReference.hxx>
#include <StepDimTol_DatumReferenceModifierType.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepDimTol_HArray1OfToleranceZoneTarget.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepDimTol_AreaUnitType.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepDimTol_SimpleDatumReferenceModifierMember.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepDimTol_GeometricToleranceType.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepDimTol_GeometricToleranceTarget.hxx>
#include <StepDimTol_HArray1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepDimTol_Array1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepDimTol_SimpleDatumReferenceModifier.hxx>
#include <StepDimTol_Array1OfDatumReference.hxx>
#include <StepDimTol_ToleranceZoneTarget.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeometricToleranceModifier.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_ShapeToleranceSelect.hxx>
#include <StepDimTol_HArray1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepDimTol_Array1OfDatumReferenceElement.hxx>
#include <StepDimTol_Array1OfToleranceZoneTarget.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepDimTol_DatumReferenceModifier.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReference.hxx
// ./opencascade/StepDimTol_CommonDatum.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceElement.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithModifiers.hxx
// ./opencascade/StepDimTol_RoundnessTolerance.hxx
// ./opencascade/StepDimTol_HArray1OfDatumSystemOrReference.hxx
// ./opencascade/StepDimTol_AngularityTolerance.hxx
// ./opencascade/StepDimTol_DatumReferenceModifierWithValue.hxx
// ./opencascade/StepDimTol_DatumTarget.hxx
// ./opencascade/StepDimTol_PerpendicularityTolerance.hxx
// ./opencascade/StepDimTol_StraightnessTolerance.hxx
// ./opencascade/StepDimTol_DatumOrCommonDatum.hxx
// ./opencascade/StepDimTol_GeometricToleranceRelationship.hxx
// ./opencascade/StepDimTol_GeometricTolerance.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDatumReference.hxx
// ./opencascade/StepDimTol_SymmetryTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx
// ./opencascade/StepDimTol_ParallelismTolerance.hxx
// ./opencascade/StepDimTol_DatumReferenceElement.hxx
// ./opencascade/StepDimTol_LimitCondition.hxx
// ./opencascade/StepDimTol_Array1OfDatumSystemOrReference.hxx
// ./opencascade/StepDimTol_PlacedDatumTargetFeature.hxx
// ./opencascade/StepDimTol_ToleranceZone.hxx
// ./opencascade/StepDimTol_CylindricityTolerance.hxx
// ./opencascade/StepDimTol_DatumSystemOrReference.hxx
// ./opencascade/StepDimTol_DatumReferenceModifierType.hxx
// ./opencascade/StepDimTol_DatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDefinedUnit.hxx
// ./opencascade/StepDimTol_HArray1OfToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_NonUniformZoneDefinition.hxx
// ./opencascade/StepDimTol_TotalRunoutTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthMod.hxx
// ./opencascade/StepDimTol_ConcentricityTolerance.hxx
// ./opencascade/StepDimTol_AreaUnitType.hxx
// ./opencascade/StepDimTol_DatumFeature.hxx
// ./opencascade/StepDimTol_UnequallyDisposedGeometricTolerance.hxx
// ./opencascade/StepDimTol_FlatnessTolerance.hxx
// ./opencascade/StepDimTol_SimpleDatumReferenceModifierMember.hxx
// ./opencascade/StepDimTol_SurfaceProfileTolerance.hxx
// ./opencascade/StepDimTol_LineProfileTolerance.hxx
// ./opencascade/StepDimTol_DatumReference.hxx
// ./opencascade/StepDimTol_RunoutZoneDefinition.hxx
// ./opencascade/StepDimTol_GeometricToleranceType.hxx
// ./opencascade/StepDimTol_CoaxialityTolerance.hxx
// ./opencascade/StepDimTol_GeneralDatumReference.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx
// ./opencascade/StepDimTol_ToleranceZoneForm.hxx
// ./opencascade/StepDimTol_ProjectedZoneDefinition.hxx
// ./opencascade/StepDimTol_GeometricToleranceTarget.hxx
// ./opencascade/StepDimTol_HArray1OfDatumReferenceCompartment.hxx
// ./opencascade/StepDimTol_DatumSystem.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithMaximumTolerance.hxx
// ./opencascade/StepDimTol_Array1OfGeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_CircularRunoutTolerance.hxx
// ./opencascade/StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx
// ./opencascade/StepDimTol_SimpleDatumReferenceModifier.hxx
// ./opencascade/StepDimTol_Array1OfDatumReference.hxx
// ./opencascade/StepDimTol_ToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_RunoutZoneOrientation.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx
// ./opencascade/StepDimTol_GeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_PositionTolerance.hxx
// ./opencascade/StepDimTol_Datum.hxx
// ./opencascade/StepDimTol_ShapeToleranceSelect.hxx
// ./opencascade/StepDimTol_HArray1OfGeometricToleranceModifier.hxx
// ./opencascade/StepDimTol_ModifiedGeometricTolerance.hxx
// ./opencascade/StepDimTol_GeoTolAndGeoTolWthDatRef.hxx
// ./opencascade/StepDimTol_Array1OfDatumReferenceElement.hxx
// ./opencascade/StepDimTol_Array1OfToleranceZoneTarget.hxx
// ./opencascade/StepDimTol_ToleranceZoneDefinition.hxx
// ./opencascade/StepDimTol_DatumReferenceModifier.hxx

// user-defined post
