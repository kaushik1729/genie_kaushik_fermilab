// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhPDF

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "LHAPDF5.h"
#include "PDF.h"
#include "LHAPDF6.h"
#include "PDFModelI.h"
#include "GRV98LO.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Algorithm/AlgStatus.h", 26,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &genie_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genie_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *geniecLcLPDFModelI_Dictionary();
   static void geniecLcLPDFModelI_TClassManip(TClass*);
   static void delete_geniecLcLPDFModelI(void *p);
   static void deleteArray_geniecLcLPDFModelI(void *p);
   static void destruct_geniecLcLPDFModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PDFModelI*)
   {
      ::genie::PDFModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PDFModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PDFModelI", "PDFModelI.h", 29,
                  typeid(::genie::PDFModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPDFModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PDFModelI) );
      instance.SetDelete(&delete_geniecLcLPDFModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLPDFModelI);
      instance.SetDestructor(&destruct_geniecLcLPDFModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PDFModelI*)
   {
      return GenerateInitInstanceLocal((::genie::PDFModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PDFModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPDFModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PDFModelI*)0x0)->GetClass();
      geniecLcLPDFModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPDFModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLHAPDF5_Dictionary();
   static void geniecLcLLHAPDF5_TClassManip(TClass*);
   static void *new_geniecLcLLHAPDF5(void *p = 0);
   static void *newArray_geniecLcLLHAPDF5(Long_t size, void *p);
   static void delete_geniecLcLLHAPDF5(void *p);
   static void deleteArray_geniecLcLLHAPDF5(void *p);
   static void destruct_geniecLcLLHAPDF5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LHAPDF5*)
   {
      ::genie::LHAPDF5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LHAPDF5));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LHAPDF5", "", 32,
                  typeid(::genie::LHAPDF5), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLHAPDF5_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LHAPDF5) );
      instance.SetNew(&new_geniecLcLLHAPDF5);
      instance.SetNewArray(&newArray_geniecLcLLHAPDF5);
      instance.SetDelete(&delete_geniecLcLLHAPDF5);
      instance.SetDeleteArray(&deleteArray_geniecLcLLHAPDF5);
      instance.SetDestructor(&destruct_geniecLcLLHAPDF5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LHAPDF5*)
   {
      return GenerateInitInstanceLocal((::genie::LHAPDF5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LHAPDF5*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLHAPDF5_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LHAPDF5*)0x0)->GetClass();
      geniecLcLLHAPDF5_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLHAPDF5_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPDF_Dictionary();
   static void geniecLcLPDF_TClassManip(TClass*);
   static void *new_geniecLcLPDF(void *p = 0);
   static void *newArray_geniecLcLPDF(Long_t size, void *p);
   static void delete_geniecLcLPDF(void *p);
   static void deleteArray_geniecLcLPDF(void *p);
   static void destruct_geniecLcLPDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PDF*)
   {
      ::genie::PDF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PDF));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PDF", "", 106,
                  typeid(::genie::PDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPDF_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PDF) );
      instance.SetNew(&new_geniecLcLPDF);
      instance.SetNewArray(&newArray_geniecLcLPDF);
      instance.SetDelete(&delete_geniecLcLPDF);
      instance.SetDeleteArray(&deleteArray_geniecLcLPDF);
      instance.SetDestructor(&destruct_geniecLcLPDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PDF*)
   {
      return GenerateInitInstanceLocal((::genie::PDF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PDF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPDF_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PDF*)0x0)->GetClass();
      geniecLcLPDF_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPDF_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLHAPDF6_Dictionary();
   static void geniecLcLLHAPDF6_TClassManip(TClass*);
   static void *new_geniecLcLLHAPDF6(void *p = 0);
   static void *newArray_geniecLcLLHAPDF6(Long_t size, void *p);
   static void delete_geniecLcLLHAPDF6(void *p);
   static void deleteArray_geniecLcLLHAPDF6(void *p);
   static void destruct_geniecLcLLHAPDF6(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LHAPDF6*)
   {
      ::genie::LHAPDF6 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LHAPDF6));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LHAPDF6", "", 200,
                  typeid(::genie::LHAPDF6), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLHAPDF6_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LHAPDF6) );
      instance.SetNew(&new_geniecLcLLHAPDF6);
      instance.SetNewArray(&newArray_geniecLcLLHAPDF6);
      instance.SetDelete(&delete_geniecLcLLHAPDF6);
      instance.SetDeleteArray(&deleteArray_geniecLcLLHAPDF6);
      instance.SetDestructor(&destruct_geniecLcLLHAPDF6);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LHAPDF6*)
   {
      return GenerateInitInstanceLocal((::genie::LHAPDF6*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LHAPDF6*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLHAPDF6_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LHAPDF6*)0x0)->GetClass();
      geniecLcLLHAPDF6_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLHAPDF6_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGRV98LO_Dictionary();
   static void geniecLcLGRV98LO_TClassManip(TClass*);
   static void *new_geniecLcLGRV98LO(void *p = 0);
   static void *newArray_geniecLcLGRV98LO(Long_t size, void *p);
   static void delete_geniecLcLGRV98LO(void *p);
   static void deleteArray_geniecLcLGRV98LO(void *p);
   static void destruct_geniecLcLGRV98LO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GRV98LO*)
   {
      ::genie::GRV98LO *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GRV98LO));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GRV98LO", "", 336,
                  typeid(::genie::GRV98LO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGRV98LO_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GRV98LO) );
      instance.SetNew(&new_geniecLcLGRV98LO);
      instance.SetNewArray(&newArray_geniecLcLGRV98LO);
      instance.SetDelete(&delete_geniecLcLGRV98LO);
      instance.SetDeleteArray(&deleteArray_geniecLcLGRV98LO);
      instance.SetDestructor(&destruct_geniecLcLGRV98LO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GRV98LO*)
   {
      return GenerateInitInstanceLocal((::genie::GRV98LO*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::GRV98LO*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGRV98LO_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::GRV98LO*)0x0)->GetClass();
      geniecLcLGRV98LO_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGRV98LO_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLPDFModelI(void *p) {
      delete ((::genie::PDFModelI*)p);
   }
   static void deleteArray_geniecLcLPDFModelI(void *p) {
      delete [] ((::genie::PDFModelI*)p);
   }
   static void destruct_geniecLcLPDFModelI(void *p) {
      typedef ::genie::PDFModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::PDFModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLHAPDF5(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LHAPDF5 : new ::genie::LHAPDF5;
   }
   static void *newArray_geniecLcLLHAPDF5(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LHAPDF5[nElements] : new ::genie::LHAPDF5[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLHAPDF5(void *p) {
      delete ((::genie::LHAPDF5*)p);
   }
   static void deleteArray_geniecLcLLHAPDF5(void *p) {
      delete [] ((::genie::LHAPDF5*)p);
   }
   static void destruct_geniecLcLLHAPDF5(void *p) {
      typedef ::genie::LHAPDF5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LHAPDF5

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPDF(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PDF : new ::genie::PDF;
   }
   static void *newArray_geniecLcLPDF(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PDF[nElements] : new ::genie::PDF[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPDF(void *p) {
      delete ((::genie::PDF*)p);
   }
   static void deleteArray_geniecLcLPDF(void *p) {
      delete [] ((::genie::PDF*)p);
   }
   static void destruct_geniecLcLPDF(void *p) {
      typedef ::genie::PDF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::PDF

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLHAPDF6(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LHAPDF6 : new ::genie::LHAPDF6;
   }
   static void *newArray_geniecLcLLHAPDF6(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LHAPDF6[nElements] : new ::genie::LHAPDF6[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLHAPDF6(void *p) {
      delete ((::genie::LHAPDF6*)p);
   }
   static void deleteArray_geniecLcLLHAPDF6(void *p) {
      delete [] ((::genie::LHAPDF6*)p);
   }
   static void destruct_geniecLcLLHAPDF6(void *p) {
      typedef ::genie::LHAPDF6 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LHAPDF6

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGRV98LO(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GRV98LO : new ::genie::GRV98LO;
   }
   static void *newArray_geniecLcLGRV98LO(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GRV98LO[nElements] : new ::genie::GRV98LO[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGRV98LO(void *p) {
      delete ((::genie::GRV98LO*)p);
   }
   static void deleteArray_geniecLcLGRV98LO(void *p) {
      delete [] ((::genie::GRV98LO*)p);
   }
   static void destruct_geniecLcLGRV98LO(void *p) {
      typedef ::genie::GRV98LO current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::GRV98LO

namespace {
  void TriggerDictionaryInitialization_libGPhPDF_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/PartonDistributions",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/PartonDistributions",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/PartonDistributions",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/PartonDistributions/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhPDF dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/PartonDistributions/PDFModelI.h")))  PDFModelI;}
namespace genie{class LHAPDF5;}
namespace genie{class PDF;}
namespace genie{class LHAPDF6;}
namespace genie{class GRV98LO;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhPDF dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::LHAPDF5

\brief    LHAPDF5 library interface.
          Concrete implementation of the PDFModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 06, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LHAPDF5_H_
#define _LHAPDF5_H_

#include "Physics/PartonDistributions/PDFModelI.h"

namespace genie {

class LHAPDF5 : public PDFModelI {

public:

  LHAPDF5();
  LHAPDF5(string config);
  virtual ~LHAPDF5();

  // Implement PDFModelI interface

  double UpValence   (double x, double Q2) const;
  double DownValence (double x, double Q2) const;
  double UpSea       (double x, double Q2) const;
  double DownSea     (double x, double Q2) const;
  double Strange     (double x, double Q2) const;
  double Charm       (double x, double Q2) const;
  double Bottom      (double x, double Q2) const;
  double Top         (double x, double Q2) const;
  double Gluon       (double x, double Q2) const;
  PDF_t  AllPDFs     (double x, double Q2) const;

  // Override the default "Confugure" implementation 
  // of the Algorithm interface

  void Configure (const Registry & config);
  void Configure (string config);

private:

  void   Initialize          (void) const;
  void   SetPDFSetFromConfig (void) const;
};

}         // genie namespace

#endif    // _LHAPDF5_H_
//____________________________________________________________________________
/*!

\class    genie::PDF

\brief    A class to store PDFs.

          This class is using the \b Strategy Pattern. \n
          It can accept requests to calculate itself, for a given (x,q^2) pair,
          that it then delegates to the algorithmic object, implementing the
          PDFModelI interface, that it finds attached to itself.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PDF_H_
#define _PDF_H_

#include <iostream>

#include "Physics/PartonDistributions/PDFModelI.h"

using std::ostream;

namespace genie {

class PDF;
ostream & operator << (ostream & stream, const PDF & pdf_set);

class PDF {

public:

  PDF();
  PDF(const PDF & pdf_set);
  virtual ~PDF();

  //-- methods to set a PDFModelI and compute PDFs
  void   SetModel  (const PDFModelI * model);
  void   Calculate (double x, double q2);

  //-- methods to access the computed PDFs
  double UpValence   (void) const { return fUpValence;   }
  double DownValence (void) const { return fDownValence; }
  double UpSea       (void) const { return fUpSea;       }
  double DownSea     (void) const { return fDownSea;     }
  double Strange     (void) const { return fStrange;     }
  double Charm       (void) const { return fCharm;       }
  double Bottom      (void) const { return fBottom;      }
  double Top         (void) const { return fTop;         }
  double Gluon       (void) const { return fGluon;       }

  //-- methods to scale sea and valence PDFs (eg used to apply 
  //   corrections from non-QCD based fits / etc see Bodek Yang model)
  void ScaleValence     (double kscale);
  void ScaleSea         (double kscale);
  void ScaleUpValence   (double kscale);
  void ScaleDownValence (double kscale);
  void ScaleUpSea       (double kscale);
  void ScaleDownSea     (double kscale);
  void ScaleStrange     (double kscale);
  void ScaleCharm       (double kscale);

  //-- reseting/copying methods
  void Reset (void);
  void Copy  (const PDF & pdf_set);

  //-- printing methods & operators
  void Print(ostream & stream) const;
  friend ostream & operator << (ostream & stream, const PDF & pdf_set);

protected:

  void Init(void);

  double fUpValence;
  double fDownValence;
  double fUpSea;
  double fDownSea;
  double fStrange;
  double fCharm;
  double fBottom;
  double fTop;
  double fGluon;

  const PDFModelI * fModel;
};

}         // genie namespace

#endif    // _PDF_H_
//____________________________________________________________________________
/*!

\class    genie::LHAPDF6

\brief    LHAPDF6 library interface.
          Concrete implementation of the PDFModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 20, 2018

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GENIE_LHAPDF6_INTERFACE_H_
#define _GENIE_LHAPDF6_INTERFACE_H_

#include "Physics/PartonDistributions/PDFModelI.h"

namespace LHAPDF
{
  class PDF;
}

namespace genie {

class LHAPDF6 : public PDFModelI {

public:

  LHAPDF6();
  LHAPDF6(string config);
  virtual ~LHAPDF6();

  // Implement the PDFModelI interface

  double UpValence   (double x, double Q2) const;
  double DownValence (double x, double Q2) const;
  double UpSea       (double x, double Q2) const;
  double DownSea     (double x, double Q2) const;
  double Strange     (double x, double Q2) const;
  double Charm       (double x, double Q2) const;
  double Bottom      (double x, double Q2) const;
  double Top         (double x, double Q2) const;
  double Gluon       (double x, double Q2) const;
  PDF_t  AllPDFs     (double x, double Q2) const;

  // Override the default "Configure" implementation 
  // of the Algorithm interface

  void Configure (const Registry & config);
  void Configure (string config);

private:

  void LoadConfig (void);

  string fSetName;
  int    fMemberID;

  LHAPDF::PDF * fLHAPDF;

};

}         // genie namespace
#endif    // _GENIE_LHAPDF6_INTERFACE_H_
//____________________________________________________________________________
/*!

\class    genie::PDFModelI

\brief    Pure abstract base class. Defines the PDFModelI interface to be
          implemented by wrapper classes to existing Parton Density Function
          libraries (PDFLIB, LHAPDF), or by built-in implementations.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PDF_MODEL_I_H_
#define _PDF_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Physics/PartonDistributions/PDFt.h"

namespace genie {

class PDFModelI : public Algorithm {

public:

  virtual ~PDFModelI();

  //-- define PDFModelI interface

  virtual double UpValence   (double x, double Q2) const = 0;
  virtual double DownValence (double x, double Q2) const = 0;
  virtual double UpSea       (double x, double Q2) const = 0;
  virtual double DownSea     (double x, double Q2) const = 0;
  virtual double Strange     (double x, double Q2) const = 0;
  virtual double Charm       (double x, double Q2) const = 0;
  virtual double Bottom      (double x, double Q2) const = 0;
  virtual double Top         (double x, double Q2) const = 0;
  virtual double Gluon       (double x, double Q2) const = 0;
  virtual PDF_t  AllPDFs     (double x, double Q2) const = 0;

protected:

  PDFModelI();
  PDFModelI(string name);
  PDFModelI(string name, string config);
};

}         // genie namespace

#endif    // _PDF_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::GRV89LO

\brief    GRV98LO parton density functions (pdf).
          Concrete implementation of the PDFModelI interface.

\ref      This is a straighforward adaptation of the fortran code in
          http://hepdata.cedar.ac.uk//hepdata/pdflib/grv/grv98/grv98.f

          The original code contains NLO (MSbar and DIS schemes) and LO pdf
          implementations. Only the LO pdfs are implemented here.

          Reference listed in original code:
          M. Glueck, E. Reya, A. Vogt,
          Eur. Phys. J. C5 (1998) 461-470; hep-ph/9806404

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC, Rutherford Appleton Laboratory

\created  Ocrober 29, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GRV98LO_H_
#define _GRV98LO_H_

#include "Physics/PartonDistributions/PDFModelI.h"
#include "Framework/Numerical/Interpolator2D.h"

namespace genie {

class GRV98LO: public PDFModelI {

public:
  GRV98LO();
  GRV98LO(string config);
 ~GRV98LO();

  // implement the PDFModelI interface

  double UpValence   (double x, double Q2) const;
  double DownValence (double x, double Q2) const;
  double UpSea       (double x, double Q2) const;
  double DownSea     (double x, double Q2) const;
  double Strange     (double x, double Q2) const;
  double Charm       (double x, double Q2) const;
  double Bottom      (double x, double Q2) const;
  double Top         (double x, double Q2) const;
  double Gluon       (double x, double Q2) const;
  PDF_t  AllPDFs     (double x, double Q2) const;

  // override the default "Configure" implementation 
  // of the Algorithm interface

  void Configure (const Registry & config);
  void Configure (string config);

private:

  void Initialize   (void);

  bool fInitialized;

  // >> Information about the PDF grid

  static const int kNQ2     = 27; 
  static const int kNXbj    = 68; 
  static const int kNParton = 6;

  // >> Information read from the PDF grid file
  //
  // grid points
  //
  double fGridQ2    [kNQ2];  // Q^2 (GeV^2)    values in grid; between 0.8 and 1E6
  double fGridLogQ2 [kNQ2];  // log(Q^2/GeV^2) values in grid
  double fGridXbj   [kNXbj]; // Bjorken-x      values in grid; between 1E-9 and 1
  double fGridLogXbj[kNXbj]; // log(Bjorken-x) values in grid
  double fParton    [kNParton][kNQ2][kNXbj-1]; // PARTON (NPART,NQ,NX-1) array in original code
  //
  // arrays for the interpolation routine
  //
  Interpolator2D * fXUVF; // = f(logx,logQ2)
  Interpolator2D * fXDVF;
  Interpolator2D * fXDEF;
  Interpolator2D * fXUDF;
  Interpolator2D * fXSF;
  Interpolator2D * fXGF;
};

}         // genie namespace
#endif    // _GRV98LO_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::GRV98LO", payloadCode, "@",
"genie::LHAPDF5", payloadCode, "@",
"genie::LHAPDF6", payloadCode, "@",
"genie::PDF", payloadCode, "@",
"genie::PDFModelI", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhPDF",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhPDF_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhPDF_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhPDF() {
  TriggerDictionaryInitialization_libGPhPDF_Impl();
}
