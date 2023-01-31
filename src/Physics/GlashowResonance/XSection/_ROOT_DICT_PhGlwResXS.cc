// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhGlwResXS

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
#include "GLRESPXSec.h"

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
   static TClass *geniecLcLGLRESPXSec_Dictionary();
   static void geniecLcLGLRESPXSec_TClassManip(TClass*);
   static void *new_geniecLcLGLRESPXSec(void *p = 0);
   static void *newArray_geniecLcLGLRESPXSec(Long_t size, void *p);
   static void delete_geniecLcLGLRESPXSec(void *p);
   static void deleteArray_geniecLcLGLRESPXSec(void *p);
   static void destruct_geniecLcLGLRESPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESPXSec*)
   {
      ::genie::GLRESPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESPXSec", "", 34,
                  typeid(::genie::GLRESPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESPXSec) );
      instance.SetNew(&new_geniecLcLGLRESPXSec);
      instance.SetNewArray(&newArray_geniecLcLGLRESPXSec);
      instance.SetDelete(&delete_geniecLcLGLRESPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESPXSec);
      instance.SetDestructor(&destruct_geniecLcLGLRESPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::GLRESPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::GLRESPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::GLRESPXSec*)0x0)->GetClass();
      geniecLcLGLRESPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESPXSec : new ::genie::GLRESPXSec;
   }
   static void *newArray_geniecLcLGLRESPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESPXSec[nElements] : new ::genie::GLRESPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESPXSec(void *p) {
      delete ((::genie::GLRESPXSec*)p);
   }
   static void deleteArray_geniecLcLGLRESPXSec(void *p) {
      delete [] ((::genie::GLRESPXSec*)p);
   }
   static void destruct_geniecLcLGLRESPXSec(void *p) {
      typedef ::genie::GLRESPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESPXSec

namespace {
  void TriggerDictionaryInitialization_libGPhGlwResXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/GlashowResonance/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/GlashowResonance/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/GlashowResonance/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/GlashowResonance/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhGlwResXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class GLRESPXSec;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhGlwResXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::GLRESPXSec

\brief    Nuebar cross section at the Glashow resonance (nuebar + e- -> W-).
          Is a concrete implementation of the XSecAlgorithmI interface. 

\ref      T.K.Gaisser, F.Halzen and T.Stanev, Physics Reports 258:173 (1995)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_PXSEC_H_
#define _GLASHOW_RESONANCE_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class GLRESPXSec : public XSecAlgorithmI {

public:
  GLRESPXSec ();
  GLRESPXSec (string config);
  virtual ~GLRESPXSec ();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k=kPSfE) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;
};

}       // genie namespace

#endif  // _GLASHOW_RESONANCE_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::GLRESPXSec", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhGlwResXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhGlwResXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhGlwResXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhGlwResXS() {
  TriggerDictionaryInitialization_libGPhGlwResXS_Impl();
}
