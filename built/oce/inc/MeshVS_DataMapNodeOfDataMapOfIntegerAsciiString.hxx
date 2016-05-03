// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString.hxx>

#include <Standard_Integer.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TCollection_AsciiString;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerAsciiString;
class MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString;



class MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString : public TCollection_MapNode
{

public:

  
    MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString(const Standard_Integer& K, const TCollection_AsciiString& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      TCollection_AsciiString& Value()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString)

protected:




private: 


  Standard_Integer myKey;
  TCollection_AsciiString myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem TCollection_AsciiString
#define TheItem_hxx <TCollection_AsciiString.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerAsciiString
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerAsciiString.hxx>

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




#endif // _MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString_HeaderFile
