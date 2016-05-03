// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_BaseArray_HeaderFile
#define _DBC_BaseArray_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <DBC_DBVArray.hxx>
#include <Standard_Storable.hxx>
#include <Standard_Address.hxx>
#include <Standard_PrimitiveTypes.hxx>
class Standard_NullObject;
class Standard_NegativeValue;
class Standard_DimensionMismatch;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(DBC_BaseArray);


class DBC_BaseArray 
{

public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an BaseArray of NULL size
  Standard_EXPORT DBC_BaseArray();
  
  //! Creates  an BaseArray of lower bound 0 and
  //! upper bound <Size>-1.
  Standard_EXPORT DBC_BaseArray(const Standard_Integer Size);
  
  //! Creates an array which  is the copy of the given
  //! argument.
  Standard_EXPORT DBC_BaseArray(const DBC_BaseArray& BaseArray);
  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~DBC_BaseArray(){Delete();}
  
      Standard_Integer Length()  const;
  
  //! Returns the upper bound
      Standard_Integer Upper()  const;
  
  //! Locks the array <me> in memory and
  //! returns its virtual address
  Standard_EXPORT   Standard_Address Lock()  const;
  
  //! unlocks the array <me> from memory
  Standard_EXPORT   void Unlock()  const;
    Standard_Integer _CSFDB_GetDBC_BaseArraymySize() const { return mySize; }
    void _CSFDB_SetDBC_BaseArraymySize(const Standard_Integer p) { mySize = p; }
    DBC_DBVArray _CSFDB_GetDBC_BaseArraymyData() const { return myData; }
    void _CSFDB_SetDBC_BaseArraymyData(const DBC_DBVArray p) { myData = p; }



protected:


  Standard_Integer mySize;
  DBC_DBVArray myData;


private: 




};


#include <DBC_BaseArray.lxx>





#endif // _DBC_BaseArray_HeaderFile
