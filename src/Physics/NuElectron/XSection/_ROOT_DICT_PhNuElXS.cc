// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhNuElXS

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
#include "IMDAnnihilationPXSec.h"
#include "BardinIMDRadCorPXSec.h"
#include "NuElectronXSec.h"
#include "NuElectronPXSec.h"
#include "IMDXSec.h"

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
   static TClass *geniecLcLIMDAnnihilationPXSec_Dictionary();
   static void geniecLcLIMDAnnihilationPXSec_TClassManip(TClass*);
   static void *new_geniecLcLIMDAnnihilationPXSec(void *p = 0);
   static void *newArray_geniecLcLIMDAnnihilationPXSec(Long_t size, void *p);
   static void delete_geniecLcLIMDAnnihilationPXSec(void *p);
   static void deleteArray_geniecLcLIMDAnnihilationPXSec(void *p);
   static void destruct_geniecLcLIMDAnnihilationPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IMDAnnihilationPXSec*)
   {
      ::genie::IMDAnnihilationPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IMDAnnihilationPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IMDAnnihilationPXSec", "", 39,
                  typeid(::genie::IMDAnnihilationPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIMDAnnihilationPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::IMDAnnihilationPXSec) );
      instance.SetNew(&new_geniecLcLIMDAnnihilationPXSec);
      instance.SetNewArray(&newArray_geniecLcLIMDAnnihilationPXSec);
      instance.SetDelete(&delete_geniecLcLIMDAnnihilationPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLIMDAnnihilationPXSec);
      instance.SetDestructor(&destruct_geniecLcLIMDAnnihilationPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IMDAnnihilationPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::IMDAnnihilationPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::IMDAnnihilationPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIMDAnnihilationPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::IMDAnnihilationPXSec*)0x0)->GetClass();
      geniecLcLIMDAnnihilationPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIMDAnnihilationPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBardinIMDRadCorPXSec_Dictionary();
   static void geniecLcLBardinIMDRadCorPXSec_TClassManip(TClass*);
   static void *new_geniecLcLBardinIMDRadCorPXSec(void *p = 0);
   static void *newArray_geniecLcLBardinIMDRadCorPXSec(Long_t size, void *p);
   static void delete_geniecLcLBardinIMDRadCorPXSec(void *p);
   static void deleteArray_geniecLcLBardinIMDRadCorPXSec(void *p);
   static void destruct_geniecLcLBardinIMDRadCorPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BardinIMDRadCorPXSec*)
   {
      ::genie::BardinIMDRadCorPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BardinIMDRadCorPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BardinIMDRadCorPXSec", "", 109,
                  typeid(::genie::BardinIMDRadCorPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBardinIMDRadCorPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BardinIMDRadCorPXSec) );
      instance.SetNew(&new_geniecLcLBardinIMDRadCorPXSec);
      instance.SetNewArray(&newArray_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDelete(&delete_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDestructor(&destruct_geniecLcLBardinIMDRadCorPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BardinIMDRadCorPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::BardinIMDRadCorPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BardinIMDRadCorPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBardinIMDRadCorPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BardinIMDRadCorPXSec*)0x0)->GetClass();
      geniecLcLBardinIMDRadCorPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBardinIMDRadCorPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuElectronXSec_Dictionary();
   static void geniecLcLNuElectronXSec_TClassManip(TClass*);
   static void *new_geniecLcLNuElectronXSec(void *p = 0);
   static void *newArray_geniecLcLNuElectronXSec(Long_t size, void *p);
   static void delete_geniecLcLNuElectronXSec(void *p);
   static void deleteArray_geniecLcLNuElectronXSec(void *p);
   static void destruct_geniecLcLNuElectronXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuElectronXSec*)
   {
      ::genie::NuElectronXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuElectronXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuElectronXSec", "", 220,
                  typeid(::genie::NuElectronXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuElectronXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuElectronXSec) );
      instance.SetNew(&new_geniecLcLNuElectronXSec);
      instance.SetNewArray(&newArray_geniecLcLNuElectronXSec);
      instance.SetDelete(&delete_geniecLcLNuElectronXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuElectronXSec);
      instance.SetDestructor(&destruct_geniecLcLNuElectronXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuElectronXSec*)
   {
      return GenerateInitInstanceLocal((::genie::NuElectronXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuElectronXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuElectronXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuElectronXSec*)0x0)->GetClass();
      geniecLcLNuElectronXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuElectronXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuElectronPXSec_Dictionary();
   static void geniecLcLNuElectronPXSec_TClassManip(TClass*);
   static void *new_geniecLcLNuElectronPXSec(void *p = 0);
   static void *newArray_geniecLcLNuElectronPXSec(Long_t size, void *p);
   static void delete_geniecLcLNuElectronPXSec(void *p);
   static void deleteArray_geniecLcLNuElectronPXSec(void *p);
   static void destruct_geniecLcLNuElectronPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuElectronPXSec*)
   {
      ::genie::NuElectronPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuElectronPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuElectronPXSec", "", 280,
                  typeid(::genie::NuElectronPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuElectronPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuElectronPXSec) );
      instance.SetNew(&new_geniecLcLNuElectronPXSec);
      instance.SetNewArray(&newArray_geniecLcLNuElectronPXSec);
      instance.SetDelete(&delete_geniecLcLNuElectronPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuElectronPXSec);
      instance.SetDestructor(&destruct_geniecLcLNuElectronPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuElectronPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::NuElectronPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuElectronPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuElectronPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuElectronPXSec*)0x0)->GetClass();
      geniecLcLNuElectronPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuElectronPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIMDXSec_Dictionary();
   static void geniecLcLIMDXSec_TClassManip(TClass*);
   static void *new_geniecLcLIMDXSec(void *p = 0);
   static void *newArray_geniecLcLIMDXSec(Long_t size, void *p);
   static void delete_geniecLcLIMDXSec(void *p);
   static void deleteArray_geniecLcLIMDXSec(void *p);
   static void destruct_geniecLcLIMDXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IMDXSec*)
   {
      ::genie::IMDXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IMDXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IMDXSec", "", 335,
                  typeid(::genie::IMDXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIMDXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::IMDXSec) );
      instance.SetNew(&new_geniecLcLIMDXSec);
      instance.SetNewArray(&newArray_geniecLcLIMDXSec);
      instance.SetDelete(&delete_geniecLcLIMDXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLIMDXSec);
      instance.SetDestructor(&destruct_geniecLcLIMDXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IMDXSec*)
   {
      return GenerateInitInstanceLocal((::genie::IMDXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::IMDXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIMDXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::IMDXSec*)0x0)->GetClass();
      geniecLcLIMDXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIMDXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIMDAnnihilationPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IMDAnnihilationPXSec : new ::genie::IMDAnnihilationPXSec;
   }
   static void *newArray_geniecLcLIMDAnnihilationPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IMDAnnihilationPXSec[nElements] : new ::genie::IMDAnnihilationPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIMDAnnihilationPXSec(void *p) {
      delete ((::genie::IMDAnnihilationPXSec*)p);
   }
   static void deleteArray_geniecLcLIMDAnnihilationPXSec(void *p) {
      delete [] ((::genie::IMDAnnihilationPXSec*)p);
   }
   static void destruct_geniecLcLIMDAnnihilationPXSec(void *p) {
      typedef ::genie::IMDAnnihilationPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::IMDAnnihilationPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBardinIMDRadCorPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BardinIMDRadCorPXSec : new ::genie::BardinIMDRadCorPXSec;
   }
   static void *newArray_geniecLcLBardinIMDRadCorPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BardinIMDRadCorPXSec[nElements] : new ::genie::BardinIMDRadCorPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBardinIMDRadCorPXSec(void *p) {
      delete ((::genie::BardinIMDRadCorPXSec*)p);
   }
   static void deleteArray_geniecLcLBardinIMDRadCorPXSec(void *p) {
      delete [] ((::genie::BardinIMDRadCorPXSec*)p);
   }
   static void destruct_geniecLcLBardinIMDRadCorPXSec(void *p) {
      typedef ::genie::BardinIMDRadCorPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BardinIMDRadCorPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuElectronXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuElectronXSec : new ::genie::NuElectronXSec;
   }
   static void *newArray_geniecLcLNuElectronXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuElectronXSec[nElements] : new ::genie::NuElectronXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuElectronXSec(void *p) {
      delete ((::genie::NuElectronXSec*)p);
   }
   static void deleteArray_geniecLcLNuElectronXSec(void *p) {
      delete [] ((::genie::NuElectronXSec*)p);
   }
   static void destruct_geniecLcLNuElectronXSec(void *p) {
      typedef ::genie::NuElectronXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuElectronXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuElectronPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuElectronPXSec : new ::genie::NuElectronPXSec;
   }
   static void *newArray_geniecLcLNuElectronPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuElectronPXSec[nElements] : new ::genie::NuElectronPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuElectronPXSec(void *p) {
      delete ((::genie::NuElectronPXSec*)p);
   }
   static void deleteArray_geniecLcLNuElectronPXSec(void *p) {
      delete [] ((::genie::NuElectronPXSec*)p);
   }
   static void destruct_geniecLcLNuElectronPXSec(void *p) {
      typedef ::genie::NuElectronPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuElectronPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIMDXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IMDXSec : new ::genie::IMDXSec;
   }
   static void *newArray_geniecLcLIMDXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IMDXSec[nElements] : new ::genie::IMDXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIMDXSec(void *p) {
      delete ((::genie::IMDXSec*)p);
   }
   static void deleteArray_geniecLcLIMDXSec(void *p) {
      delete [] ((::genie::IMDXSec*)p);
   }
   static void destruct_geniecLcLIMDXSec(void *p) {
      typedef ::genie::IMDXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::IMDXSec

namespace {
  void TriggerDictionaryInitialization_libGPhNuElXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/NuElectron/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/NuElectron/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuElectron/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/NuElectron/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhNuElXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class IMDAnnihilationPXSec;}
namespace genie{class BardinIMDRadCorPXSec;}
namespace genie{class NuElectronXSec;}
namespace genie{class NuElectronPXSec;}
namespace genie{class IMDXSec;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhNuElXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::IMDAnnihilationPXSec

\brief    nuebar + e- -> mu- + numubar [CC]
          scattering differential cross section \n

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      W.J.Marciano and Z.Parsa, Neutrino-electron scattering theory,
          J.Phys.G: Nucl.Part.Phys. 29 (2003) 2629-2645

\author   Rosen Matev (r.matev@gmail.com)

\created  October 3, 2011

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _IMD_ANNIHILATION_PXSEC_H_
#define _IMD_ANNIHILATION_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class IntegratorI;
class XSecIntegratorI;

class IMDAnnihilationPXSec : public XSecAlgorithmI {

public:
  IMDAnnihilationPXSec();
  IMDAnnihilationPXSec(string config);
  virtual ~IMDAnnihilationPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  const XSecIntegratorI * fXSecIntegrator;

};

}       // genie namespace
#endif  // _IMD_ANNIHILATION_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::BardinIMDRadCorPXSec

\brief    Computes the Inverse Muon Decay (IMD) diff. cross section using the 
          Bardin-Dokuchaeva including all 1-loop radiative corrections. \n

          This is a 'trully' inclusive IMD cross section, i.e. the brem. cross
          section (dxsec_brem/dy)|w>w0 [see Bardin paper, cited below] is not
          subtracted from the IMD cross section and therefore it is not suitable
          for experimental situations where a photon energy trigger threshold
          is applied.

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      D.Yu.Bardin and V.A.Dokuchaeva, Nucl.Phys.B287:839 (1987)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  February 14, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_
#define _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_

#include <Math/IFunction.h>

#include "Framework/EventGen/XSecAlgorithmI.h"
//#include "Numerical/GSFunc.h"

namespace genie {

//class IntegratorI;
class XSecIntegratorI;

class BardinIMDRadCorPXSec : public XSecAlgorithmI {

public:
  BardinIMDRadCorPXSec();
  BardinIMDRadCorPXSec(string config);
  virtual ~BardinIMDRadCorPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  // Load configuration when Algorithm::Configure() is called
  void LoadConfig(void);

  // Private functions
  // (symbols follow the notation in Bardin-Dokuchaeva paper)
  double Li2 (double z)                      const;
  double Fa  (double re, double r, double y) const;
  double P   (int    i,  double r, double y) const;
  double C   (int    i,  int k,    double r) const;

  // Private data members
//  const IntegratorI *      fIntegrator;     ///< num integrator for BardinIMDRadCorIntegrand
  const XSecIntegratorI *  fXSecIntegrator; ///< differential x-sec integrator
};

} // genie namespace

//____________________________________________________________________________
/*!
\class    genie::BardinIMDRadCorIntegrand

\brief    Auxiliary scalar function for the internal integration in Bardin's
          IMD d2xsec/dxdy cross section algorithm

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  February 20, 2006
*/
//____________________________________________________________________________

namespace genie {
 namespace utils {
  namespace gsl   {
   namespace wrap   {

    class BardinIMDRadCorIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       BardinIMDRadCorIntegrand(double z);
      ~BardinIMDRadCorIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fZ;
     };

   } // wrap namespace
  } // gsl namespace
 } // utils namespace
} // genie namespace

#endif  // _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::NuElectronXSec

\brief    nu/nubar + e- scattering cross section. Integrates the loaded
          differential cross section model. An analytical cross section
          model also exists, so you cal also use that if you do not apply
          any kinematical cuts.

          The cross section algorithm handles:
             - nue/nuebar + e- -> nue/nuebar + e- [CC + NC + interference]
             - numu/nutau + e- -> numu/nutau + e- [NC]
             - numubar/nutaubar + e- -> numubar/nutaubar + e- [NC]
             - numu/nutau + e- -> l- + nu_e [CC]

          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  February 10, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NU_ELECTRON_XSEC_H_
#define _NU_ELECTRON_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class NuElectronXSec : public XSecIntegratorI {

public:
  NuElectronXSec();
  NuElectronXSec(string config);
  virtual ~NuElectronXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _NU_ELECTRON_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::NuElectronPXSec

\brief    nu/nubar + e- scattering differential cross section \n
          The cross section algorithm handles:
             - nue/nuebar + e- -> nue/nuebar + e- [CC + NC + interference]
             - numu/nutau + e- -> numu/nutau + e- [NC]
             - numubar/nutaubar + e- -> numubar/nutaubar + e- [NC]
             - numu/nutau + e- -> l- + nu_e [CC]

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      W.J.Marciano and Z.Parsa, Neutrino-electron scattering theory,
          J.Phys.G: Nucl.Part.Phys. 29 (2003) 2629-2645

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  February 10, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NU_ELECTRON_PARTIAL_XSEC_H_
#define _NU_ELECTRON_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class IntegratorI;
class XSecIntegratorI;

class NuElectronPXSec : public XSecAlgorithmI {

public:
  NuElectronPXSec();
  NuElectronPXSec(string config);
  virtual ~NuElectronPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  const XSecIntegratorI * fXSecIntegrator;

  double fSin28w; // sin^2(theta-weinberg)
  double fSin48w; 
};

}       // genie namespace
#endif  // _NU_ELECTRON_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::IMDXSec

\brief    Computes the Inverse Muon Decay cross section.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Fabruary 14, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _IMD_XSEC_H_
#define _IMD_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class IMDXSec : public XSecIntegratorI {

public:
  IMDXSec();
  IMDXSec(string config);
  virtual ~IMDXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _IMD_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::BardinIMDRadCorPXSec", payloadCode, "@",
"genie::IMDAnnihilationPXSec", payloadCode, "@",
"genie::IMDXSec", payloadCode, "@",
"genie::NuElectronPXSec", payloadCode, "@",
"genie::NuElectronXSec", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhNuElXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhNuElXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhNuElXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhNuElXS() {
  TriggerDictionaryInitialization_libGPhNuElXS_Impl();
}
