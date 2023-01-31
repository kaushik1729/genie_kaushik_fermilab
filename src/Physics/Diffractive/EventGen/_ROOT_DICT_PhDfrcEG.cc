// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDfrcEG

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
#include "DFRInteractionListGenerator.h"
#include "DFRKinematicsGenerator.h"
#include "DFRHadronicSystemGenerator.h"
#include "DFRPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLDFRInteractionListGenerator_Dictionary();
   static void geniecLcLDFRInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLDFRInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLDFRInteractionListGenerator(void *p);
   static void destruct_geniecLcLDFRInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRInteractionListGenerator*)
   {
      ::genie::DFRInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRInteractionListGenerator", "", 33,
                  typeid(::genie::DFRInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLDFRInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLDFRInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DFRInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DFRInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DFRInteractionListGenerator*)0x0)->GetClass();
      geniecLcLDFRInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRKinematicsGenerator_Dictionary();
   static void geniecLcLDFRKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLDFRKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLDFRKinematicsGenerator(void *p);
   static void destruct_geniecLcLDFRKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRKinematicsGenerator*)
   {
      ::genie::DFRKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRKinematicsGenerator", "", 86,
                  typeid(::genie::DFRKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLDFRKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLDFRKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DFRKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DFRKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DFRKinematicsGenerator*)0x0)->GetClass();
      geniecLcLDFRKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRHadronicSystemGenerator_Dictionary();
   static void geniecLcLDFRHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLDFRHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLDFRHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLDFRHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRHadronicSystemGenerator*)
   {
      ::genie::DFRHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRHadronicSystemGenerator", "", 137,
                  typeid(::genie::DFRHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLDFRHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DFRHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DFRHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DFRHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLDFRHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLDFRPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLDFRPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLDFRPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLDFRPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRPrimaryLeptonGenerator*)
   {
      ::genie::DFRPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRPrimaryLeptonGenerator", "", 178,
                  typeid(::genie::DFRPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DFRPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DFRPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DFRPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLDFRPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRInteractionListGenerator : new ::genie::DFRInteractionListGenerator;
   }
   static void *newArray_geniecLcLDFRInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRInteractionListGenerator[nElements] : new ::genie::DFRInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRInteractionListGenerator(void *p) {
      delete ((::genie::DFRInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLDFRInteractionListGenerator(void *p) {
      delete [] ((::genie::DFRInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLDFRInteractionListGenerator(void *p) {
      typedef ::genie::DFRInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRKinematicsGenerator : new ::genie::DFRKinematicsGenerator;
   }
   static void *newArray_geniecLcLDFRKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRKinematicsGenerator[nElements] : new ::genie::DFRKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRKinematicsGenerator(void *p) {
      delete ((::genie::DFRKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLDFRKinematicsGenerator(void *p) {
      delete [] ((::genie::DFRKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLDFRKinematicsGenerator(void *p) {
      typedef ::genie::DFRKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRHadronicSystemGenerator : new ::genie::DFRHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLDFRHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRHadronicSystemGenerator[nElements] : new ::genie::DFRHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRHadronicSystemGenerator(void *p) {
      delete ((::genie::DFRHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLDFRHadronicSystemGenerator(void *p) {
      delete [] ((::genie::DFRHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLDFRHadronicSystemGenerator(void *p) {
      typedef ::genie::DFRHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRPrimaryLeptonGenerator : new ::genie::DFRPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLDFRPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DFRPrimaryLeptonGenerator[nElements] : new ::genie::DFRPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      delete ((::genie::DFRPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::DFRPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      typedef ::genie::DFRPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRPrimaryLeptonGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhDfrcEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Diffractive/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Diffractive/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Diffractive/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Diffractive/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDfrcEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class DFRInteractionListGenerator;}
namespace genie{class DFRKinematicsGenerator;}
namespace genie{class DFRHadronicSystemGenerator;}
namespace genie{class DFRPrimaryLeptonGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDfrcEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::DFRInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the 
          DFR EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_
#define _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class DFRInteractionListGenerator : public InteractionListGeneratorI {

public :
  DFRInteractionListGenerator();
  DFRInteractionListGenerator(string config);
 ~DFRInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace
#endif // _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DFRKinematicsGenerator

\brief    Generates kinematics for diffractive reactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_KINEMATICS_GENERATOR_H_
#define _DIFFRACTIVE_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class DFRKinematicsGenerator : public KineGeneratorWithCache {

public :
  DFRKinematicsGenerator();
  DFRKinematicsGenerator(string config);
 ~DFRKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;

  double fBeta;
};

}      // genie namespace
#endif // _DIFFRACTIVE_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::FRHadronicSystemGenerator

\brief    Generates the f/s hadronic system in diffractive interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_
#define _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class DFRHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  DFRHadronicSystemGenerator();
  DFRHadronicSystemGenerator(string config);
 ~DFRHadronicSystemGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_

//____________________________________________________________________________
/*!

\class    genie::DFRPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in diffractive reactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15th, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_
#define _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class DFRPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  DFRPrimaryLeptonGenerator();
  DFRPrimaryLeptonGenerator(string config);
 ~DFRPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::DFRHadronicSystemGenerator", payloadCode, "@",
"genie::DFRInteractionListGenerator", payloadCode, "@",
"genie::DFRKinematicsGenerator", payloadCode, "@",
"genie::DFRPrimaryLeptonGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDfrcEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDfrcEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDfrcEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDfrcEG() {
  TriggerDictionaryInitialization_libGPhDfrcEG_Impl();
}
