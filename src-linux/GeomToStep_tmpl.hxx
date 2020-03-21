#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Parabola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom_Parabola.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <StepGeom_Vector.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <Geom_Vector.hxx>
#include <Geom2d_Vector.hxx>
#include <StepGeom_Plane.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Plane.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SphericalSurface.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ElementarySurface.hxx>
#include <StepGeom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_Conic.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Conic.hxx>
#include <Geom2d_Conic.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2d.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <StepGeom_Polyline.hxx>
#include <StdFail_NotDone.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax3.hxx>
#include <gp_Trsf.hxx>
#include <Geom_Axis2Placement.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Line.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Line.hxx>
#include <Geom2d_Line.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom2d_Ellipse.hxx>
#include <StepGeom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ConicalSurface.hxx>
#include <StepGeom_Circle.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <Geom_Circle.hxx>
#include <Geom2d_Circle.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <Geom_Direction.hxx>
#include <Geom2d_Direction.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SweptSurface.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom_Hyperbola.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedSurface.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfRevolution.hxx>

// module includes
#include <GeomToStep_MakeBSplineSurfaceWithKnots.hxx>
#include <GeomToStep_MakeParabola.hxx>
#include <GeomToStep_MakeRectangularTrimmedSurface.hxx>
#include <GeomToStep_MakeVector.hxx>
#include <GeomToStep_MakePlane.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <GeomToStep_MakeSphericalSurface.hxx>
#include <GeomToStep_MakeElementarySurface.hxx>
#include <GeomToStep_MakeSurface.hxx>
#include <GeomToStep_MakeConic.hxx>
#include <GeomToStep_MakeAxis1Placement.hxx>
#include <GeomToStep_MakePolyline.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnots.hxx>
#include <GeomToStep_MakeBoundedCurve.hxx>
#include <GeomToStep_MakeAxis2Placement3d.hxx>
#include <GeomToStep_Root.hxx>
#include <GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <GeomToStep_MakeLine.hxx>
#include <GeomToStep_MakeEllipse.hxx>
#include <GeomToStep_MakeCurve.hxx>
#include <GeomToStep_MakeCylindricalSurface.hxx>
#include <GeomToStep_MakeConicalSurface.hxx>
#include <GeomToStep_MakeCircle.hxx>
#include <GeomToStep_MakeCartesianPoint.hxx>
#include <GeomToStep_MakeDirection.hxx>
#include <GeomToStep_MakeSurfaceOfLinearExtrusion.hxx>
#include <GeomToStep_MakeSweptSurface.hxx>
#include <GeomToStep_MakeAxis2Placement2d.hxx>
#include <GeomToStep_MakeToroidalSurface.hxx>
#include <GeomToStep_MakeHyperbola.hxx>
#include <GeomToStep_MakeBoundedSurface.hxx>
#include <GeomToStep_MakeSurfaceOfRevolution.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnots.hxx
// ./opencascade/GeomToStep_MakeParabola.hxx
// ./opencascade/GeomToStep_MakeRectangularTrimmedSurface.hxx
// ./opencascade/GeomToStep_MakeVector.hxx
// ./opencascade/GeomToStep_MakePlane.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/GeomToStep_MakeSphericalSurface.hxx
// ./opencascade/GeomToStep_MakeElementarySurface.hxx
// ./opencascade/GeomToStep_MakeSurface.hxx
// ./opencascade/GeomToStep_MakeConic.hxx
// ./opencascade/GeomToStep_MakeAxis1Placement.hxx
// ./opencascade/GeomToStep_MakePolyline.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnots.hxx
// ./opencascade/GeomToStep_MakeBoundedCurve.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement3d.hxx
// ./opencascade/GeomToStep_Root.hxx
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/GeomToStep_MakeLine.hxx
// ./opencascade/GeomToStep_MakeEllipse.hxx
// ./opencascade/GeomToStep_MakeCurve.hxx
// ./opencascade/GeomToStep_MakeCylindricalSurface.hxx
// ./opencascade/GeomToStep_MakeConicalSurface.hxx
// ./opencascade/GeomToStep_MakeCircle.hxx
// ./opencascade/GeomToStep_MakeCartesianPoint.hxx
// ./opencascade/GeomToStep_MakeDirection.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomToStep_MakeSweptSurface.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement2d.hxx
// ./opencascade/GeomToStep_MakeToroidalSurface.hxx
// ./opencascade/GeomToStep_MakeHyperbola.hxx
// ./opencascade/GeomToStep_MakeBoundedSurface.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfRevolution.hxx

// user-defined post
