// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhCmn

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
#include "OutgoingDarkGenerator.h"
#include "KineGeneratorWithCache.h"
#include "HadronicSystemGenerator.h"
#include "PrimaryLeptonGenerator.h"
#include "InitialStateAppender.h"
#include "VertexGenerator.h"

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
   static TClass *geniecLcLOutgoingDarkGenerator_Dictionary();
   static void geniecLcLOutgoingDarkGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::OutgoingDarkGenerator*)
   {
      ::genie::OutgoingDarkGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::OutgoingDarkGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::OutgoingDarkGenerator", "", 38,
                  typeid(::genie::OutgoingDarkGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLOutgoingDarkGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::OutgoingDarkGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::OutgoingDarkGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::OutgoingDarkGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::OutgoingDarkGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLOutgoingDarkGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::OutgoingDarkGenerator*)0x0)->GetClass();
      geniecLcLOutgoingDarkGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLOutgoingDarkGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKineGeneratorWithCache_Dictionary();
   static void geniecLcLKineGeneratorWithCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KineGeneratorWithCache*)
   {
      ::genie::KineGeneratorWithCache *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KineGeneratorWithCache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KineGeneratorWithCache", "", 116,
                  typeid(::genie::KineGeneratorWithCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKineGeneratorWithCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KineGeneratorWithCache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KineGeneratorWithCache*)
   {
      return GenerateInitInstanceLocal((::genie::KineGeneratorWithCache*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KineGeneratorWithCache*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKineGeneratorWithCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::KineGeneratorWithCache*)0x0)->GetClass();
      geniecLcLKineGeneratorWithCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKineGeneratorWithCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHadronicSystemGenerator_Dictionary();
   static void geniecLcLHadronicSystemGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronicSystemGenerator*)
   {
      ::genie::HadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronicSystemGenerator", "", 177,
                  typeid(::genie::HadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronicSystemGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::HadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::HadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::HadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLPrimaryLeptonGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PrimaryLeptonGenerator*)
   {
      ::genie::PrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PrimaryLeptonGenerator", "", 242,
                  typeid(::genie::PrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PrimaryLeptonGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::PrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInitialStateAppender_Dictionary();
   static void geniecLcLInitialStateAppender_TClassManip(TClass*);
   static void *new_geniecLcLInitialStateAppender(void *p = 0);
   static void *newArray_geniecLcLInitialStateAppender(Long_t size, void *p);
   static void delete_geniecLcLInitialStateAppender(void *p);
   static void deleteArray_geniecLcLInitialStateAppender(void *p);
   static void destruct_geniecLcLInitialStateAppender(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InitialStateAppender*)
   {
      ::genie::InitialStateAppender *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InitialStateAppender));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InitialStateAppender", "", 304,
                  typeid(::genie::InitialStateAppender), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInitialStateAppender_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InitialStateAppender) );
      instance.SetNew(&new_geniecLcLInitialStateAppender);
      instance.SetNewArray(&newArray_geniecLcLInitialStateAppender);
      instance.SetDelete(&delete_geniecLcLInitialStateAppender);
      instance.SetDeleteArray(&deleteArray_geniecLcLInitialStateAppender);
      instance.SetDestructor(&destruct_geniecLcLInitialStateAppender);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InitialStateAppender*)
   {
      return GenerateInitInstanceLocal((::genie::InitialStateAppender*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::InitialStateAppender*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInitialStateAppender_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::InitialStateAppender*)0x0)->GetClass();
      geniecLcLInitialStateAppender_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInitialStateAppender_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLVertexGenerator_Dictionary();
   static void geniecLcLVertexGenerator_TClassManip(TClass*);
   static void *new_geniecLcLVertexGenerator(void *p = 0);
   static void *newArray_geniecLcLVertexGenerator(Long_t size, void *p);
   static void delete_geniecLcLVertexGenerator(void *p);
   static void deleteArray_geniecLcLVertexGenerator(void *p);
   static void destruct_geniecLcLVertexGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::VertexGenerator*)
   {
      ::genie::VertexGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::VertexGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::VertexGenerator", "", 355,
                  typeid(::genie::VertexGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLVertexGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::VertexGenerator) );
      instance.SetNew(&new_geniecLcLVertexGenerator);
      instance.SetNewArray(&newArray_geniecLcLVertexGenerator);
      instance.SetDelete(&delete_geniecLcLVertexGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLVertexGenerator);
      instance.SetDestructor(&destruct_geniecLcLVertexGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::VertexGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::VertexGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::VertexGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLVertexGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::VertexGenerator*)0x0)->GetClass();
      geniecLcLVertexGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLVertexGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::genie::OutgoingDarkGenerator

namespace ROOT {
} // end of namespace ROOT for class ::genie::KineGeneratorWithCache

namespace ROOT {
} // end of namespace ROOT for class ::genie::HadronicSystemGenerator

namespace ROOT {
} // end of namespace ROOT for class ::genie::PrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLInitialStateAppender(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::InitialStateAppender : new ::genie::InitialStateAppender;
   }
   static void *newArray_geniecLcLInitialStateAppender(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::InitialStateAppender[nElements] : new ::genie::InitialStateAppender[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLInitialStateAppender(void *p) {
      delete ((::genie::InitialStateAppender*)p);
   }
   static void deleteArray_geniecLcLInitialStateAppender(void *p) {
      delete [] ((::genie::InitialStateAppender*)p);
   }
   static void destruct_geniecLcLInitialStateAppender(void *p) {
      typedef ::genie::InitialStateAppender current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::InitialStateAppender

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLVertexGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::VertexGenerator : new ::genie::VertexGenerator;
   }
   static void *newArray_geniecLcLVertexGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::VertexGenerator[nElements] : new ::genie::VertexGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLVertexGenerator(void *p) {
      delete ((::genie::VertexGenerator*)p);
   }
   static void deleteArray_geniecLcLVertexGenerator(void *p) {
      delete [] ((::genie::VertexGenerator*)p);
   }
   static void destruct_geniecLcLVertexGenerator(void *p) {
      typedef ::genie::VertexGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::VertexGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhCmn_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Common",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Common",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Common",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Common/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhCmn dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class OutgoingDarkGenerator;}
namespace genie{class KineGeneratorWithCache;}
namespace genie{class HadronicSystemGenerator;}
namespace genie{class PrimaryLeptonGenerator;}
namespace genie{class InitialStateAppender;}
namespace genie{class VertexGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhCmn dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::OutgoingDarkGenerator

\brief    Abstract class. Is used to pass common implementation to concrete
          implementations of the EventRecordVisitorI interface generating the
          primary lepton for a specific processes (QEL,DIS,RES,IMD,...)

\author   Joshua Berger <jberger \at physics.wisc.edu>
          University of Wisconsin-Madison
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _OUTGOING_DARK_GENERATOR_H_
#define _OUTGOING_DARK_GENERATOR_H_

class TVector3;
class TLorentzVector;

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class OutgoingDarkGenerator : public EventRecordVisitorI {

public :

  //-- Standard EventRecordVisitorI interface implementation
  virtual void ProcessEventRecord(GHepRecord * evrec) const;

  //-- Common methods for all concrete OutgoingDarkGenerator-type
  //   EventRecordVisitors
  virtual void     SetPolarization  (GHepRecord * ev) const;
  virtual TVector3 NucRestFrame2Lab (GHepRecord * ev) const;
  virtual void     AddToEventRecord (
              GHepRecord * ev, int pdgc, const TLorentzVector & p4) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

protected:

  //-- Abstract class - Can only be instantiated by its children.
  OutgoingDarkGenerator();
  OutgoingDarkGenerator(string name);
  OutgoingDarkGenerator(string name, string config);
  virtual ~OutgoingDarkGenerator();

  void LoadConfig(void);

  bool fApplyCoulombCorrection;
};

}      // genie namespace

#endif // _OUTGOING_DARK_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::KineGeneratorWithCache

\brief    Abstract class. Provides a data caching mechanism for for concrete
          implementations of the EventRecordVisitorI interface, generating
          kinematics and wishing to cache maximum differential xsecs.

          This class provides some common implementation for handling
          (retrieving, creating, searching, adding to) the cache.
          The various super-classes should implement the ComputeMaxXSec(...)
          method for computing the maximum xsec in case it has not already
          being pushed into the cache at a previous iteration.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 15, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KINE_GENERATOR_WITH_CACHE_H_
#define _KINE_GENERATOR_WITH_CACHE_H_

#include <string>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Utils/Range1.h"

using std::string;

namespace genie {

class CacheBranchFx;
class XSecAlgorithmI;

class KineGeneratorWithCache : public EventRecordVisitorI {

protected:
  KineGeneratorWithCache();
  KineGeneratorWithCache(string name);
  KineGeneratorWithCache(string name, string config);
  ~KineGeneratorWithCache();

  virtual double ComputeMaxXSec (const Interaction * in) const = 0;
  virtual double MaxXSec        (GHepRecord * evrec) const;
  virtual double FindMaxXSec    (const Interaction * in) const;
  virtual void   CacheMaxXSec   (const Interaction * in, double xsec) const;
  virtual double Energy         (const Interaction * in) const;

  virtual CacheBranchFx * AccessCacheBranch (const Interaction * in) const;

  virtual void AssertXSecLimits (const Interaction * in, double xsec, double xsec_max) const;

  mutable const XSecAlgorithmI * fXSecModel;

  double fSafetyFactor;         ///< maxxsec -> maxxsec * safety_factor
  double fMaxXSecDiffTolerance; ///< max{100*(xsec-maxxsec)/.5*(xsec+maxxsec)} if xsec>maxxsec
  double fEMin;                 ///< min E for which maxxsec is cached - forcing explicit calc.
  bool   fGenerateUniformly;    ///< uniform over allowed phase space + event weight?
};

}      // genie namespace

#endif // _KINE_GENERATOR_WITH_CACHE_H_
//____________________________________________________________________________
/*!

\class    genie::HadronicSystemGenerator

\brief    Abstract class. Is used to pass some commonly recurring methods to
          all concrete implementations of the EventRecordVisitorI interface
          generating the hadronic system for a specific processes (QEL,DIS,
          RES,...)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 16, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HADRONIC_SYSTEM_GENERATOR_H_
#define _HADRONIC_SYSTEM_GENERATOR_H_

#include <TLorentzVector.h>
#include <TVector3.h>

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class HadronicSystemGenerator : public EventRecordVisitorI {

public :

  // Do not implement the EventRecordVisitorI interface.
  // Leave it for the concrete subclasses


  // Common methods for all concrete subclasses

  void AddTargetNucleusRemnant  (GHepRecord * event_rec) const;
  void AddFinalHadronicSyst     (GHepRecord * event_rec) const;
  void PreHadronTransportDecays (GHepRecord * event_rec) const;

  TLorentzVector Hadronic4pLAB       (GHepRecord * event_rec) const;
  TLorentzVector MomentumTransferLAB (GHepRecord * event_rec) const;
  TVector3       HCM2LAB             (GHepRecord * event_rec) const;
  int            HadronShowerCharge  (GHepRecord * event_rec) const;
  int            ResonanceCharge     (GHepRecord * event_rec) const;

protected:

  // Abstract base class
  HadronicSystemGenerator();
  HadronicSystemGenerator(string name);
  HadronicSystemGenerator(string name, string config);
 ~HadronicSystemGenerator();

  const EventRecordVisitorI * fPreINukeDecayer;
};

}      // genie namespace

#endif // _HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::PrimaryLeptonGenerator

\brief    Abstract class. Is used to pass common implementation to concrete
          implementations of the EventRecordVisitorI interface generating the
          primary lepton for a specific processes (QEL,DIS,RES,IMD,...)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PRIMARY_LEPTON_GENERATOR_H_
#define _PRIMARY_LEPTON_GENERATOR_H_

class TVector3;
class TLorentzVector;

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class PrimaryLeptonGenerator : public EventRecordVisitorI {

public :

  //-- Standard EventRecordVisitorI interface implementation
  virtual void ProcessEventRecord(GHepRecord * evrec) const;

  //-- Common methods for all concrete PrimaryLeptonGenerator-type
  //   EventRecordVisitors
  virtual void     SetPolarization  (GHepRecord * ev) const;
  virtual TVector3 NucRestFrame2Lab (GHepRecord * ev) const;
  virtual void     AddToEventRecord (
              GHepRecord * ev, int pdgc, const TLorentzVector & p4) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

protected:

  //-- Abstract class - Can only be instantiated by its children.
  PrimaryLeptonGenerator();
  PrimaryLeptonGenerator(string name);
  PrimaryLeptonGenerator(string name, string config);
  virtual ~PrimaryLeptonGenerator();

  void LoadConfig(void);

  bool fApplyCoulombCorrection;
};

}      // genie namespace

#endif // _PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::InitialStateAppender

\brief    Appends the initial state information to the event record.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _INITIAL_STATE_APPENDER_H_
#define _INITIAL_STATE_APPENDER_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class InitialStateAppender : public EventRecordVisitorI {

public :

  InitialStateAppender();
  InitialStateAppender(string config);
  ~InitialStateAppender();

  //-- implement the EventRecordVisitorI interface

  void ProcessEventRecord(GHepRecord * event_rec) const;

private :

  void AddNeutrino       (GHepRecord * event_rec) const;
  void AddNucleus        (GHepRecord * event_rec) const;
  void AddStruckParticle (GHepRecord * event_rec) const;

};

}      // genie namespace

#endif // _INITIAL_STATE_APPENDER_H_
//____________________________________________________________________________
/*!

\class    genie::VertexGenerator

\brief    

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 16, 2007

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _VERTEX_GENERATOR_H_
#define _VERTEX_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class VertexGenerator : public EventRecordVisitorI {

public :
  VertexGenerator();
  VertexGenerator(string config);
 ~VertexGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

  //-- Generate the vertex position
  //   public so other classes can reuse this code to generate a position
  TVector3 GenerateVertex(const Interaction * in,double A) const;

private:
  void  LoadConfig (void);

  int    fVtxGenMethod; ///< vtx generation method (0: uniform, 1: according to nuclear density [def])
  double fR0;           ///< parameter controlling nuclear sizes
};

}      // genie namespace
#endif // _VERTEX_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::HadronicSystemGenerator", payloadCode, "@",
"genie::InitialStateAppender", payloadCode, "@",
"genie::KineGeneratorWithCache", payloadCode, "@",
"genie::OutgoingDarkGenerator", payloadCode, "@",
"genie::PrimaryLeptonGenerator", payloadCode, "@",
"genie::VertexGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhCmn",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhCmn_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhCmn_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhCmn() {
  TriggerDictionaryInitialization_libGPhCmn_Impl();
}
