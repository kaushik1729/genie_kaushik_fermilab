// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhNuElEG

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
#include "NuEPrimaryLeptonGenerator.h"
#include "NuEKinematicsGenerator.h"
#include "NuEInteractionListGenerator.h"
#include "NuETargetRemnantGenerator.h"

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
   static TClass *geniecLcLNuEPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLNuEPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLNuEPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLNuEPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLNuEPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEPrimaryLeptonGenerator*)
   {
      ::genie::NuEPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEPrimaryLeptonGenerator", "", 32,
                  typeid(::genie::NuEPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::NuEPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuEPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuEPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLNuEPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuEKinematicsGenerator_Dictionary();
   static void geniecLcLNuEKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLNuEKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLNuEKinematicsGenerator(void *p);
   static void destruct_geniecLcLNuEKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEKinematicsGenerator*)
   {
      ::genie::NuEKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEKinematicsGenerator", "", 73,
                  typeid(::genie::NuEKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLNuEKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLNuEKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::NuEKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuEKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuEKinematicsGenerator*)0x0)->GetClass();
      geniecLcLNuEKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuEInteractionListGenerator_Dictionary();
   static void geniecLcLNuEInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLNuEInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLNuEInteractionListGenerator(void *p);
   static void destruct_geniecLcLNuEInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEInteractionListGenerator*)
   {
      ::genie::NuEInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEInteractionListGenerator", "", 128,
                  typeid(::genie::NuEInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLNuEInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLNuEInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::NuEInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuEInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuEInteractionListGenerator*)0x0)->GetClass();
      geniecLcLNuEInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuETargetRemnantGenerator_Dictionary();
   static void geniecLcLNuETargetRemnantGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuETargetRemnantGenerator(void *p = 0);
   static void *newArray_geniecLcLNuETargetRemnantGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuETargetRemnantGenerator(void *p);
   static void deleteArray_geniecLcLNuETargetRemnantGenerator(void *p);
   static void destruct_geniecLcLNuETargetRemnantGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuETargetRemnantGenerator*)
   {
      ::genie::NuETargetRemnantGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuETargetRemnantGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuETargetRemnantGenerator", "", 184,
                  typeid(::genie::NuETargetRemnantGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuETargetRemnantGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuETargetRemnantGenerator) );
      instance.SetNew(&new_geniecLcLNuETargetRemnantGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuETargetRemnantGenerator);
      instance.SetDelete(&delete_geniecLcLNuETargetRemnantGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuETargetRemnantGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuETargetRemnantGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuETargetRemnantGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::NuETargetRemnantGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NuETargetRemnantGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuETargetRemnantGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NuETargetRemnantGenerator*)0x0)->GetClass();
      geniecLcLNuETargetRemnantGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuETargetRemnantGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEPrimaryLeptonGenerator : new ::genie::NuEPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLNuEPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEPrimaryLeptonGenerator[nElements] : new ::genie::NuEPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      delete ((::genie::NuEPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::NuEPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      typedef ::genie::NuEPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEKinematicsGenerator : new ::genie::NuEKinematicsGenerator;
   }
   static void *newArray_geniecLcLNuEKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEKinematicsGenerator[nElements] : new ::genie::NuEKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEKinematicsGenerator(void *p) {
      delete ((::genie::NuEKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLNuEKinematicsGenerator(void *p) {
      delete [] ((::genie::NuEKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLNuEKinematicsGenerator(void *p) {
      typedef ::genie::NuEKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEInteractionListGenerator : new ::genie::NuEInteractionListGenerator;
   }
   static void *newArray_geniecLcLNuEInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuEInteractionListGenerator[nElements] : new ::genie::NuEInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEInteractionListGenerator(void *p) {
      delete ((::genie::NuEInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLNuEInteractionListGenerator(void *p) {
      delete [] ((::genie::NuEInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLNuEInteractionListGenerator(void *p) {
      typedef ::genie::NuEInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuETargetRemnantGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuETargetRemnantGenerator : new ::genie::NuETargetRemnantGenerator;
   }
   static void *newArray_geniecLcLNuETargetRemnantGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NuETargetRemnantGenerator[nElements] : new ::genie::NuETargetRemnantGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuETargetRemnantGenerator(void *p) {
      delete ((::genie::NuETargetRemnantGenerator*)p);
   }
   static void deleteArray_geniecLcLNuETargetRemnantGenerator(void *p) {
      delete [] ((::genie::NuETargetRemnantGenerator*)p);
   }
   static void destruct_geniecLcLNuETargetRemnantGenerator(void *p) {
      typedef ::genie::NuETargetRemnantGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuETargetRemnantGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhNuElEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/NuElectron/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/NuElectron/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuElectron/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/NuElectron/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhNuElEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class NuEPrimaryLeptonGenerator;}
namespace genie{class NuEKinematicsGenerator;}
namespace genie{class NuEInteractionListGenerator;}
namespace genie{class NuETargetRemnantGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhNuElEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::NuEPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NUE_PRIMARY_LEPTON_GENERATOR_H_
#define _NUE_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class NuEPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  NuEPrimaryLeptonGenerator();
  NuEPrimaryLeptonGenerator(string config);
 ~NuEPrimaryLeptonGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _NUE_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuEKinematicsGenerator

\brief    Generates kinematics for neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NUE_KINEMATICS_GENERATOR_H_
#define _NUE_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class NuEKinematicsGenerator : public KineGeneratorWithCache {

public :
  NuEKinematicsGenerator();
  NuEKinematicsGenerator(string config);
 ~NuEKinematicsGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:

  //-- methods to load sub-algorithms and config data from the Registry
  void   LoadConfig (void);

  //-- overload KineGeneratorWithCache methods
  double ComputeMaxXSec (const Interaction * in) const;
  double Energy         (const Interaction * in) const;
};

}      // genie namespace
#endif // _NUE_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuEInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the NUE EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NUE_INTERACTION_GENERATOR_H_
#define _NUE_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class NuEInteractionListGenerator : public InteractionListGeneratorI {

public :
  NuEInteractionListGenerator();
  NuEInteractionListGenerator(string config);
 ~NuEInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  InteractionList * IMDInteractionList   (const InitialState & init_state) const;
  InteractionList * IMDAnnihilationInteractionList (const InitialState & init_state) const;
  InteractionList * NuEELInteractionList (const InitialState & init_state) const;
 
  void LoadConfig (void);

  bool fIsIMD;
  bool fIsIMDAnh;
};

}      // genie namespace
#endif // _NUE_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuETargetRemnantGenerator

\brief    Generates all the non-primary lepton final state particles in 
          neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 17, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NUE_TARGET_REMNANT_GENERATOR_H_
#define _NUE_TARGET_REMNANT_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class NuETargetRemnantGenerator : public EventRecordVisitorI {

public :
  NuETargetRemnantGenerator();
  NuETargetRemnantGenerator(string config);
 ~NuETargetRemnantGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * evrec) const;

private:
  void AddElectronNeutrino     (GHepRecord * evrec) const;
  void AddTargetNucleusRemnant (GHepRecord * evrec) const;
};

}      // genie namespace
#endif // _NUE_TARGET_REMNANT_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::NuEInteractionListGenerator", payloadCode, "@",
"genie::NuEKinematicsGenerator", payloadCode, "@",
"genie::NuEPrimaryLeptonGenerator", payloadCode, "@",
"genie::NuETargetRemnantGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhNuElEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhNuElEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhNuElEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhNuElEG() {
  TriggerDictionaryInitialization_libGPhNuElEG_Impl();
}
