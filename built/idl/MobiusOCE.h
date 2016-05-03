#include <iostream>
#include <stdio.h>
//#include <vector>
#include <gp_Pnt.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRep_Builder.hxx>
#include <BRepLib.hxx>
#include <gp_Ax1.hxx>
#include <gp_Trsf.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepFilletAPI_MakeFillet.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepAlgoAPI_Cut.hxx>
#include <TopExp_Explorer.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <GCE2d_MakeSegment.hxx>

using namespace std;

class Topology{
	// implements visualize to get TopoDS_Shape from contained object
	public:
	TopoDS_Shape& visualize();
	//std::vector<T_Face> Faces();
};

class T_Vertex: public Topology
{
	public:
	T_Vertex();
	T_Vertex(const Standard_Real x, const Standard_Real y, const Standard_Real z); 
	gp_Pnt& getNativePoint();
};



class T_Solid: public Topology
{
	public:
	Standard_EXPORT T_Solid();
	Standard_EXPORT T_Solid(TopoDS_Shape& solid); 
	
	TopoDS_Shape& booleanOp(T_Solid& other_solid);

	TopoDS_Shape& getNativeSolid();
	//TopoDS_Shape& visualize();
};

class T_Face: public Topology
{
	public:
	Standard_EXPORT T_Face();
	Standard_EXPORT T_Face(TopoDS_Face& face); 
	
	T_Solid& extrude(const Standard_Real x, const Standard_Real y, const Standard_Real z);

	TopoDS_Face& getNativeFace();
	T_Face& offsetFace();
	//TopoDS_Shape& visualize();
};

class Mobius{
	public:
	Mobius();
	T_Face& MakePolygon(T_Vertex& aPnt1, T_Vertex& aPnt2, T_Vertex& aPnt3, T_Vertex& aPnt4);
	T_Solid& MakeBox(const Standard_Real length, const Standard_Real width, const Standard_Real height);
	T_Solid& MakeCylinder(const Standard_Real radius, const Standard_Real height);
};







