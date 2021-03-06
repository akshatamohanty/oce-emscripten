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
	
	protected:
	static TopoDS_Shape shape;
	// implements visualize to get TopoDS_Shape from contained object
	
	public:
	TopoDS_Shape& visualize();
	//std::vector<T_Face> Faces();
};

TopoDS_Shape& Topology::visualize(){
	return shape;
};
/*
std::vector<T_Face> Topology::Faces(){

	std::vector<T_Face> faces;
	for(TopExp_Explorer ex*(shape, TopAbs_FACE); ex.More(); ex.Next()){
		TopoDS_Face currentFace = TopoDS::Face(ex.Current());
		T_Face currFace( currentFace );
		faces.push_back(currentFace);
	}
	return faces;

};*/

class T_Vertex: public Topology
{
	private:
	gp_Pnt n_point;  
	
	public:
	Standard_EXPORT T_Vertex();
	Standard_EXPORT T_Vertex(const Standard_Real x, const Standard_Real y, const Standard_Real z); 
	gp_Pnt& getNativePoint();
};

Standard_EXPORT T_Vertex::T_Vertex(){
	n_point = gp_Pnt(0.,0.,0.);	  
};

Standard_EXPORT T_Vertex::T_Vertex(const Standard_Real x, const Standard_Real y, const Standard_Real z){
	n_point = gp_Pnt( x, y, z );
};

gp_Pnt& T_Vertex::getNativePoint(){
	return n_point;
};

class T_Solid: public Topology
{
	private:
	TopoDS_Shape n_solid;  
	
	public:
	// constructors
	Standard_EXPORT T_Solid();
	Standard_EXPORT T_Solid(TopoDS_Shape& shape); 

	// Additionals
	TopoDS_Shape& booleanOp(T_Solid& other_solid);

	// Functions used internally
	TopoDS_Shape& getNativeSolid();
	//TopoDS_Shape& visualize();
};

Standard_EXPORT T_Solid::T_Solid(){
		  
};

Standard_EXPORT T_Solid::T_Solid(TopoDS_Shape& solid){
	n_solid = solid;
	shape = solid;
};

TopoDS_Shape& T_Solid::booleanOp(T_Solid& other_solid){
	BRepAlgoAPI_Cut cutMaker(n_solid, other_solid.getNativeSolid());
	static TopoDS_Shape boolean = cutMaker.Shape();
	return boolean;
};

TopoDS_Shape& T_Solid::getNativeSolid(){
	return n_solid;
};

class T_Face: public Topology
{
	private:
	TopoDS_Face n_face;  
	
	public:
	// constructors
	Standard_EXPORT T_Face();
	Standard_EXPORT T_Face(TopoDS_Face& face); 

	// Additionals
	T_Solid& extrude(const Standard_Real x, const Standard_Real y, const Standard_Real z);

	// Functions used internally
	TopoDS_Face& getNativeFace();
	T_Face& offsetFace();
	//TopoDS_Shape& visualize();
};

Standard_EXPORT T_Face::T_Face(){
		  
};

Standard_EXPORT T_Face::T_Face(TopoDS_Face& face){
	n_face = face;
	shape = n_face;
};

T_Solid& T_Face::extrude(const Standard_Real x, const Standard_Real y, const Standard_Real z){
    gp_Vec aPrismVec(x, y, z);
    TopoDS_Shape myExtrusion = BRepPrimAPI_MakePrism(n_face, aPrismVec);
    static T_Solid mySolid(myExtrusion);	
    return mySolid;
};

TopoDS_Face& T_Face::getNativeFace(){
	return n_face;
};

/*TopoDS_Shape& T_Face::visualize(){
	shape = n_face;
	return shape;
};*/




class Mobius{
	public:
	Standard_EXPORT Mobius();	
	T_Face& MakePolygon(T_Vertex& aPnt1, T_Vertex& aPnt2, T_Vertex& aPnt3, T_Vertex& aPnt4);
	T_Solid& MakeBox(const Standard_Real length, const Standard_Real width, const Standard_Real height);
	T_Solid& MakeCylinder(const Standard_Real radius, const Standard_Real height);
};

Standard_EXPORT Mobius::Mobius(){
};

T_Face& Mobius::MakePolygon(T_Vertex& aPnt1, T_Vertex& aPnt2, T_Vertex& aPnt3, T_Vertex& aPnt4)
{
    
    Handle(Geom_TrimmedCurve) aSegment1 = GC_MakeSegment(aPnt1.getNativePoint(), aPnt2.getNativePoint());
    Handle(Geom_TrimmedCurve) aSegment2 = GC_MakeSegment(aPnt2.getNativePoint(), aPnt3.getNativePoint());
    Handle(Geom_TrimmedCurve) aSegment3 = GC_MakeSegment(aPnt3.getNativePoint(), aPnt4.getNativePoint());
    Handle(Geom_TrimmedCurve) aSegment4 = GC_MakeSegment(aPnt4.getNativePoint(), aPnt1.getNativePoint());
    // Profile : Define the Topology
    TopoDS_Edge anEdge1 = BRepBuilderAPI_MakeEdge(aSegment1);
    TopoDS_Edge anEdge2 = BRepBuilderAPI_MakeEdge(aSegment2);
    TopoDS_Edge anEdge3 = BRepBuilderAPI_MakeEdge(aSegment3);
    TopoDS_Edge anEdge4 = BRepBuilderAPI_MakeEdge(aSegment4);

    TopoDS_Wire aWire  = BRepBuilderAPI_MakeWire(anEdge1, anEdge2, anEdge3, anEdge4);

    // Body : Prism the Profile
    TopoDS_Face myFaceProfile = BRepBuilderAPI_MakeFace(aWire);
    //gp_Vec aPrismVec(0, 0, 20.0);
    //static TopoDS_Shape myBody = BRepPrimAPI_MakePrism(myFaceProfile, aPrismVec);
    //static TopoDS_Shape myBody = myFaceProfile;
    //return myBody; 
    static T_Face myFace(myFaceProfile);
    return myFace;
};

T_Solid& Mobius::MakeBox(const Standard_Real length, const Standard_Real width, const Standard_Real height){
	gp_Pnt lowerLeftCornerOfBox(0.0, 0.0, 0.0);
	BRepPrimAPI_MakeBox boxMaker(lowerLeftCornerOfBox, length, width, height);
	TopoDS_Shape box = boxMaker.Shape();
	static T_Solid mySolid(box);
	return mySolid;
};

T_Solid& Mobius::MakeCylinder(const Standard_Real radius, const Standard_Real height){
	BRepPrimAPI_MakeCylinder cylinderMaker( radius, height );
	TopoDS_Shape cylinder = cylinderMaker.Shape();
	static T_Solid mySolid(cylinder);
	return mySolid;
};


