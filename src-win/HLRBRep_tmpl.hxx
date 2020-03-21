#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <HLRAlgo_WiresBlock.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRAlgo_Projector.hxx>
#include <TopoDS_Face.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <TopoDS_Edge.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_BCurveTool.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_BSurfaceTool.hxx>
#include <HLRBRep_Surface.hxx>
#include <HLRBRep_CLProps.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_SLProps.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <HLRBRep_EdgeFaceTool.hxx>
#include <HLRBRep_Intersector.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_FaceIterator.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_ShapeToHLR.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_ShapeBounds.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRBRep_EdgeIList.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <HLRBRep_EdgeBuilder.hxx>
#include <HLRBRep_Hider.hxx>
#include <HLRBRep_InternalAlgo.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_BiPoint.hxx>
#include <HLRBRep_BiPnt2D.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_Data.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_FaceData.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <Bnd_Box.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_DomainError.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_TypeMismatch.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <gp_Lin.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRAlgo_Projector.hxx>
#include <IntCurve_IConicTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>

// module includes
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_ShapeToHLR.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_EdgeIList.hxx>
#include <HLRBRep_FaceIterator.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_EdgeFaceTool.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_CLPropsATool.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_Surface.hxx>
#include <HLRBRep_InternalAlgo.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>
#include <HLRBRep_ShapeBounds.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_SeqOfShapeBounds.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_TypeOfResultingEdge.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ListOfBPnt2D.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_ListOfBPoint.hxx>
#include <HLRBRep_SLProps.hxx>
#include <HLRBRep_ListIteratorOfListOfBPoint.hxx>
#include <HLRBRep_BSurfaceTool.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_CLProps.hxx>
#include <HLRBRep_EdgeBuilder.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_Array1OfFData.hxx>
#include <HLRBRep_ListIteratorOfListOfBPnt2D.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_Intersector.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_Array1OfEData.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRBRep_BiPoint.hxx>
#include <HLRBRep_Hider.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_BCurveTool.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_BiPnt2D.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\HLRBRep_FaceData.hxx
// ./opencascade\HLRBRep_ShapeToHLR.hxx
// ./opencascade\HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade\HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx
// ./opencascade\HLRBRep_CurveTool.hxx
// ./opencascade\HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade\HLRBRep.hxx
// ./opencascade\HLRBRep_EdgeInterferenceTool.hxx
// ./opencascade\HLRBRep_EdgeIList.hxx
// ./opencascade\HLRBRep_FaceIterator.hxx
// ./opencascade\HLRBRep_TheExactInterCSurf.hxx
// ./opencascade\HLRBRep_EdgeData.hxx
// ./opencascade\HLRBRep_TheQuadCurvExactInterCSurf.hxx
// ./opencascade\HLRBRep_EdgeFaceTool.hxx
// ./opencascade\HLRBRep_TheCSFunctionOfInterCSurf.hxx
// ./opencascade\HLRBRep_CLPropsATool.hxx
// ./opencascade\HLRBRep_InterCSurf.hxx
// ./opencascade\HLRBRep_Algo.hxx
// ./opencascade\HLRBRep_Surface.hxx
// ./opencascade\HLRBRep_InternalAlgo.hxx
// ./opencascade\HLRBRep_TheIntConicCurveOfCInter.hxx
// ./opencascade\HLRBRep_ThePolyhedronOfInterCSurf.hxx
// ./opencascade\HLRBRep_CInter.hxx
// ./opencascade\HLRBRep_PolyHLRToShape.hxx
// ./opencascade\HLRBRep_ShapeBounds.hxx
// ./opencascade\HLRBRep_IntConicCurveOfCInter.hxx
// ./opencascade\HLRBRep_AreaLimit.hxx
// ./opencascade\HLRBRep_ThePolygonOfInterCSurf.hxx
// ./opencascade\HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx
// ./opencascade\HLRBRep_SeqOfShapeBounds.hxx
// ./opencascade\HLRBRep_Data.hxx
// ./opencascade\HLRBRep_TypeOfResultingEdge.hxx
// ./opencascade\HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade\HLRBRep_ListOfBPnt2D.hxx
// ./opencascade\HLRBRep_TheInterferenceOfInterCSurf.hxx
// ./opencascade\HLRBRep_ListOfBPoint.hxx
// ./opencascade\HLRBRep_SLProps.hxx
// ./opencascade\HLRBRep_ListIteratorOfListOfBPoint.hxx
// ./opencascade\HLRBRep_BSurfaceTool.hxx
// ./opencascade\HLRBRep_SLPropsATool.hxx
// ./opencascade\HLRBRep_PolyAlgo.hxx
// ./opencascade\HLRBRep_ThePolyhedronToolOfInterCSurf.hxx
// ./opencascade\HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx
// ./opencascade\HLRBRep_HLRToShape.hxx
// ./opencascade\HLRBRep_CLProps.hxx
// ./opencascade\HLRBRep_EdgeBuilder.hxx
// ./opencascade\HLRBRep_SurfaceTool.hxx
// ./opencascade\HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx
// ./opencascade\HLRBRep_ThePolygonToolOfInterCSurf.hxx
// ./opencascade\HLRBRep_Array1OfFData.hxx
// ./opencascade\HLRBRep_ListIteratorOfListOfBPnt2D.hxx
// ./opencascade\HLRBRep_LineTool.hxx
// ./opencascade\HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx
// ./opencascade\HLRBRep_Intersector.hxx
// ./opencascade\HLRBRep_Curve.hxx
// ./opencascade\HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx
// ./opencascade\HLRBRep_Array1OfEData.hxx
// ./opencascade\HLRBRep_VertexList.hxx
// ./opencascade\HLRBRep_BiPoint.hxx
// ./opencascade\HLRBRep_Hider.hxx
// ./opencascade\HLRBRep_TheProjPCurOfCInter.hxx
// ./opencascade\HLRBRep_BCurveTool.hxx
// ./opencascade\HLRBRep_TheIntPCurvePCurveOfCInter.hxx
// ./opencascade\HLRBRep_BiPnt2D.hxx

// user-defined post
