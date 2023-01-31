// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMNucEG

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
#include "MECInteractionListGenerator.h"
#include "MECGenerator.h"

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
   static TClass *geniecLcLMECInteractionListGenerator_Dictionary();
   static void geniecLcLMECInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLMECInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLMECInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLMECInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLMECInteractionListGenerator(void *p);
   static void destruct_geniecLcLMECInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECInteractionListGenerator*)
   {
      ::genie::MECInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECInteractionListGenerator", "", 33,
                  typeid(::genie::MECInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLMECInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLMECInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLMECInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLMECInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::MECInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::MECInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::MECInteractionListGenerator*)0x0)->GetClass();
      geniecLcLMECInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMECGenerator_Dictionary();
   static void geniecLcLMECGenerator_TClassManip(TClass*);
   static void *new_geniecLcLMECGenerator(void *p = 0);
   static void *newArray_geniecLcLMECGenerator(Long_t size, void *p);
   static void delete_geniecLcLMECGenerator(void *p);
   static void deleteArray_geniecLcLMECGenerator(void *p);
   static void destruct_geniecLcLMECGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECGenerator*)
   {
      ::genie::MECGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECGenerator", "", 95,
                  typeid(::genie::MECGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECGenerator) );
      instance.SetNew(&new_geniecLcLMECGenerator);
      instance.SetNewArray(&newArray_geniecLcLMECGenerator);
      instance.SetDelete(&delete_geniecLcLMECGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECGenerator);
      instance.SetDestructor(&destruct_geniecLcLMECGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::MECGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::MECGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::MECGenerator*)0x0)->GetClass();
      geniecLcLMECGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECInteractionListGenerator : new ::genie::MECInteractionListGenerator;
   }
   static void *newArray_geniecLcLMECInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECInteractionListGenerator[nElements] : new ::genie::MECInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECInteractionListGenerator(void *p) {
      delete ((::genie::MECInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLMECInteractionListGenerator(void *p) {
      delete [] ((::genie::MECInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLMECInteractionListGenerator(void *p) {
      typedef ::genie::MECInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECGenerator : new ::genie::MECGenerator;
   }
   static void *newArray_geniecLcLMECGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECGenerator[nElements] : new ::genie::MECGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECGenerator(void *p) {
      delete ((::genie::MECGenerator*)p);
   }
   static void deleteArray_geniecLcLMECGenerator(void *p) {
      delete [] ((::genie::MECGenerator*)p);
   }
   static void destruct_geniecLcLMECGenerator(void *p) {
      typedef ::genie::MECGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhMNucEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Multinucleon/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Multinucleon/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Multinucleon/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Multinucleon/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMNucEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class MECInteractionListGenerator;}
namespace genie{class MECGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMNucEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::MECInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the 
          MEC EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Sep 22, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_INTERACTION_GENERATOR_H_
#define _MEC_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class MECInteractionListGenerator : public InteractionListGeneratorI {

public :
  MECInteractionListGenerator();
  MECInteractionListGenerator(string config);
 ~MECInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;
  bool fSetDiNucleonCode;
};

}      // genie namespace
#endif // _MEC_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::MECGenerator

\brief    Simulate the primary MEC interaction

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

          Steve Dytman <dytman+ \at pitt.edu>
          Pittsburgh University

\created  Sep. 22, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_GENERATOR_H_
#define _MEC_GENERATOR_H_

#include <TGenPhaseSpace.h>

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/ParticleData/PDGCodeList.h"

namespace genie {

class XSecAlgorithmI;
class NuclearModelI;

class MECGenerator : public EventRecordVisitorI {

public :
  MECGenerator();
  MECGenerator(string config);
 ~MECGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void    LoadConfig                        (void);
  void    AddNucleonCluster                 (GHepRecord * event) const;
  void    AddTargetRemnant                  (GHepRecord * event) const;
  void    GenerateFermiMomentum             (GHepRecord * event) const;
  void    SelectEmpiricalKinematics         (GHepRecord * event) const;
  void    AddFinalStateLepton               (GHepRecord * event) const;
  void    RecoilNucleonCluster              (GHepRecord * event) const;
  void    DecayNucleonCluster               (GHepRecord * event) const;
  void    SelectNSVLeptonKinematics         (GHepRecord * event) const;
  void    GenerateNSVInitialHadrons         (GHepRecord * event) const;
  PDGCodeList NucleonClusterConstituents    (int pdgc)           const;
  
  mutable const XSecAlgorithmI * fXSecModel;
  mutable TGenPhaseSpace         fPhaseSpaceGenerator;
  const NuclearModelI *          fNuclModel;

  double fQ3Max;
};

}      // genie namespace
#endif // _MEC_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::MECGenerator", payloadCode, "@",
"genie::MECInteractionListGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMNucEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMNucEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMNucEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMNucEG() {
  TriggerDictionaryInitialization_libGPhMNucEG_Impl();
}
