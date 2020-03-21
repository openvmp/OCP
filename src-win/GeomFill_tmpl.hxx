#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <GeomFill_Frenet.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <GeomFill_Filling.hxx>
#include <GeomFill_Stretch.hxx>
#include <GeomFill_Coons.hxx>
#include <GeomFill_Curved.hxx>
#include <GeomFill_BezierCurves.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill_Profiler.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_AppSurf.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_AppSweep.hxx>
#include <GeomFill_Generator.hxx>
#include <GeomFill_Pipe.hxx>
#include <GeomFill_Tensor.hxx>
#include <GeomFill_ConstrainedFilling.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_DegeneratedBound.hxx>
#include <GeomFill_SimpleBound.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_TgtField.hxx>
#include <GeomFill_TgtOnCoons.hxx>
#include <GeomFill_CornerState.hxx>
#include <GeomFill_CircularBlendFunc.hxx>
#include <GeomFill_SweepFunction.hxx>
#include <GeomFill_LocFunction.hxx>
#include <GeomFill_PolynomialConvertor.hxx>
#include <GeomFill_QuasiAngularConvertor.hxx>
#include <GeomFill_SnglrFunc.hxx>
#include <GeomFill_FunctionDraft.hxx>
#include <GeomFill_PlanFunc.hxx>
#include <GeomFill_FunctionGuide.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <GeomFill_UniformSection.hxx>
#include <GeomFill_EvolvedSection.hxx>
#include <GeomFill_NSections.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_CurveAndTrihedron.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <GeomFill_Fixed.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_CorrectedFrenet.hxx>
#include <GeomFill_DiscreteTrihedron.hxx>
#include <GeomFill_ConstantBiNormal.hxx>
#include <GeomFill_Darboux.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_GuideTrihedronAC.hxx>
#include <GeomFill_GuideTrihedronPlan.hxx>
#include <GeomFill_Sweep.hxx>
#include <GeomFill_SectionPlacement.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_TgtField.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_Curve.hxx>
#include <Law_Function.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_Tensor.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Surface.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Dir.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Vec.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomFill_Boundary.hxx>
#include <Law_Function.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_Curve.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <math_Matrix.hxx>
#include <Geom_BezierSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BezierCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <Law_BSpline.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>

// module includes
#include <GeomFill_CorrectedFrenet.hxx>
#include <GeomFill_Darboux.hxx>
#include <GeomFill_CurveAndTrihedron.hxx>
#include <GeomFill_DiscreteTrihedron.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_CornerState.hxx>
#include <GeomFill_FunctionGuide.hxx>
#include <GeomFill.hxx>
#include <GeomFill_ConstrainedFilling.hxx>
#include <GeomFill_Generator.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill_ApproxStyle.hxx>
#include <GeomFill_EvolvedSection.hxx>
#include <GeomFill_UniformSection.hxx>
#include <GeomFill_ConstantBiNormal.hxx>
#include <GeomFill_FunctionDraft.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_GuideTrihedronAC.hxx>
#include <GeomFill_HSequenceOfAx2.hxx>
#include <GeomFill_Stretch.hxx>
#include <GeomFill_AppSweep.hxx>
#include <GeomFill_SimpleBound.hxx>
#include <GeomFill_TgtOnCoons.hxx>
#include <GeomFill_SequenceOfTrsf.hxx>
#include <GeomFill_Pipe.hxx>
#include <GeomFill_SnglrFunc.hxx>
#include <GeomFill_Coons.hxx>
#include <GeomFill_SequenceOfAx2.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_HArray1OfSectionLaw.hxx>
#include <GeomFill_PipeError.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <GeomFill_NSections.hxx>
#include <GeomFill_Profiler.hxx>
#include <GeomFill_FillingStyle.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_AppSurf.hxx>
#include <GeomFill_CircularBlendFunc.hxx>
#include <GeomFill_QuasiAngularConvertor.hxx>
#include <GeomFill_Array1OfLocationLaw.hxx>
#include <GeomFill_PolynomialConvertor.hxx>
#include <GeomFill_Fixed.hxx>
#include <GeomFill_GuideTrihedronPlan.hxx>
#include <GeomFill_PlanFunc.hxx>
#include <GeomFill_LocFunction.hxx>
#include <GeomFill_Curved.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <GeomFill_DegeneratedBound.hxx>
#include <GeomFill_Sweep.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Tensor.hxx>
#include <GeomFill_BezierCurves.hxx>
#include <GeomFill_Array1OfSectionLaw.hxx>
#include <GeomFill_Filling.hxx>
#include <GeomFill_HArray1OfLocationLaw.hxx>
#include <GeomFill_SectionPlacement.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_TgtField.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_SweepFunction.hxx>
#include <GeomFill_Trihedron.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\GeomFill_CorrectedFrenet.hxx
// ./opencascade\GeomFill_Darboux.hxx
// ./opencascade\GeomFill_CurveAndTrihedron.hxx
// ./opencascade\GeomFill_DiscreteTrihedron.hxx
// ./opencascade\GeomFill_Boundary.hxx
// ./opencascade\GeomFill_BoundWithSurf.hxx
// ./opencascade\GeomFill_CornerState.hxx
// ./opencascade\GeomFill_FunctionGuide.hxx
// ./opencascade\GeomFill.hxx
// ./opencascade\GeomFill_ConstrainedFilling.hxx
// ./opencascade\GeomFill_Generator.hxx
// ./opencascade\GeomFill_BSplineCurves.hxx
// ./opencascade\GeomFill_ApproxStyle.hxx
// ./opencascade\GeomFill_EvolvedSection.hxx
// ./opencascade\GeomFill_UniformSection.hxx
// ./opencascade\GeomFill_ConstantBiNormal.hxx
// ./opencascade\GeomFill_FunctionDraft.hxx
// ./opencascade\GeomFill_LocationLaw.hxx
// ./opencascade\GeomFill_GuideTrihedronAC.hxx
// ./opencascade\GeomFill_HSequenceOfAx2.hxx
// ./opencascade\GeomFill_Stretch.hxx
// ./opencascade\GeomFill_AppSweep.hxx
// ./opencascade\GeomFill_SimpleBound.hxx
// ./opencascade\GeomFill_TgtOnCoons.hxx
// ./opencascade\GeomFill_SequenceOfTrsf.hxx
// ./opencascade\GeomFill_Pipe.hxx
// ./opencascade\GeomFill_SnglrFunc.hxx
// ./opencascade\GeomFill_Coons.hxx
// ./opencascade\GeomFill_SequenceOfAx2.hxx
// ./opencascade\GeomFill_LocationDraft.hxx
// ./opencascade\GeomFill_Line.hxx
// ./opencascade\GeomFill_HArray1OfSectionLaw.hxx
// ./opencascade\GeomFill_PipeError.hxx
// ./opencascade\GeomFill_Frenet.hxx
// ./opencascade\GeomFill_TrihedronLaw.hxx
// ./opencascade\GeomFill_SectionLaw.hxx
// ./opencascade\GeomFill_NSections.hxx
// ./opencascade\GeomFill_Profiler.hxx
// ./opencascade\GeomFill_FillingStyle.hxx
// ./opencascade\GeomFill_CoonsAlgPatch.hxx
// ./opencascade\GeomFill_AppSurf.hxx
// ./opencascade\GeomFill_CircularBlendFunc.hxx
// ./opencascade\GeomFill_QuasiAngularConvertor.hxx
// ./opencascade\GeomFill_Array1OfLocationLaw.hxx
// ./opencascade\GeomFill_PolynomialConvertor.hxx
// ./opencascade\GeomFill_Fixed.hxx
// ./opencascade\GeomFill_GuideTrihedronPlan.hxx
// ./opencascade\GeomFill_PlanFunc.hxx
// ./opencascade\GeomFill_LocFunction.hxx
// ./opencascade\GeomFill_Curved.hxx
// ./opencascade\GeomFill_LocationGuide.hxx
// ./opencascade\GeomFill_DegeneratedBound.hxx
// ./opencascade\GeomFill_Sweep.hxx
// ./opencascade\GeomFill_SectionGenerator.hxx
// ./opencascade\GeomFill_Tensor.hxx
// ./opencascade\GeomFill_BezierCurves.hxx
// ./opencascade\GeomFill_Array1OfSectionLaw.hxx
// ./opencascade\GeomFill_Filling.hxx
// ./opencascade\GeomFill_HArray1OfLocationLaw.hxx
// ./opencascade\GeomFill_SectionPlacement.hxx
// ./opencascade\GeomFill_DraftTrihedron.hxx
// ./opencascade\GeomFill_SweepSectionGenerator.hxx
// ./opencascade\GeomFill_TgtField.hxx
// ./opencascade\GeomFill_TrihedronWithGuide.hxx
// ./opencascade\GeomFill_SweepFunction.hxx
// ./opencascade\GeomFill_Trihedron.hxx

// user-defined post
