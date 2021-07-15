#include "E_D.h"
#include "NC_A_P4.h"
#include "FuncaoGenE_D.h"
#include <iostream>

E_D::E_D(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_D::integrar() {
  double c = 2;
  Funcao *f1 = new FuncaoGenE_D(integrando, a, b);
  Integracao* pintegrObj = new NC_A_P4(f1, -c, c, 2, -1, 0.000001);
  return pintegrObj->integrar();
}