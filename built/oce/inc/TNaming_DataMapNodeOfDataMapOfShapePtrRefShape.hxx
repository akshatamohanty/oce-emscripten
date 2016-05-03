// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_HeaderFile
#define _TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>

#include <TopoDS_Shape.hxx>
#include <TNaming_PtrRefShape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TNaming_DataMapOfShapePtrRefShape;
class TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape;



class TNaming_DataMapNodeOfDataMapOfShapePtrRefShape : public TCollection_MapNode
{

public:

  
    TNaming_DataMapNodeOfDataMapOfShapePtrRefShape(const TopoDS_Shape& K, const TNaming_PtrRefShape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TNaming_PtrRefShape& Value()  const;




  DEFINE_STANDARD_RTTI(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape)

protected:




private: 


  TopoDS_Shape myKey;
  TNaming_PtrRefShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TNaming_PtrRefShape
#define TheItem_hxx <TNaming_PtrRefShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TNaming_DataMapNodeOfDataMapOfShapePtrRefShape
#define TCollection_DataMapNode_hxx <TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>
#define TCollection_DataMapIterator TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape
#define TCollection_DataMapIterator_hxx <TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TNaming_DataMapNodeOfDataMapOfShapePtrRefShape
#define TCollection_DataMapNode_Type_() TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_Type_()
#define TCollection_DataMap TNaming_DataMapOfShapePtrRefShape
#define TCollection_DataMap_hxx <TNaming_DataMapOfShapePtrRefShape.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_HeaderFile
