//____________________________________________________________________________
/*
 Copyright (c) 2003-2022, The GENIE Collaboration
 For the full text of the license visit http://copyright.genie-mc.org
 Aaron Meyer <asmeyer2012 \at uchicago.edu>
 based off DipoleELFormFactorsModel by
 Costas Andreopoulos <constantinos.andreopoulos \at cern.ch>
 University of Liverpool & STFC Rutherford Appleton Laboratory
*/
//____________________________________________________________________________

#include <TMath.h>
#include <sstream>

#include "Framework/Algorithm/AlgConfigPool.h"
#include "Framework/Conventions/Constants.h"
#include "Physics/QuasiElastic/XSection/DipoleAxialFormFactorModel.h"
#include "Physics/QuasiElastic/XSection/ZExpAxialFormFactorModel.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Messenger/Messenger.h"

using std::ostringstream;

using namespace genie;

//____________________________________________________________________________
DipoleAxialFormFactorModel::DipoleAxialFormFactorModel() :
AxialFormFactorModelI("genie::DipoleAxialFormFactorModel")
{

}
//____________________________________________________________________________
DipoleAxialFormFactorModel::DipoleAxialFormFactorModel(string config) :
AxialFormFactorModelI("genie::DipoleAxialFormFactorModel", config)
{

}
//____________________________________________________________________________
DipoleAxialFormFactorModel::~DipoleAxialFormFactorModel()
{

}
//____________________________________________________________________________
double DipoleAxialFormFactorModel::FA(const Interaction * interaction) const
{
  // calculate and return FA
  double q2 = interaction->Kine().q2();
  double fa = fFA0 / TMath::Power(1-q2/fMa2, 2);

  LOG("AxialFormFactor", pDEBUG) << "FA(q^2 = " << q2 << ") = " << fa;
  return fa;
}
//____________________________________________________________________________
void DipoleAxialFormFactorModel::Configure(const Registry & config)
{
  Algorithm::Configure(config);
  this->LoadConfig();
}
//____________________________________________________________________________
void DipoleAxialFormFactorModel::Configure(string param_set)
{
  Algorithm::Configure(param_set);
  this->LoadConfig();
}
//____________________________________________________________________________
void DipoleAxialFormFactorModel::LoadConfig(void)
{

  GetParam( "QEL-Ma", fMa ) ;
  fMa2 = TMath::Power(fMa,2);

  // FA(q2 = 0)
  GetParam( "QEL-FA0", fFA0 ) ;


Interaction * interaction = new Interaction();
for (int i=0;i<10;i++)  {
  double Q2 = i*0.1;
  interaction->KinePtr()->SetQ2( Q2);
  LOG("some_identifying_string",pWARN)
   << "Q2="  <<Q2
   <<" : FA(Q2)= " <<this->FA( interaction);

}
delete interaction;
}
//____________________________________________________________________________

