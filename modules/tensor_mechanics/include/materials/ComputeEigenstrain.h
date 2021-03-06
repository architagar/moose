/****************************************************************/
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*          All contents are licensed under LGPL V2.1           */
/*             See LICENSE for full restrictions                */
/****************************************************************/
#ifndef COMPUTEEIGENSTRAIN_H
#define COMPUTEEIGENSTRAIN_H

#include "ComputeStressFreeStrainBase.h"

/**
 * ComputeEigenstrain computes an Eigenstrain that is a function of a single variable defined by a base tensor and a scalar function defined in a Derivative Material.
 */
class ComputeEigenstrain : public ComputeStressFreeStrainBase
{
public:
  ComputeEigenstrain(const std:: string & name, InputParameters parameters);

protected:
  virtual void computeQpStressFreeStrain();

  std::string _prefactor_name;
  const MaterialProperty<Real> & _prefactor;

  RankTwoTensor _eigen_base_tensor;
};

#endif //COMPUTEEIGENSTRAIN_H
