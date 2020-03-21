#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <math_Matrix.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <math_Matrix.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <math_Matrix.hxx>

// module includes
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_Type3.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Type1.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Type2.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dGcc_FunctionTanCuCuOnCu.hxx
// ./opencascade/Geom2dGcc_QCurve.hxx
// ./opencascade/Geom2dGcc_Lin2dTanObl.hxx
// ./opencascade/Geom2dGcc.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOn.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuPnt.hxx
// ./opencascade/Geom2dGcc_Type3.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRad.hxx
// ./opencascade/Geom2dGcc_CurveTool.hxx
// ./opencascade/Geom2dGcc_Lin2dTanOblIter.hxx
// ./opencascade/Geom2dGcc_Circ2d3TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnIter.hxx
// ./opencascade/Geom2dGcc_IsParallel.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRadGeo.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnGeo.hxx
// ./opencascade/Geom2dGcc_Type1.hxx
// ./opencascade/Geom2dGcc_QualifiedCurve.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuCu.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRad.hxx
// ./opencascade/Geom2dGcc_Lin2d2Tan.hxx
// ./opencascade/Geom2dGcc_Lin2d2TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCen.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRadGeo.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCenGeo.hxx
// ./opencascade/Geom2dGcc_FunctionTanObl.hxx
// ./opencascade/Geom2dGcc_Type2.hxx
// ./opencascade/Geom2dGcc_Circ2d3Tan.hxx
// ./opencascade/Geom2dGcc_FunctionTanCirCu.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCu.hxx

// user-defined post
