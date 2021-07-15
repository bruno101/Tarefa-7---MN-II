#include "FuncaoGenE_S.h"

FuncaoGenE_S::FuncaoGenE_S(Funcao* f0, double a, double b) {
  this->f0 = f0;
  this->a = a;
  this->b = b;
}

double FuncaoGenE_S::f(double x) {
  return f0( (a+b)/2.0 + (b-a)*tanh(x)/2.0 ) * ( (b-a)/(2.0*cosh(x)*cosh(x)) );
}