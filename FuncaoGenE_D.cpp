#include "FuncaoGenE_D.h"

FuncaoGenE_D::FuncaoGenE_D(Funcao* f0, double a, double b) {
  this->f0 = f0;
  this->a = a;
  this->b = b;
}

double FuncaoGenE_D::f(double x) {
  return f0->f( (a+b)/2.0 + (b-a)*tanh(M_PI*sinh(x)/2.0)/2.0 ) * ( (b-a/2) * (M_PI/2.0) * ( cosh(x)/pow(cosh(M_PI*sinh(x)/2.0),2.0) ) );
}