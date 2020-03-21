#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>

// module includes
#include <ProjLib_Projector.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_SequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_Torus.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_HSequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Cone.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ProjLib_Projector.hxx
// ./opencascade/ProjLib_Cylinder.hxx
// ./opencascade/ProjLib.hxx
// ./opencascade/ProjLib_ComputeApprox.hxx
// ./opencascade/ProjLib_ComputeApproxOnPolarSurface.hxx
// ./opencascade/ProjLib_HCompProjectedCurve.hxx
// ./opencascade/ProjLib_Plane.hxx
// ./opencascade/ProjLib_ProjectedCurve.hxx
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib_CompProjectedCurve.hxx
// ./opencascade/ProjLib_Torus.hxx
// ./opencascade/ProjLib_ProjectOnPlane.hxx
// ./opencascade/ProjLib_PrjResolve.hxx
// ./opencascade/ProjLib_HSequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib_ProjectOnSurface.hxx
// ./opencascade/ProjLib_HProjectedCurve.hxx
// ./opencascade/ProjLib_PrjFunc.hxx
// ./opencascade/ProjLib_Sphere.hxx
// ./opencascade/ProjLib_Cone.hxx

// user-defined post
