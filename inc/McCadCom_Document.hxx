// File generated by CPPExt (Transient)
//
//
//                     Copyright (C) 1991 - 2000 by
//                      Matra Datavision SA.  All rights reserved.
//
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
//
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadCom_Document_HeaderFile
#define _McCadCom_Document_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCom_Document_HeaderFile
#include <Handle_McCadCom_Document.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_McCadCom_View_HeaderFile
#include <Handle_McCadCom_View.hxx>
#endif

#include <TDocStd_Document.hxx>

class TCollection_ExtendedString;
class McCadCom_View;


//! base Document class <br>
class McCadCom_Document : public MMgt_TShared{

public:
 // Methods PUBLIC
 //


Standard_EXPORT virtual  Standard_Boolean NewDocument(const Standard_Integer& theID = -1) ;


Standard_EXPORT   Standard_Boolean IsInitialized() const;


Standard_EXPORT virtual  Standard_Boolean OpenFile(const TCollection_ExtendedString& aFileName) ;


Standard_EXPORT virtual  Standard_Boolean SaveFile() ;


Standard_EXPORT virtual  Standard_Boolean SaveAsFile(const TCollection_ExtendedString& aFileName) ;


Standard_EXPORT virtual Standard_Boolean IsNew() ;


Standard_EXPORT virtual  void Update() const;


Standard_EXPORT virtual  void Notify() const;


Standard_EXPORT virtual  void Detach(const Handle(McCadCom_View)& theView) ;


Standard_EXPORT virtual  void SetDocName(const TCollection_ExtendedString& theName) ;


Standard_EXPORT virtual  TCollection_ExtendedString GetDocName() const;


Standard_EXPORT virtual  void SetIsModified(const Standard_Boolean theMod) ;


Standard_EXPORT   Standard_Boolean IsSetModified() const;
//Standard_EXPORT ~McCadCom_Document();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 //


Standard_EXPORT McCadCom_Document();


 // Fields PROTECTED
 //
TCollection_ExtendedString myName;
Standard_Boolean myIsModified;
Standard_Boolean myIsInitialized;
Standard_Boolean myIsNew;


private:

 // Methods PRIVATE
 //

 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
