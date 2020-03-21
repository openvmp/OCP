#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bnd_Box.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_GLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>

// module includes
#include <TopOpeBRep.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_PIntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_ListOfBipoint.hxx>
#include <TopOpeBRep_P2Dstatus.hxx>
#include <TopOpeBRep_PThePointOfIntersection.hxx>
#include <TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx>
#include <TopOpeBRep_PPntOn2S.hxx>
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_Array1OfLineInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#include <TopOpeBRep_PFacesFiller.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_TypeLineCurve.hxx>
#include <TopOpeBRep_PLineInter.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_traceSIFF.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_HArray1OfVPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRep_Array1OfVPointInter.hxx>
#include <TopOpeBRep_HArray1OfLineInter.hxx>
#include <TopOpeBRep_SequenceOfPoint2d.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_PFacesIntersector.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_define.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_DRAW.hxx>
#include <TopOpeBRep_PEdgesIntersector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopOpeBRep.hxx
// ./opencascade/TopOpeBRep_ShapeScanner.hxx
// ./opencascade/TopOpeBRep_PIntRes2d_IntersectionPoint.hxx
// ./opencascade/TopOpeBRep_FaceEdgeFiller.hxx
// ./opencascade/TopOpeBRep_EdgesFiller.hxx
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
// ./opencascade/TopOpeBRep_P2Dstatus.hxx
// ./opencascade/TopOpeBRep_PThePointOfIntersection.hxx
// ./opencascade/TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_PPntOn2S.hxx
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_FacesIntersector.hxx
// ./opencascade/TopOpeBRep_WPointInter.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector2d.hxx
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
// ./opencascade/TopOpeBRep_LineInter.hxx
// ./opencascade/TopOpeBRep_FaceEdgeIntersector.hxx
// ./opencascade/TopOpeBRep_ListIteratorOfListOfBipoint.hxx
// ./opencascade/TopOpeBRep_PFacesFiller.hxx
// ./opencascade/TopOpeBRep_PointClassifier.hxx
// ./opencascade/TopOpeBRep_VPointInterClassifier.hxx
// ./opencascade/TopOpeBRep_DSFiller.hxx
// ./opencascade/TopOpeBRep_Hctxee2d.hxx
// ./opencascade/TopOpeBRep_EdgesIntersector.hxx
// ./opencascade/TopOpeBRep_TypeLineCurve.hxx
// ./opencascade/TopOpeBRep_PLineInter.hxx
// ./opencascade/TopOpeBRep_FFTransitionTool.hxx
// ./opencascade/TopOpeBRep_FacesFiller.hxx
// ./opencascade/TopOpeBRep_traceSIFF.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector.hxx
// ./opencascade/TopOpeBRep_VPointInter.hxx
// ./opencascade/TopOpeBRep_GeomTool.hxx
// ./opencascade/TopOpeBRep_Bipoint.hxx
// ./opencascade/TopOpeBRep_HArray1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_WPointInterIterator.hxx
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_HArray1OfLineInter.hxx
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
// ./opencascade/TopOpeBRep_PointGeomTool.hxx
// ./opencascade/TopOpeBRep_FFDumper.hxx
// ./opencascade/TopOpeBRep_PFacesIntersector.hxx
// ./opencascade/TopOpeBRep_Hctxff2d.hxx
// ./opencascade/TopOpeBRep_define.hxx
// ./opencascade/TopOpeBRep_VPointInterIterator.hxx
// ./opencascade/TopOpeBRep_Point2d.hxx
// ./opencascade/TopOpeBRep_DRAW.hxx
// ./opencascade/TopOpeBRep_PEdgesIntersector.hxx

// user-defined post
