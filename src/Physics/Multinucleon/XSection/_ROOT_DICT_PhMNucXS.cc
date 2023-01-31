// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMNucXS

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
#include "MECXSec.h"
#include "MECHadronTensor.h"
#include "MartiniEricsonChanfrayMarteauMECPXSec2016.h"
#include "MECUtils.h"
#include "NievesSimoVacasMECPXSec2016.h"
#include "EmpiricalMECPXSec2015.h"

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

namespace genie {
   namespace utils {
      namespace mec {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLmec_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::mec", 0 /*version*/, "", 319,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutilscLcLmec_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLmec_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLMECXSec_Dictionary();
   static void geniecLcLMECXSec_TClassManip(TClass*);
   static void *new_geniecLcLMECXSec(void *p = 0);
   static void *newArray_geniecLcLMECXSec(Long_t size, void *p);
   static void delete_geniecLcLMECXSec(void *p);
   static void deleteArray_geniecLcLMECXSec(void *p);
   static void destruct_geniecLcLMECXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECXSec*)
   {
      ::genie::MECXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECXSec", "", 40,
                  typeid(::genie::MECXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECXSec) );
      instance.SetNew(&new_geniecLcLMECXSec);
      instance.SetNewArray(&newArray_geniecLcLMECXSec);
      instance.SetDelete(&delete_geniecLcLMECXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECXSec);
      instance.SetDestructor(&destruct_geniecLcLMECXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECXSec*)
   {
      return GenerateInitInstanceLocal((::genie::MECXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::MECXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::MECXSec*)0x0)->GetClass();
      geniecLcLMECXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMECHadronTensor_Dictionary();
   static void geniecLcLMECHadronTensor_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECHadronTensor*)
   {
      ::genie::MECHadronTensor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECHadronTensor));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECHadronTensor", "", 136,
                  typeid(::genie::MECHadronTensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECHadronTensor_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECHadronTensor) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECHadronTensor*)
   {
      return GenerateInitInstanceLocal((::genie::MECHadronTensor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::MECHadronTensor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECHadronTensor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::MECHadronTensor*)0x0)->GetClass();
      geniecLcLMECHadronTensor_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECHadronTensor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNievesSimoVacasMECPXSec2016_Dictionary();
   static void geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(TClass*);
   static void *new_geniecLcLNievesSimoVacasMECPXSec2016(void *p = 0);
   static void *newArray_geniecLcLNievesSimoVacasMECPXSec2016(Long_t size, void *p);
   static void delete_geniecLcLNievesSimoVacasMECPXSec2016(void *p);
   static void deleteArray_geniecLcLNievesSimoVacasMECPXSec2016(void *p);
   static void destruct_geniecLcLNievesSimoVacasMECPXSec2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NievesSimoVacasMECPXSec2016*)
   {
      ::genie::NievesSimoVacasMECPXSec2016 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NievesSimoVacasMECPXSec2016));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NievesSimoVacasMECPXSec2016", "", 412,
                  typeid(::genie::NievesSimoVacasMECPXSec2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNievesSimoVacasMECPXSec2016_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NievesSimoVacasMECPXSec2016) );
      instance.SetNew(&new_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetNewArray(&newArray_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDelete(&delete_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDeleteArray(&deleteArray_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDestructor(&destruct_geniecLcLNievesSimoVacasMECPXSec2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NievesSimoVacasMECPXSec2016*)
   {
      return GenerateInitInstanceLocal((::genie::NievesSimoVacasMECPXSec2016*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NievesSimoVacasMECPXSec2016*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNievesSimoVacasMECPXSec2016_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NievesSimoVacasMECPXSec2016*)0x0)->GetClass();
      geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEmpiricalMECPXSec2015_Dictionary();
   static void geniecLcLEmpiricalMECPXSec2015_TClassManip(TClass*);
   static void *new_geniecLcLEmpiricalMECPXSec2015(void *p = 0);
   static void *newArray_geniecLcLEmpiricalMECPXSec2015(Long_t size, void *p);
   static void delete_geniecLcLEmpiricalMECPXSec2015(void *p);
   static void deleteArray_geniecLcLEmpiricalMECPXSec2015(void *p);
   static void destruct_geniecLcLEmpiricalMECPXSec2015(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EmpiricalMECPXSec2015*)
   {
      ::genie::EmpiricalMECPXSec2015 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EmpiricalMECPXSec2015));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EmpiricalMECPXSec2015", "", 473,
                  typeid(::genie::EmpiricalMECPXSec2015), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEmpiricalMECPXSec2015_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EmpiricalMECPXSec2015) );
      instance.SetNew(&new_geniecLcLEmpiricalMECPXSec2015);
      instance.SetNewArray(&newArray_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDelete(&delete_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDeleteArray(&deleteArray_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDestructor(&destruct_geniecLcLEmpiricalMECPXSec2015);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EmpiricalMECPXSec2015*)
   {
      return GenerateInitInstanceLocal((::genie::EmpiricalMECPXSec2015*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::EmpiricalMECPXSec2015*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEmpiricalMECPXSec2015_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::EmpiricalMECPXSec2015*)0x0)->GetClass();
      geniecLcLEmpiricalMECPXSec2015_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEmpiricalMECPXSec2015_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECXSec : new ::genie::MECXSec;
   }
   static void *newArray_geniecLcLMECXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::MECXSec[nElements] : new ::genie::MECXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECXSec(void *p) {
      delete ((::genie::MECXSec*)p);
   }
   static void deleteArray_geniecLcLMECXSec(void *p) {
      delete [] ((::genie::MECXSec*)p);
   }
   static void destruct_geniecLcLMECXSec(void *p) {
      typedef ::genie::MECXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECXSec

namespace ROOT {
} // end of namespace ROOT for class ::genie::MECHadronTensor

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NievesSimoVacasMECPXSec2016 : new ::genie::NievesSimoVacasMECPXSec2016;
   }
   static void *newArray_geniecLcLNievesSimoVacasMECPXSec2016(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NievesSimoVacasMECPXSec2016[nElements] : new ::genie::NievesSimoVacasMECPXSec2016[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      delete ((::genie::NievesSimoVacasMECPXSec2016*)p);
   }
   static void deleteArray_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      delete [] ((::genie::NievesSimoVacasMECPXSec2016*)p);
   }
   static void destruct_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      typedef ::genie::NievesSimoVacasMECPXSec2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NievesSimoVacasMECPXSec2016

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEmpiricalMECPXSec2015(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::EmpiricalMECPXSec2015 : new ::genie::EmpiricalMECPXSec2015;
   }
   static void *newArray_geniecLcLEmpiricalMECPXSec2015(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::EmpiricalMECPXSec2015[nElements] : new ::genie::EmpiricalMECPXSec2015[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEmpiricalMECPXSec2015(void *p) {
      delete ((::genie::EmpiricalMECPXSec2015*)p);
   }
   static void deleteArray_geniecLcLEmpiricalMECPXSec2015(void *p) {
      delete [] ((::genie::EmpiricalMECPXSec2015*)p);
   }
   static void destruct_geniecLcLEmpiricalMECPXSec2015(void *p) {
      typedef ::genie::EmpiricalMECPXSec2015 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::EmpiricalMECPXSec2015

namespace {
  void TriggerDictionaryInitialization_libGPhMNucXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Multinucleon/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Multinucleon/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Multinucleon/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Multinucleon/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMNucXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class MECXSec;}
namespace genie{class MECHadronTensor;}
namespace genie{class NievesSimoVacasMECPXSec2016;}
namespace genie{class EmpiricalMECPXSec2015;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMNucXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::MECXSec

\brief    A numerical cross-section integrator (GENIE/GSL interface) for the 
          J. Nieves, I. Ruiz Simo, M.J. Vicente Vacas and Martini MEC models.
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 22, 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_XSEC_H_
#define _MEC_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

#include <Math/Integrator.h>
#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

namespace genie {

class XSecAlgorithmI;
class Interaction;

class MECXSec : public XSecIntegratorI {
public:
  MECXSec();
  MECXSec(string config);
  virtual ~MECXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

protected:
  bool fSplitIntegral;

private:
  void LoadConfig (void);
  double fQ3Max;
};

//_____________________________________________________________________________________
// 
// GSL wrappers 
//
//_____________________________________________________________________________________

 namespace utils {
  namespace gsl   {

   class d2Xsec_dTCosth: public ROOT::Math::IBaseFunctionMultiDim
   {
    public:
      d2Xsec_dTCosth(const XSecAlgorithmI * m, const Interaction * i);
     ~d2Xsec_dTCosth();
      // ROOT::Math::IBaseFunctionMultiDim interface
      unsigned int                        NDim   (void)               const;
      double                              DoEval (const double * xin) const;
      ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
    private:
      const XSecAlgorithmI * fModel;
      const Interaction *    fInteraction;
   };

  } // gsl   namespace
 } // utils namespace

} // genie namespace

#endif  // _MEC_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::MECHadronTensor

\brief    Singleton class to load and store MEC hadron tensor tables,
          to aid in the implementation (and improve the CPU efficiency of)
          MEC cross-section models.

\author   Code contributed by Jackie Schwehr
          Substantial refactorization by the core GENIE group.

\ref      Hadron tensors used here are those computed by the following models:
          
          J. Nieves, I. Ruiz Simo, M.J. Vicente Vacas,
          Inclusive quasi-elastic neutrino reactions, PRC 83 (2011) 045501

\created  September 12, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_HADRON_TENSOR_H_
#define _MEC_HADRON_TENSOR_H_

#include <map>
#include <vector>
#include <string>

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

#include "Framework/Numerical/BLI2D.h"

using std::map;
using std::vector;
using std::string;

namespace genie {

class MECHadronTensor
{
public:

  // ................................................................
  // MEC hadron tensor type
  //

  typedef enum EMECHadronTensorType {  
    kMHTUndefined = -1,
    kMHTValenciaFullAll, 
    kMHTValenciaFullpn, 
    kMHTValenciaDeltaAll, 
    kMHTValenciaDeltapn
  } 
  MECHadronTensorType_t;

  // ................................................................
  // MEC hadron tensor table
  //

  class MECHadronTensorTable 
  {
  public:
     MECHadronTensorTable() { }
    ~MECHadronTensorTable() { /* note: should delete the grids! */ }
     map<MECHadronTensor::MECHadronTensorType_t, vector<genie::BLI2DNonUnifGrid *> > Table;
  };

  // ................................................................

  static MECHadronTensor * Instance();

  // method to return whether the targetpdg is in fKnownTargets
  bool KnownTarget(int targetpdg);

  // method to return whether the targetpdg is in fKnownTensors
  bool KnownTensor(int targetpdg);

  // method to access a specific set of tables
  const vector<genie::BLI2DNonUnifGrid *> &
     TensorTable(int targetpdg, MECHadronTensor::MECHadronTensorType_t type);

private:

  // Ctors & dtor
  MECHadronTensor();
  MECHadronTensor(const MECHadronTensor &);
 ~MECHadronTensor();

  // Self
  static MECHadronTensor * fgInstance;

  // Load available hadron tensor tables.
  // NOTES: All tables are loaded by the ctor - Consider loading them on demand.
  //        This will also need to be extended to load tensors for requested model.
  void LoadTensorTables(int targetpdg);

  // This map holds all known tensor tables (target PDG code is the key)
  std::map<int, MECHadronTensorTable> fTargetTensorTables;

  // List of targets for which we can provide a calculation
  // some known targets use scale from the tensor table from another target.
  std::vector<int> fKnownTensors;

  // that array size 14400 is 120x120.  Could go dynamic in the future, or not.
  void ReadHadTensorqzq0File(string filename, int nwpoints, int nqzpoints, int nq0points, double hadtensor_w_array[][14400]);

  // singleton cleaner
  struct Cleaner {
    void DummyMethodAndSilentCompiler(){}
    ~Cleaner(){
      if (MECHadronTensor::fgInstance !=0){
	delete MECHadronTensor::fgInstance;
	MECHadronTensor::fgInstance = 0;
      }
    }
  };
  friend struct Cleaner;
};

} // genie namespace

#endif // _MEC_HARDRON_TENSOR_H_
//____________________________________________________________________________
/*!

\class    genie::MartiniEricsonChanfrayMarteauMECPXSec2016

\brief    Computes the Martini, Ericson, Chanfray and Marteau MEC model 
          differential cross section.
          Uses precomputed hadon tensor tables.
          Is a concrete implementation of the XSecAlgorithmI interface. 

\author   Sara Bolognesi <sara.bolognesi@cea.fr>
          CEA Saclay

          Marco Martini
          CEA Saclay

\ref      M. Martini, M. Ericson, G. Chanfray, J. Marteau.
          Neutrino and antineutrino quasielastic interactions with nuclei
          Phys.Rev. C81 (2010) 045502

\created  Mar 30, 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_
#define _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_

#include <vector>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/Multinucleon/XSection/MECHadronTensor.h"

using std::vector;

namespace genie {

class XSecIntegratorI;

class MartiniEricsonChanfrayMarteauMECPXSec2016 : public XSecAlgorithmI {

public:
  MartiniEricsonChanfrayMarteauMECPXSec2016();
  MartiniEricsonChanfrayMarteauMECPXSec2016(string config);
  virtual ~MartiniEricsonChanfrayMarteauMECPXSec2016();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:

  // Load algorithm configuration
  void LoadConfig (void);

  const XSecIntegratorI *  fXSecIntegrator; // Numerical integrator (GSL)

};
  
}       // genie namespace
#endif  // _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_
//____________________________________________________________________________
/*!

\namespace genie::utils::mec

\brief     MEC utilities

\author    

\created   

\cpright   Copyright (c) 2003-2019, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
           or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_UTILS_H_
#define _MEC_UTILS_H_

#include "Physics/Multinucleon/XSection/MECHadronTensor.h"

namespace genie {

class Interaction;

namespace utils {
namespace mec   {

  // ---------------------- this should be removed (is replaced by code below)
  //
  // Kinematic calculation: Give q0q3 (and Enu and lepton mass) and 
  // return muon KE and costheta, and jacobian area.
  // Contributed by R.Gran.
  double GetTmuCostFromq0q3(
    double dq0, double dq3, double Enu, double lmass, double &tmu, double &cost, double &area);
  // -----------------------


  //----------------------- once in trunk, this could be copied in KineUtils
  // Kinematic calculations:
  // Get lepton KE and costheta from q0, q3 (and Enu and lepton mass) 
  bool GetTlCostlFromq0q3(
    double q0, double q3, double Enu, double ml, double & Tl, double & costl);
  // Get q0, q3 from lepton KE and costheta (and Enu and lepton mass) 
  bool Getq0q3FromTlCostl(
    double Tl, double costl, double Enu, double ml, double & q0, double & q3);
  //----------------------- once in trunk, this could be embedded in KineUtils::Jacobian()
  // Jacobian for tranformation of d2sigma / dT dcostl to d2sigma / dq0 dq3
  double J(double q0, double q3, double Enu, double ml);
  //----------------------


  // Utility that encodes the Qvalues for the kinematic calculation.
  // this is used in the code that contracts the hadron tensor with the lepton tensor
  // Contributed by R.Gran.
  double Qvalue(int targetpdg, int nupdg);

  // This method implements the lepton tensor contraction with a hadron
  // tensor provided in tabular form.
  // The lepton tensor is expressed formally in Nieves PRC 70 (2004) 055503.
  // Returns  d2sigma/(dTmu dcos_mu) in 10^{41} cm^2 / GeV 
  // Contributed by R.Gran.
  double TensorContraction(
     const Interaction * interaction, 
     int tensor_pdg, 
     MECHadronTensor::MECHadronTensorType_t tensor_type);
  double TensorContraction(
     int nu_pdg, int target_pdg, 
     double Enu,  // neutrino energy (GeV)
     double M_l, double T_l, double costh_l, // f/s lepton mass (GeV), kinetic energy (GeV) and cos(angle)
     int tensor_pdg, 
     MECHadronTensor::MECHadronTensorType_t tensor_type);

} // mec   namespace
} // utils namespace
} // genie namespace

#endif // _MEC_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::NievesSimoVacasMECPXSec2016

\brief    Computes the Valencia MEC model differential cross section.
          Uses precomputed hadon tensor tables.
          Is a concrete implementation of the XSecAlgorithmI interface. 

\author   Code contributed by J. Schwehr, D. Cherdack, R. Gran and described
          in arXiv:1601.02038 and some of the refereces there-in,
          in particular PRD 88 (2013) 113007

          Substantial code refactorizations by the core GENIE group.

\ref      J. Nieves, I. Ruiz Simo, M.J. Vicente Vacas,
          Inclusive quasi-elastic neutrino reactions, PRC 83 (2011) 045501

\created  Mar 22, 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_
#define _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_

#include <vector>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/Multinucleon/XSection/MECHadronTensor.h"

using std::vector;

namespace genie {

class XSecIntegratorI;

class NievesSimoVacasMECPXSec2016 : public XSecAlgorithmI {

public:
  NievesSimoVacasMECPXSec2016();
  NievesSimoVacasMECPXSec2016(string config);
  virtual ~NievesSimoVacasMECPXSec2016();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:

  // Load algorithm configuration
  void LoadConfig (void);

  double                   fXSecScale;        ///< external xsec scaling factor

  const XSecIntegratorI *  fXSecIntegrator; // Numerical integrator (GSL)

//double fQ3Max;
};
  
}       // genie namespace
#endif  // _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_
//____________________________________________________________________________
/*!

\class    genie::EmpiricalMECPXSec2015

\brief    Computes the MEC differential cross section.
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

          Steve Dytman <dytman+ \at pitt.edu>
          Pittsburgh University

\created  May 05, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MEC_PXSEC_H_
#define _MEC_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class EmpiricalMECPXSec2015 : public XSecAlgorithmI {

public:
  EmpiricalMECPXSec2015();
  EmpiricalMECPXSec2015(string config);
  virtual ~EmpiricalMECPXSec2015();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig (void);

  double fMq2d;       ///< toy model param: `mass' in dipole (Q2 - dependence) form factor (GeV)
  double fMass;       ///< toy model param: peak  of W distribution (GeV)
  double fWidth;      ///< toy model param: width of W distribution (GeV)
  double fMECAPower;      ///< power of A relative to carbon

  double fFracPN_NC;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp
  double fFracPN_CC;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp
  double fFracPN_EM;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp

  double fFracCCQE;   ///< empirical model param: MEC cross section is taken to be this fraction of CCQE cross section
  double fFracNCQE;   ///< empirical model param: MEC cross section is taken to be this fraction of NCQE cross section
  double fFracEMQE;   ///< empirical model param: MEC cross section is taken to be this fraction of Rosenbluth xs

  const XSecAlgorithmI * fXSecAlgCCQE; ///< cross section algorithm for CCQE
  const XSecAlgorithmI * fXSecAlgNCQE; ///< cross section algorithm for NCQE
  const XSecAlgorithmI * fXSecAlgEMQE; ///< cross section algorithm for EMQE

};

}       // genie namespace
#endif  // _MEC_PARTIAL_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::EmpiricalMECPXSec2015", payloadCode, "@",
"genie::MECHadronTensor", payloadCode, "@",
"genie::MECXSec", payloadCode, "@",
"genie::NievesSimoVacasMECPXSec2016", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMNucXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMNucXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMNucXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMNucXS() {
  TriggerDictionaryInitialization_libGPhMNucXS_Impl();
}
