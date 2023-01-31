// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDcy

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
#include "PythiaDecayer.h"
#include "UnstableParticleDecayer.h"
#include "DecayModelI.h"
#include "BaryonResonanceDecayer.h"
#include "Decayer.h"

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
   static TClass *geniecLcLDecayer_Dictionary();
   static void geniecLcLDecayer_TClassManip(TClass*);
   static void delete_geniecLcLDecayer(void *p);
   static void deleteArray_geniecLcLDecayer(void *p);
   static void destruct_geniecLcLDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Decayer*)
   {
      ::genie::Decayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Decayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Decayer", "Decayer.h", 34,
                  typeid(::genie::Decayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Decayer) );
      instance.SetDelete(&delete_geniecLcLDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLDecayer);
      instance.SetDestructor(&destruct_geniecLcLDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Decayer*)
   {
      return GenerateInitInstanceLocal((::genie::Decayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::Decayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::Decayer*)0x0)->GetClass();
      geniecLcLDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythiaDecayer_Dictionary();
   static void geniecLcLPythiaDecayer_TClassManip(TClass*);
   static void *new_geniecLcLPythiaDecayer(void *p = 0);
   static void *newArray_geniecLcLPythiaDecayer(Long_t size, void *p);
   static void delete_geniecLcLPythiaDecayer(void *p);
   static void deleteArray_geniecLcLPythiaDecayer(void *p);
   static void destruct_geniecLcLPythiaDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PythiaDecayer*)
   {
      ::genie::PythiaDecayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PythiaDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PythiaDecayer", "", 35,
                  typeid(::genie::PythiaDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythiaDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PythiaDecayer) );
      instance.SetNew(&new_geniecLcLPythiaDecayer);
      instance.SetNewArray(&newArray_geniecLcLPythiaDecayer);
      instance.SetDelete(&delete_geniecLcLPythiaDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythiaDecayer);
      instance.SetDestructor(&destruct_geniecLcLPythiaDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PythiaDecayer*)
   {
      return GenerateInitInstanceLocal((::genie::PythiaDecayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PythiaDecayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythiaDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PythiaDecayer*)0x0)->GetClass();
      geniecLcLPythiaDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythiaDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLUnstableParticleDecayer_Dictionary();
   static void geniecLcLUnstableParticleDecayer_TClassManip(TClass*);
   static void *new_geniecLcLUnstableParticleDecayer(void *p = 0);
   static void *newArray_geniecLcLUnstableParticleDecayer(Long_t size, void *p);
   static void delete_geniecLcLUnstableParticleDecayer(void *p);
   static void deleteArray_geniecLcLUnstableParticleDecayer(void *p);
   static void destruct_geniecLcLUnstableParticleDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::UnstableParticleDecayer*)
   {
      ::genie::UnstableParticleDecayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::UnstableParticleDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::UnstableParticleDecayer", "", 94,
                  typeid(::genie::UnstableParticleDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLUnstableParticleDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::UnstableParticleDecayer) );
      instance.SetNew(&new_geniecLcLUnstableParticleDecayer);
      instance.SetNewArray(&newArray_geniecLcLUnstableParticleDecayer);
      instance.SetDelete(&delete_geniecLcLUnstableParticleDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLUnstableParticleDecayer);
      instance.SetDestructor(&destruct_geniecLcLUnstableParticleDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::UnstableParticleDecayer*)
   {
      return GenerateInitInstanceLocal((::genie::UnstableParticleDecayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::UnstableParticleDecayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLUnstableParticleDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::UnstableParticleDecayer*)0x0)->GetClass();
      geniecLcLUnstableParticleDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLUnstableParticleDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBaryonResonanceDecayer_Dictionary();
   static void geniecLcLBaryonResonanceDecayer_TClassManip(TClass*);
   static void *new_geniecLcLBaryonResonanceDecayer(void *p = 0);
   static void *newArray_geniecLcLBaryonResonanceDecayer(Long_t size, void *p);
   static void delete_geniecLcLBaryonResonanceDecayer(void *p);
   static void deleteArray_geniecLcLBaryonResonanceDecayer(void *p);
   static void destruct_geniecLcLBaryonResonanceDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BaryonResonanceDecayer*)
   {
      ::genie::BaryonResonanceDecayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BaryonResonanceDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BaryonResonanceDecayer", "", 223,
                  typeid(::genie::BaryonResonanceDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBaryonResonanceDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BaryonResonanceDecayer) );
      instance.SetNew(&new_geniecLcLBaryonResonanceDecayer);
      instance.SetNewArray(&newArray_geniecLcLBaryonResonanceDecayer);
      instance.SetDelete(&delete_geniecLcLBaryonResonanceDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLBaryonResonanceDecayer);
      instance.SetDestructor(&destruct_geniecLcLBaryonResonanceDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BaryonResonanceDecayer*)
   {
      return GenerateInitInstanceLocal((::genie::BaryonResonanceDecayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BaryonResonanceDecayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBaryonResonanceDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BaryonResonanceDecayer*)0x0)->GetClass();
      geniecLcLBaryonResonanceDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBaryonResonanceDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLDecayer(void *p) {
      delete ((::genie::Decayer*)p);
   }
   static void deleteArray_geniecLcLDecayer(void *p) {
      delete [] ((::genie::Decayer*)p);
   }
   static void destruct_geniecLcLDecayer(void *p) {
      typedef ::genie::Decayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::Decayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythiaDecayer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PythiaDecayer : new ::genie::PythiaDecayer;
   }
   static void *newArray_geniecLcLPythiaDecayer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PythiaDecayer[nElements] : new ::genie::PythiaDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythiaDecayer(void *p) {
      delete ((::genie::PythiaDecayer*)p);
   }
   static void deleteArray_geniecLcLPythiaDecayer(void *p) {
      delete [] ((::genie::PythiaDecayer*)p);
   }
   static void destruct_geniecLcLPythiaDecayer(void *p) {
      typedef ::genie::PythiaDecayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::PythiaDecayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLUnstableParticleDecayer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::UnstableParticleDecayer : new ::genie::UnstableParticleDecayer;
   }
   static void *newArray_geniecLcLUnstableParticleDecayer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::UnstableParticleDecayer[nElements] : new ::genie::UnstableParticleDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLUnstableParticleDecayer(void *p) {
      delete ((::genie::UnstableParticleDecayer*)p);
   }
   static void deleteArray_geniecLcLUnstableParticleDecayer(void *p) {
      delete [] ((::genie::UnstableParticleDecayer*)p);
   }
   static void destruct_geniecLcLUnstableParticleDecayer(void *p) {
      typedef ::genie::UnstableParticleDecayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::UnstableParticleDecayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBaryonResonanceDecayer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BaryonResonanceDecayer : new ::genie::BaryonResonanceDecayer;
   }
   static void *newArray_geniecLcLBaryonResonanceDecayer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BaryonResonanceDecayer[nElements] : new ::genie::BaryonResonanceDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBaryonResonanceDecayer(void *p) {
      delete ((::genie::BaryonResonanceDecayer*)p);
   }
   static void deleteArray_geniecLcLBaryonResonanceDecayer(void *p) {
      delete [] ((::genie::BaryonResonanceDecayer*)p);
   }
   static void destruct_geniecLcLBaryonResonanceDecayer(void *p) {
      typedef ::genie::BaryonResonanceDecayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BaryonResonanceDecayer

namespace {
  void TriggerDictionaryInitialization_libGPhDcy_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Decay",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Decay",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Decay",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Decay/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDcy dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Decay/Decayer.h")))  Decayer;}
namespace genie{class PythiaDecayer;}
namespace genie{class UnstableParticleDecayer;}
namespace genie{class BaryonResonanceDecayer;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDcy dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::PythiaDecayer

\brief    Interface to PYTHIA particle decayer. \n
          The PythiaDecayer is a concrete implementation of the Decayer
          interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 20, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PYTHIA6_DECAYER_I_H_
#define _PYTHIA6_DECAYER_I_H_

#include <TPythia6.h>

#include "Physics/Decay/Decayer.h"

namespace genie {

class GHepParticle;
class PythiaDecayer: protected Decayer {

public:
  PythiaDecayer();
  PythiaDecayer(string config);
  virtual ~PythiaDecayer();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

private:

  void   Initialize             (void)                           const;
  bool   IsHandled              (int pdgc)                       const;
  void   InhibitDecay           (int pdgc, TDecayChannel * ch=0) const;
  void   UnInhibitDecay         (int pdgc, TDecayChannel * ch=0) const;
  bool   Decay                  (int ip, GHepRecord * event)     const;
  double SumOfBranchingRatios   (int kc)                         const;
  int    FindPythiaDecayChannel (int kc, TDecayChannel * ch)     const;
  bool   MatchDecayChannels     (int ic, TDecayChannel * ch)     const;

  mutable TPythia6 * fPythia;  ///< PYTHIA6 wrapper class
  mutable double     fWeight;
};

}         // genie namespace
#endif    // _PYTHIA6_DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::UnstableParticleDecayer

\brief    A hook for concrete particle decayers in the chain of event
          processing modules.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _UNSTABLE_PARTICLE_DECAYER_H_
#define _UNSTABLE_PARTICLE_DECAYER_H_

#include <vector>

#include "Framework/EventGen/EventRecordVisitorI.h"

using std::vector;

namespace genie {

class GHepParticle;

class UnstableParticleDecayer : public EventRecordVisitorI {

public :

  UnstableParticleDecayer();
  UnstableParticleDecayer(string config);
  ~UnstableParticleDecayer();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void  LoadConfig (void);
  vector <const EventRecordVisitorI *> fDecayers;///< list of all specified decayers
};

}      // genie namespace
#endif // _UNSTABLE_PARTICLE_DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::DecayModelI

\brief    Pure abstract base class. Defines the DecayModelI interface to be
          implemented by any algorithmic class decaying a particle.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 20, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE 
*/
//____________________________________________________________________________


#ifndef _DECAY_MODEL_I_H_
#define _DECAY_MODEL_I_H_

class TDecayChannel;

#include "Framework/Algorithm/Algorithm.h"
#include "Physics/Decay/DecayerInputs.h"

namespace genie {

class DecayModelI : public Algorithm {

public:

  virtual ~DecayModelI();

  //
  // define the DecayModelI interface
  //

  //! can this particle be decayed?
  virtual bool IsHandled  (int pdgc) const = 0; 

  //! decayer initialization
  virtual void Initialize (void) const = 0; 

  //! return a TClonesArray of TMCParticle objects (NOTE: all TMCParticle units in GeV^n [hbar=c=1])
  virtual TClonesArray * Decay (const DecayerInputs_t & inp) const = 0; 

  //! last decay weight
  virtual double Weight(void) const = 0; 

  //! inhibit input decay channel for the input particle (inhibit all decays if dc is null)
  virtual void InhibitDecay(int pdgc, TDecayChannel * dc = 0) const = 0;

  //! clear inhibit flags & re-enable all decay channel (enable all if dc is null)
  virtual void UnInhibitDecay(int pdgc, TDecayChannel * dc = 0) const = 0;

protected:

  DecayModelI();
  DecayModelI(string name);
  DecayModelI(string name, string config);
};

}         // genie namespace

#endif    // _DECAY_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::BaryonResonanceDecayer

\brief    Baryon resonance decayer module.

          A simple resonance decay simulation built using resonance branching
          fraction data and an N-body phase space generator.
          Since the resonance can be produced off-the-mass-shell, decay
          channels with total-mass > W are suppressed.

          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 27, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BARYON_RESONANCE_DECAYER_H_
#define _BARYON_RESONANCE_DECAYER_H_

#include <TGenPhaseSpace.h>
#include <TLorentzVector.h>

#include "Physics/Decay/Decayer.h"

namespace genie {

class GHepParticle;
class BaryonResonanceDecayer : protected Decayer {

public:
  BaryonResonanceDecayer();
  BaryonResonanceDecayer(string config);
  virtual ~BaryonResonanceDecayer();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  virtual void LoadConfig    (void);

private:

  void           Initialize        (void) const;
  bool           IsHandled         (int pdgc) const;
  void           InhibitDecay      (int pdgc, TDecayChannel * ch=0) const;
  void           UnInhibitDecay    (int pdgc, TDecayChannel * ch=0) const;
  double         Weight            (void) const;
  bool           Decay             (int dec_part_id, GHepRecord * event) const;
  TDecayChannel* SelectDecayChannel(int dec_part_id, GHepRecord * event, bool & to_be_deleted ) const;
  // the flag to_be_deleted is referred to the returned decay channel 
  bool           DecayExclusive    (int dec_part_id, GHepRecord * event, TDecayChannel * ch) const;

  // Methods specific for Delta decay
  TObjArray *    EvolveDeltaBR        (int dec_part_pdgc, TObjArray * decay_list, double W) const;
  double         EvolveDeltaDecayWidth(int dec_part_pdgc, TDecayChannel * ch, double W) const;
  bool           AcceptPionDecay( TLorentzVector lab_pion, int dec_part_id, const GHepRecord * event ) const ;

  double         FinalStateMass    ( TDecayChannel * ch ) const;
  bool           IsPiNDecayChannel ( TDecayChannel * ch ) const;

  static bool IsDelta( int dec_part_pdgc ) ; 
  static bool HasEvolvedBRs( int dec_part_pdgc ) ; 

  mutable TGenPhaseSpace fPhaseSpaceGenerator;
  mutable double         fWeight;

  bool   fDeltaThetaOnly ;

  std::vector<double> fR33, fR31, fR3m1 ;
  std::vector<double> fQ2Thresholds ;

  std::vector<double> fW_max ;

  double fFFScaling ;  // Scaling factor of the form factor of the Delta wrt to Q2

};

}         // genie namespace
#endif    // _BARYON_RESONANCE_DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::Decayer

\brief    Base class for decayer classes.
          Implements common configuration, allowing users to toggle on/off
          flags for particles and decay channels.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 14, 2018

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _DECAYER_H_
#define _DECAYER_H_

class TDecayChannel;

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/ParticleData/PDGCodeList.h"
#include "Framework/GHEP/GHepStatus.h"

namespace genie {

class GHepParticle;

class Decayer : public EventRecordVisitorI {

public:
  virtual ~Decayer();

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

protected:
  Decayer();
  Decayer(string name);
  Decayer(string name, string config);

  virtual void LoadConfig    (void);
  virtual bool ToBeDecayed   (int pdgc, GHepStatus_t ist) const;
  virtual bool IsUnstable    (int pdgc) const;
  virtual bool IsHandled     (int pdgc) const = 0;
  virtual void InhibitDecay  (int pdgc, TDecayChannel * dc=0) const = 0;
  virtual void UnInhibitDecay(int pdgc, TDecayChannel * dc=0) const = 0;

  bool        fGenerateWeighted;    ///< generate weighted or unweighted decays?
  bool        fRunBefHadroTransp;   ///< is invoked before or after FSI?
  PDGCodeList fParticlesToDecay;    ///< list of particles to be decayed
  PDGCodeList fParticlesNotToDecay; ///< list of particles for which decay is inhibited
};

}      // genie namespace
#endif // _DECAYER_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::BaryonResonanceDecayer", payloadCode, "@",
"genie::Decayer", payloadCode, "@",
"genie::PythiaDecayer", payloadCode, "@",
"genie::UnstableParticleDecayer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDcy",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDcy_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDcy_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDcy() {
  TriggerDictionaryInitialization_libGPhDcy_Impl();
}
