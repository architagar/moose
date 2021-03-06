/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef FUNCTIONSIDEINTEGRAL_H
#define FUNCTIONSIDEINTEGRAL_H

#include "Function.h"
#include "SideIntegralPostprocessor.h"

//Forward Declarations
class FunctionSideIntegral;

template<>
InputParameters validParams<FunctionSideIntegral>();

/**
 * This postprocessor computes the integral of a function over a specified boundary
 */
class FunctionSideIntegral : public SideIntegralPostprocessor
{
public:
  FunctionSideIntegral(const std::string & name, InputParameters parameters);
  virtual void threadJoin(const UserObject & y);

protected:
  virtual Real computeQpIntegral();

  /// The function
  Function & _func;


};

#endif //FUNCTIONSIDEINTEGRAL_H
