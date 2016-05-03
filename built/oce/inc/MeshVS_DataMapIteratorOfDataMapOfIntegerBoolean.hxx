// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean.hxx>
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerBoolean;
class MeshVS_DataMapNodeOfDataMapOfIntegerBoolean;



class MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean();
  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean(const MeshVS_DataMapOfIntegerBoolean& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_DataMapOfIntegerBoolean& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Standard_Boolean& Value()  const;




protected:





private:





};







#endif // _MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean_HeaderFile
