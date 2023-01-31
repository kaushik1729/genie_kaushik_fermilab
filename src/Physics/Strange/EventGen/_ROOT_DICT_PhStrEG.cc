// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhStrEG

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
#include "SKKinematicsGenerator.h"
#include "SKHadronicSystemGenerator.h"
#include "SKInteractionListGenerator.h"
#include "SKPrimaryLeptonGenerator.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Utils/Range1.h", 27,
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
   static TClass *geniecLcLSKKinematicsGenerator_Dictionary();
   static void geniecLcLSKKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLSKKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLSKKinematicsGenerator(void *p);
   static void destruct_geniecLcLSKKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKKinematicsGenerator*)
   {
      ::genie::SKKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKKinematicsGenerator", "", 34,
                  typeid(::genie::SKKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLSKKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLSKKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::SKKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SKKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SKKinematicsGenerator*)0x0)->GetClass();
      geniecLcLSKKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKHadronicSystemGenerator_Dictionary();
   static void geniecLcLSKHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLSKHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLSKHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLSKHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKHadronicSystemGenerator*)
   {
      ::genie::SKHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKHadronicSystemGenerator", "", 97,
                  typeid(::genie::SKHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLSKHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLSKHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::SKHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SKHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SKHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLSKHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKInteractionListGenerator_Dictionary();
   static void geniecLcLSKInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLSKInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLSKInteractionListGenerator(void *p);
   static void destruct_geniecLcLSKInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKInteractionListGenerator*)
   {
      ::genie::SKInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKInteractionListGenerator", "", 140,
                  typeid(::genie::SKInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLSKInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLSKInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::SKInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SKInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SKInteractionListGenerator*)0x0)->GetClass();
      geniecLcLSKInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLSKPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLSKPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLSKPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLSKPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKPrimaryLeptonGenerator*)
   {
      ::genie::SKPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKPrimaryLeptonGenerator", "", 194,
                  typeid(::genie::SKPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::SKPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SKPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SKPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLSKPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKKinematicsGenerator : new ::genie::SKKinematicsGenerator;
   }
   static void *newArray_geniecLcLSKKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKKinematicsGenerator[nElements] : new ::genie::SKKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKKinematicsGenerator(void *p) {
      delete ((::genie::SKKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLSKKinematicsGenerator(void *p) {
      delete [] ((::genie::SKKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLSKKinematicsGenerator(void *p) {
      typedef ::genie::SKKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKHadronicSystemGenerator : new ::genie::SKHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLSKHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKHadronicSystemGenerator[nElements] : new ::genie::SKHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKHadronicSystemGenerator(void *p) {
      delete ((::genie::SKHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLSKHadronicSystemGenerator(void *p) {
      delete [] ((::genie::SKHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLSKHadronicSystemGenerator(void *p) {
      typedef ::genie::SKHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKInteractionListGenerator : new ::genie::SKInteractionListGenerator;
   }
   static void *newArray_geniecLcLSKInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKInteractionListGenerator[nElements] : new ::genie::SKInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKInteractionListGenerator(void *p) {
      delete ((::genie::SKInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLSKInteractionListGenerator(void *p) {
      delete [] ((::genie::SKInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLSKInteractionListGenerator(void *p) {
      typedef ::genie::SKInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKPrimaryLeptonGenerator : new ::genie::SKPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLSKPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SKPrimaryLeptonGenerator[nElements] : new ::genie::SKPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      delete ((::genie::SKPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::SKPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      typedef ::genie::SKPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKPrimaryLeptonGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhStrEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Strange/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Strange/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Strange/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Strange/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhStrEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class SKKinematicsGenerator;}
namespace genie{class SKHadronicSystemGenerator;}
namespace genie{class SKInteractionListGenerator;}
namespace genie{class SKPrimaryLeptonGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhStrEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::SKKinematicsGenerator

\brief    Generates values for the kinematic variables describing neutrino-nucleus 
          single kaon production events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Chris Marshall <marshall \at pas.rochester.edu>
          University of Rochester

\created  October 03, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SK_KINEMATICS_GENERATOR_H_
#define _SK_KINEMATICS_GENERATOR_H_

#include "Framework/Utils/Range1.h"
#include "Physics/Common/KineGeneratorWithCache.h"

namespace genie {

class SKKinematicsGenerator : public KineGeneratorWithCache {

public :
  SKKinematicsGenerator();
  SKKinematicsGenerator(string config);
 ~SKKinematicsGenerator();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:
  // Methods to load sub-algorithms and config data from the Registry
  void LoadConfig (void);

  // Different kinematics calculators for different models
  void CalculateKin_AtharSingleKaon(GHepRecord * event_rec) const;

  double ComputeMaxXSec (const Interaction * in) const;

  // Overload KineGeneratorWithCache method to get energy
  double Energy (const Interaction * in) const;

private:

  // In computeMaxXSec method, scan log(1-cos(theta)) from this value up to log(2)
  double fMinLog1MinusCosTheta;

};

}      // genie namespace
#endif // _SK_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::SKHadronicSystemGenerator

\brief    Generates the f/s hadronic system in single-Kaon production interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 20, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SK_HADRONIC_SYSTEM_GENERATOR_H_
#define _SK_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class SKHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  SKHadronicSystemGenerator();
  SKHadronicSystemGenerator(string config);
 ~SKHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
  void CalculateHadronicSystem_AtharSingleKaon(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _SK_HADRONIC_SYSTEM_GENERATOR_H_

//____________________________________________________________________________
/*!

\class    genie::SKInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Creates a list of all the interactions that can be generated 
          by the single-Kaon generator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 20, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SK_INTERACTION_LIST_GENERATOR_H_
#define _SK_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class SKInteractionListGenerator : public InteractionListGeneratorI {

public :

  SKInteractionListGenerator();
  SKInteractionListGenerator(string config);
 ~SKInteractionListGenerator();

  // Implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace

#endif // _SK_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::SKPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in single-Kaon interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 20, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SK_PRIMARY_LEPTON_GENERATOR_H_
#define _SK_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class SKPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :

  SKPrimaryLeptonGenerator();
  SKPrimaryLeptonGenerator(string config);
 ~SKPrimaryLeptonGenerator();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
 
//void CalculatePrimaryLepton(GHepRecord * event_rec) const;
};

}      // genie namespace

#endif // _SK_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::SKHadronicSystemGenerator", payloadCode, "@",
"genie::SKInteractionListGenerator", payloadCode, "@",
"genie::SKKinematicsGenerator", payloadCode, "@",
"genie::SKPrimaryLeptonGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhStrEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhStrEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhStrEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhStrEG() {
  TriggerDictionaryInitialization_libGPhStrEG_Impl();
}
