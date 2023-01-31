// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhAMNGXS

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
#include "H3AMNuGammaPXSec.h"

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
   static TClass *geniecLcLH3AMNuGammaPXSec_Dictionary();
   static void geniecLcLH3AMNuGammaPXSec_TClassManip(TClass*);
   static void *new_geniecLcLH3AMNuGammaPXSec(void *p = 0);
   static void *newArray_geniecLcLH3AMNuGammaPXSec(Long_t size, void *p);
   static void delete_geniecLcLH3AMNuGammaPXSec(void *p);
   static void deleteArray_geniecLcLH3AMNuGammaPXSec(void *p);
   static void destruct_geniecLcLH3AMNuGammaPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::H3AMNuGammaPXSec*)
   {
      ::genie::H3AMNuGammaPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::H3AMNuGammaPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::H3AMNuGammaPXSec", "", 34,
                  typeid(::genie::H3AMNuGammaPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLH3AMNuGammaPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::H3AMNuGammaPXSec) );
      instance.SetNew(&new_geniecLcLH3AMNuGammaPXSec);
      instance.SetNewArray(&newArray_geniecLcLH3AMNuGammaPXSec);
      instance.SetDelete(&delete_geniecLcLH3AMNuGammaPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLH3AMNuGammaPXSec);
      instance.SetDestructor(&destruct_geniecLcLH3AMNuGammaPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::H3AMNuGammaPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::H3AMNuGammaPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::H3AMNuGammaPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLH3AMNuGammaPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::H3AMNuGammaPXSec*)0x0)->GetClass();
      geniecLcLH3AMNuGammaPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLH3AMNuGammaPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLH3AMNuGammaPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::H3AMNuGammaPXSec : new ::genie::H3AMNuGammaPXSec;
   }
   static void *newArray_geniecLcLH3AMNuGammaPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::H3AMNuGammaPXSec[nElements] : new ::genie::H3AMNuGammaPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLH3AMNuGammaPXSec(void *p) {
      delete ((::genie::H3AMNuGammaPXSec*)p);
   }
   static void deleteArray_geniecLcLH3AMNuGammaPXSec(void *p) {
      delete [] ((::genie::H3AMNuGammaPXSec*)p);
   }
   static void destruct_geniecLcLH3AMNuGammaPXSec(void *p) {
      typedef ::genie::H3AMNuGammaPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::H3AMNuGammaPXSec

namespace {
  void TriggerDictionaryInitialization_libGPhAMNGXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/AnomalyMediatedNuGamma/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/AnomalyMediatedNuGamma/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/AnomalyMediatedNuGamma/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/AnomalyMediatedNuGamma/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhAMNGXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class H3AMNuGammaPXSec;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhAMNGXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::H3AMNuGammaPXSec

\brief    An anomaly-mediated neutrino-photon interaction cross section model
          Is a concrete implementation of the XSecAlgorithmI interface. 

\ref      J.A.Harvey, C.T.Hill and R.J.Hill, PRL99, 261601 (2007)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  February 15, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_
#define _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class H3AMNuGammaPXSec : public XSecAlgorithmI {

public:
  H3AMNuGammaPXSec();
  H3AMNuGammaPXSec(string config);
  virtual ~H3AMNuGammaPXSec();

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

  double fGw; 
};

}       // genie namespace
#endif  // _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::H3AMNuGammaPXSec", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhAMNGXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhAMNGXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhAMNGXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhAMNGXS() {
  TriggerDictionaryInitialization_libGPhAMNGXS_Impl();
}
