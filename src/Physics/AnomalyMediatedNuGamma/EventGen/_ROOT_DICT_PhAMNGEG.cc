// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhAMNGEG

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
#include "AMNuGammaInteractionListGenerator.h"
#include "AMNuGammaGenerator.h"

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
   static TClass *geniecLcLAMNuGammaInteractionListGenerator_Dictionary();
   static void geniecLcLAMNuGammaInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLAMNuGammaInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLAMNuGammaInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLAMNuGammaInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLAMNuGammaInteractionListGenerator(void *p);
   static void destruct_geniecLcLAMNuGammaInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AMNuGammaInteractionListGenerator*)
   {
      ::genie::AMNuGammaInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AMNuGammaInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AMNuGammaInteractionListGenerator", "", 33,
                  typeid(::genie::AMNuGammaInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAMNuGammaInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AMNuGammaInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLAMNuGammaInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AMNuGammaInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::AMNuGammaInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::AMNuGammaInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAMNuGammaInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::AMNuGammaInteractionListGenerator*)0x0)->GetClass();
      geniecLcLAMNuGammaInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAMNuGammaInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAMNuGammaGenerator_Dictionary();
   static void geniecLcLAMNuGammaGenerator_TClassManip(TClass*);
   static void *new_geniecLcLAMNuGammaGenerator(void *p = 0);
   static void *newArray_geniecLcLAMNuGammaGenerator(Long_t size, void *p);
   static void delete_geniecLcLAMNuGammaGenerator(void *p);
   static void deleteArray_geniecLcLAMNuGammaGenerator(void *p);
   static void destruct_geniecLcLAMNuGammaGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AMNuGammaGenerator*)
   {
      ::genie::AMNuGammaGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AMNuGammaGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AMNuGammaGenerator", "", 72,
                  typeid(::genie::AMNuGammaGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAMNuGammaGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AMNuGammaGenerator) );
      instance.SetNew(&new_geniecLcLAMNuGammaGenerator);
      instance.SetNewArray(&newArray_geniecLcLAMNuGammaGenerator);
      instance.SetDelete(&delete_geniecLcLAMNuGammaGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLAMNuGammaGenerator);
      instance.SetDestructor(&destruct_geniecLcLAMNuGammaGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AMNuGammaGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::AMNuGammaGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::AMNuGammaGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAMNuGammaGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::AMNuGammaGenerator*)0x0)->GetClass();
      geniecLcLAMNuGammaGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAMNuGammaGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AMNuGammaInteractionListGenerator : new ::genie::AMNuGammaInteractionListGenerator;
   }
   static void *newArray_geniecLcLAMNuGammaInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AMNuGammaInteractionListGenerator[nElements] : new ::genie::AMNuGammaInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      delete ((::genie::AMNuGammaInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      delete [] ((::genie::AMNuGammaInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      typedef ::genie::AMNuGammaInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::AMNuGammaInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAMNuGammaGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AMNuGammaGenerator : new ::genie::AMNuGammaGenerator;
   }
   static void *newArray_geniecLcLAMNuGammaGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AMNuGammaGenerator[nElements] : new ::genie::AMNuGammaGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAMNuGammaGenerator(void *p) {
      delete ((::genie::AMNuGammaGenerator*)p);
   }
   static void deleteArray_geniecLcLAMNuGammaGenerator(void *p) {
      delete [] ((::genie::AMNuGammaGenerator*)p);
   }
   static void destruct_geniecLcLAMNuGammaGenerator(void *p) {
      typedef ::genie::AMNuGammaGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::AMNuGammaGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhAMNGEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/AnomalyMediatedNuGamma/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/AnomalyMediatedNuGamma/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/AnomalyMediatedNuGamma/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/AnomalyMediatedNuGamma/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhAMNGEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class AMNuGammaInteractionListGenerator;}
namespace genie{class AMNuGammaGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhAMNGEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::AMNuGammaInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the 
          AM-NUGAMMA EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _AMNUGAMMA_INTERACTION_GENERATOR_H_
#define _AMNUGAMMA_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class AMNuGammaInteractionListGenerator : public InteractionListGeneratorI {

public :
  AMNuGammaInteractionListGenerator();
  AMNuGammaInteractionListGenerator(string config);
 ~AMNuGammaInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;
};

}      // genie namespace
#endif // _AMNUGAMMA_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::AMNuGammaGenerator

\brief    

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _AMNUGAMMA_GENERATOR_H_
#define _AMNUGAMMA_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class AMNuGammaGenerator : public EventRecordVisitorI {

public :
  AMNuGammaGenerator();
  AMNuGammaGenerator(string config);
 ~AMNuGammaGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

private:
  void AddPhoton             (GHepRecord * event_rec) const;
  void AddFinalStateNeutrino (GHepRecord * event_rec) const;
  void AddTargetRemnant      (GHepRecord * event_rec) const;
  void AddRecoilNucleon      (GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _AMNUGAMMA_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::AMNuGammaGenerator", payloadCode, "@",
"genie::AMNuGammaInteractionListGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhAMNGEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhAMNGEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhAMNGEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhAMNGEG() {
  TriggerDictionaryInitialization_libGPhAMNGEG_Impl();
}
