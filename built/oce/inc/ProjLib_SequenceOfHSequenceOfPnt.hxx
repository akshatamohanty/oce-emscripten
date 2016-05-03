// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_SequenceOfHSequenceOfPnt_HeaderFile
#define _ProjLib_SequenceOfHSequenceOfPnt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_TColgp_HSequenceOfPnt.hxx>
#include <Handle_ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColgp_HSequenceOfPnt;
class ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt;



class ProjLib_SequenceOfHSequenceOfPnt  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    ProjLib_SequenceOfHSequenceOfPnt();
  
  Standard_EXPORT ProjLib_SequenceOfHSequenceOfPnt(const ProjLib_SequenceOfHSequenceOfPnt& Other);
  
  Standard_EXPORT   void Clear() ;
~ProjLib_SequenceOfHSequenceOfPnt()
{
  Clear();
}
  
  Standard_EXPORT  const  ProjLib_SequenceOfHSequenceOfPnt& Assign (const ProjLib_SequenceOfHSequenceOfPnt& Other) ;
 const  ProjLib_SequenceOfHSequenceOfPnt& operator = (const ProjLib_SequenceOfHSequenceOfPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfPnt)& T) ;
  
      void Append (ProjLib_SequenceOfHSequenceOfPnt& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfPnt)& T) ;
  
      void Prepend (ProjLib_SequenceOfHSequenceOfPnt& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TColgp_HSequenceOfPnt)& T) ;
  
      void InsertBefore (const Standard_Integer Index, ProjLib_SequenceOfHSequenceOfPnt& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TColgp_HSequenceOfPnt)& T) ;
  
      void InsertAfter (const Standard_Integer Index, ProjLib_SequenceOfHSequenceOfPnt& S) ;
  
  Standard_EXPORT  const  Handle(TColgp_HSequenceOfPnt)& First()  const;
  
  Standard_EXPORT  const  Handle(TColgp_HSequenceOfPnt)& Last()  const;
  
      void Split (const Standard_Integer Index, ProjLib_SequenceOfHSequenceOfPnt& Sub) ;
  
  Standard_EXPORT  const  Handle(TColgp_HSequenceOfPnt)& Value (const Standard_Integer Index)  const;
 const  Handle(TColgp_HSequenceOfPnt)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TColgp_HSequenceOfPnt)& I) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfPnt)& ChangeValue (const Standard_Integer Index) ;
  Handle(TColgp_HSequenceOfPnt)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TColgp_HSequenceOfPnt)
#define SeqItem_hxx <TColgp_HSequenceOfPnt.hxx>
#define TCollection_SequenceNode ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt
#define TCollection_SequenceNode_hxx <ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt
#define TCollection_SequenceNode_Type_() ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt_Type_()
#define TCollection_Sequence ProjLib_SequenceOfHSequenceOfPnt
#define TCollection_Sequence_hxx <ProjLib_SequenceOfHSequenceOfPnt.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _ProjLib_SequenceOfHSequenceOfPnt_HeaderFile
