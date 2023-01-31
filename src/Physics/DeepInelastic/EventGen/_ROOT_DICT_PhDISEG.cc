// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDISEG

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
#include "DISPrimaryLeptonGenerator.h"
#include "DISInteractionListGenerator.h"
#include "DISKinematicsGenerator.h"
#include "DISHadronicSystemGenerator.h"

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
   static TClass *geniecLcLDISPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLDISPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLDISPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLDISPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLDISPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISPrimaryLeptonGenerator*)
   {
      ::genie::DISPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISPrimaryLeptonGenerator", "", 32,
                  typeid(::genie::DISPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DISPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLDISPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISInteractionListGenerator_Dictionary();
   static void geniecLcLDISInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLDISInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLDISInteractionListGenerator(void *p);
   static void destruct_geniecLcLDISInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISInteractionListGenerator*)
   {
      ::genie::DISInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISInteractionListGenerator", "", 79,
                  typeid(::genie::DISInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLDISInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLDISInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DISInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISInteractionListGenerator*)0x0)->GetClass();
      geniecLcLDISInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISKinematicsGenerator_Dictionary();
   static void geniecLcLDISKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLDISKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLDISKinematicsGenerator(void *p);
   static void destruct_geniecLcLDISKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISKinematicsGenerator*)
   {
      ::genie::DISKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISKinematicsGenerator", "", 143,
                  typeid(::genie::DISKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLDISKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLDISKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DISKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISKinematicsGenerator*)0x0)->GetClass();
      geniecLcLDISKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISHadronicSystemGenerator_Dictionary();
   static void geniecLcLDISHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLDISHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLDISHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLDISHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISHadronicSystemGenerator*)
   {
      ::genie::DISHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISHadronicSystemGenerator", "", 195,
                  typeid(::genie::DISHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLDISHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLDISHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::DISHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLDISHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISPrimaryLeptonGenerator : new ::genie::DISPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLDISPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISPrimaryLeptonGenerator[nElements] : new ::genie::DISPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      delete ((::genie::DISPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::DISPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      typedef ::genie::DISPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISInteractionListGenerator : new ::genie::DISInteractionListGenerator;
   }
   static void *newArray_geniecLcLDISInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISInteractionListGenerator[nElements] : new ::genie::DISInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISInteractionListGenerator(void *p) {
      delete ((::genie::DISInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLDISInteractionListGenerator(void *p) {
      delete [] ((::genie::DISInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLDISInteractionListGenerator(void *p) {
      typedef ::genie::DISInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISKinematicsGenerator : new ::genie::DISKinematicsGenerator;
   }
   static void *newArray_geniecLcLDISKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISKinematicsGenerator[nElements] : new ::genie::DISKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISKinematicsGenerator(void *p) {
      delete ((::genie::DISKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLDISKinematicsGenerator(void *p) {
      delete [] ((::genie::DISKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLDISKinematicsGenerator(void *p) {
      typedef ::genie::DISKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISHadronicSystemGenerator : new ::genie::DISHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLDISHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISHadronicSystemGenerator[nElements] : new ::genie::DISHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISHadronicSystemGenerator(void *p) {
      delete ((::genie::DISHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLDISHadronicSystemGenerator(void *p) {
      delete [] ((::genie::DISHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLDISHadronicSystemGenerator(void *p) {
      typedef ::genie::DISHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISHadronicSystemGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhDISEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/DeepInelastic/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/DeepInelastic/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/DeepInelastic/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/DeepInelastic/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDISEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class DISPrimaryLeptonGenerator;}
namespace genie{class DISInteractionListGenerator;}
namespace genie{class DISKinematicsGenerator;}
namespace genie{class DISHadronicSystemGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDISEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::DISPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v DIS interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_PRIMARY_LEPTON_GENERATOR_H_
#define _DIS_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class DISPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  DISPrimaryLeptonGenerator();
  DISPrimaryLeptonGenerator(string config);
  ~DISPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIS_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generate a list of all the Interaction (= event summary) objects that
          can be generated by the DIS EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_INTERACTION_LIST_GENERATOR_H_
#define _DIS_INTERACTION_LIST_GENERATOR_H_

#include <map>

#include "Framework/EventGen/InteractionListGeneratorI.h"

using std::multimap;

namespace genie {

class Interaction;

class DISInteractionListGenerator : public InteractionListGeneratorI {

public :
  DISInteractionListGenerator();
  DISInteractionListGenerator(string config);
 ~DISInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  multimap<int,bool> GetHitQuarks(const Interaction * interaction) const;

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;
  bool fSetHitQuark;
  bool fIsCharm;
};

}      // genie namespace

#endif // _DIS_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISKinematicsGenerator

\brief    Generates values for the kinematic variables describing DIS v
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

          Part of its implementation, related with the caching and retrieval of
          previously computed values, is inherited from the KineGeneratorWithCache
          abstract class.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_KINEMATICS_GENERATOR_H_
#define _DIS_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class DISKinematicsGenerator : public KineGeneratorWithCache {

public :
  DISKinematicsGenerator();
  DISKinematicsGenerator(string config);
  ~DISKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;
};

}      // genie namespace

#endif // _DIS_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISHadronicSystemGenerator

\brief    Generates the final state hadronic system in v DIS interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_HADRONIC_SYSTEM_GENERATOR_H_
#define _DIS_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class HadronizationModelI;

class DISHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  DISHadronicSystemGenerator();
  DISHadronicSystemGenerator(string config);
 ~DISHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void AddFragmentationProducts (GHepRecord * event_rec) const;
  void SimulateFormationZone    (GHepRecord * event_rec) const;

  void LoadConfig (void);

  const HadronizationModelI * fHadronizationModel;

  bool   fFilterPreFragmEntries;
  double fR0;          ///< param controling nuclear size
  double fNR;          ///< how far beyond the nuclear boundary does the particle tracker goes?
  double fct0pion;     ///< formation zone (c * formation time) - for pions
  double fct0nucleon;  ///< formation zone (c * formation time) - for nucleons
  double fK;           ///< param multiplying pT^2 in formation zone calculation
};

}      // genie namespace

#endif // _DIS_HADRONIC_SYSTEM_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::DISHadronicSystemGenerator", payloadCode, "@",
"genie::DISInteractionListGenerator", payloadCode, "@",
"genie::DISKinematicsGenerator", payloadCode, "@",
"genie::DISPrimaryLeptonGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDISEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDISEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDISEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDISEG() {
  TriggerDictionaryInitialization_libGPhDISEG_Impl();
}
