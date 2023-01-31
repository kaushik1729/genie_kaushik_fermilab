// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDeEx

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
#include "NucDeExcitationSim.h"

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
   static TClass *geniecLcLNucDeExcitationSim_Dictionary();
   static void geniecLcLNucDeExcitationSim_TClassManip(TClass*);
   static void *new_geniecLcLNucDeExcitationSim(void *p = 0);
   static void *newArray_geniecLcLNucDeExcitationSim(Long_t size, void *p);
   static void delete_geniecLcLNucDeExcitationSim(void *p);
   static void deleteArray_geniecLcLNucDeExcitationSim(void *p);
   static void destruct_geniecLcLNucDeExcitationSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NucDeExcitationSim*)
   {
      ::genie::NucDeExcitationSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NucDeExcitationSim));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NucDeExcitationSim", "", 37,
                  typeid(::genie::NucDeExcitationSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNucDeExcitationSim_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NucDeExcitationSim) );
      instance.SetNew(&new_geniecLcLNucDeExcitationSim);
      instance.SetNewArray(&newArray_geniecLcLNucDeExcitationSim);
      instance.SetDelete(&delete_geniecLcLNucDeExcitationSim);
      instance.SetDeleteArray(&deleteArray_geniecLcLNucDeExcitationSim);
      instance.SetDestructor(&destruct_geniecLcLNucDeExcitationSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NucDeExcitationSim*)
   {
      return GenerateInitInstanceLocal((::genie::NucDeExcitationSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NucDeExcitationSim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNucDeExcitationSim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NucDeExcitationSim*)0x0)->GetClass();
      geniecLcLNucDeExcitationSim_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNucDeExcitationSim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNucDeExcitationSim(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NucDeExcitationSim : new ::genie::NucDeExcitationSim;
   }
   static void *newArray_geniecLcLNucDeExcitationSim(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NucDeExcitationSim[nElements] : new ::genie::NucDeExcitationSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNucDeExcitationSim(void *p) {
      delete ((::genie::NucDeExcitationSim*)p);
   }
   static void deleteArray_geniecLcLNucDeExcitationSim(void *p) {
      delete [] ((::genie::NucDeExcitationSim*)p);
   }
   static void destruct_geniecLcLNucDeExcitationSim(void *p) {
      typedef ::genie::NucDeExcitationSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NucDeExcitationSim

namespace {
  void TriggerDictionaryInitialization_libGPhDeEx_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/NuclearDeExcitation",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/NuclearDeExcitation",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuclearDeExcitation",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/NuclearDeExcitation/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDeEx dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class NucDeExcitationSim;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDeEx dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::NucDeExcitationSim

\brief    Generates nuclear de-excitation gamma rays

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\ref      16O: 
           H.Ejiri,Phys.Rev.C48,1442(1993); 
           K.Kobayashi et al., Nucl.Phys.B (proc Suppl) 139 (2005)

\created  March 05, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_DEEXCITATION_H_
#define _NUCLEAR_DEEXCITATION_H_

#include <TLorentzVector.h>

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class NucDeExcitationSim : public EventRecordVisitorI {

public :
  NucDeExcitationSim();
  NucDeExcitationSim(string config);
 ~NucDeExcitationSim();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * evrec) const;

private:
  void           OxygenTargetSim      (GHepRecord * evrec) const;
  void           AddPhoton            (GHepRecord * evrec, double E0, double t) const;
  double         PhotonEnergySmearing (double E0, double t) const;
  TLorentzVector Photon4P             (double E) const;
};

}      // genie namespace
#endif // _NUCLEAR_DEEXCITATION_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::NucDeExcitationSim", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDeEx",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDeEx_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDeEx_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDeEx() {
  TriggerDictionaryInitialization_libGPhDeEx_Impl();
}
