// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_ModifyShape_HeaderFile
#define _BRepBuilderAPI_ModifyShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepTools_Modifier.hxx>
#include <TopoDS_Shape.hxx>
#include <Handle_BRepTools_Modification.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
class BRepTools_Modification;
class Standard_NullObject;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Implements   the  methods   of MakeShape for   the
//! constant  topology modifications.  The methods are
//! implemented  when the modification uses a Modifier
//! from BRepTools. Some of  them have to be redefined
//! if  the  modification is  implemented with another
//! tool (see Transform from BRepBuilderAPI for example).
//! The BRepBuilderAPI package provides the following
//! frameworks to perform modifications of this sort:
//! -   BRepBuilderAPI_Copy to produce the copy of a shape,
//! -   BRepBuilderAPI_Transform and
//! BRepBuilderAPI_GTransform to apply a geometric
//! transformation to a shape,
//! -   BRepBuilderAPI_NurbsConvert to convert the
//! whole geometry of a shape into NURBS geometry,
//! -   BRepOffsetAPI_DraftAngle to build a tapered shape.
class BRepBuilderAPI_ModifyShape  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the list  of shapes modified from the shape
  //! <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;
  
  //! Returns the modified shape corresponding to <S>.
  //! S can correspond to the entire initial shape or to its subshape.
  //! Exceptions
  //! Standard_NoSuchObject if S is not the initial shape or
  //! a subshape of the initial shape to which the
  //! transformation has been applied. Raises NoSuchObject from Standard
  //! if S is not the initial shape or a sub-shape
  //! of the initial shape.
  Standard_EXPORT virtual  const  TopoDS_Shape& ModifiedShape (const TopoDS_Shape& S)  const;




protected:

  
  //! Empty constructor.
  Standard_EXPORT BRepBuilderAPI_ModifyShape();
  
  //! Initializes the modifier with  the Shape  <S>, and
  //! set the field <myInitialShape> to <S>.
  Standard_EXPORT BRepBuilderAPI_ModifyShape(const TopoDS_Shape& S);
  
  //! Set the field <myModification> with <M>.
  Standard_EXPORT BRepBuilderAPI_ModifyShape(const Handle(BRepTools_Modification)& M);
  
  //! Initializes the modifier with  the Shape  <S>, and
  //! set the field <myInitialShape> to <S>, and set the
  //! field <myModification> with  <M>, the performs the
  //! modification.
  Standard_EXPORT BRepBuilderAPI_ModifyShape(const TopoDS_Shape& S, const Handle(BRepTools_Modification)& M);
  
  //! Performs the previously  given modification on the
  //! shape <S>.
  Standard_EXPORT   void DoModif (const TopoDS_Shape& S) ;
  
  //! Performs the  modification   <M> on a   previously
  //! given shape.
  Standard_EXPORT   void DoModif (const Handle(BRepTools_Modification)& M) ;
  
  //! Performs the  modification <M> on the shape <S>.
  Standard_EXPORT   void DoModif (const TopoDS_Shape& S, const Handle(BRepTools_Modification)& M) ;


  BRepTools_Modifier myModifier;
  TopoDS_Shape myInitialShape;
  Handle(BRepTools_Modification) myModification;


private:

  
  Standard_EXPORT   void DoModif() ;




};







#endif // _BRepBuilderAPI_ModifyShape_HeaderFile
