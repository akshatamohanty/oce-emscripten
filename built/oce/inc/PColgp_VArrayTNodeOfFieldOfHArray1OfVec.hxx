// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayTNodeOfFieldOfHArray1OfVec_HeaderFile
#define _PColgp_VArrayTNodeOfFieldOfHArray1OfVec_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Vec.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfVec.hxx>
#include <Standard_Address.hxx>
class gp_Vec;
class PColgp_FieldOfHArray1OfVec;
class PColgp_VArrayNodeOfFieldOfHArray1OfVec;



class PColgp_VArrayTNodeOfFieldOfHArray1OfVec 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColgp_VArrayTNodeOfFieldOfHArray1OfVec();
  
    PColgp_VArrayTNodeOfFieldOfHArray1OfVec(const gp_Vec& aValue);
  
      void SetValue (const gp_Vec& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  gp_Vec myValue;


};

#define Item gp_Vec
#define Item_hxx <gp_Vec.hxx>
#define DBC_VArrayNode PColgp_VArrayNodeOfFieldOfHArray1OfVec
#define DBC_VArrayNode_hxx <PColgp_VArrayNodeOfFieldOfHArray1OfVec.hxx>
#define DBC_VArrayTNode PColgp_VArrayTNodeOfFieldOfHArray1OfVec
#define DBC_VArrayTNode_hxx <PColgp_VArrayTNodeOfFieldOfHArray1OfVec.hxx>
#define Handle_DBC_VArrayNode Handle_PColgp_VArrayNodeOfFieldOfHArray1OfVec
#define DBC_VArrayNode_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfVec_Type_()
#define DBC_VArray PColgp_FieldOfHArray1OfVec
#define DBC_VArray_hxx <PColgp_FieldOfHArray1OfVec.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PColgp_VArrayTNodeOfFieldOfHArray1OfVec_HeaderFile
