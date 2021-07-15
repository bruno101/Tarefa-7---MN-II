#include "E_S.h"
#include "NC_A_P4.h"
#include "FuncaoGenE_S.h"
#include <iostream>

E_S::E_S(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_S::integrar() {
  double c = 2;
  Funcao *f1 = new FuncaoGenE_S(integrando, a, b);
  Integracao* pintegrObj = new NC_A_P4(f1, -c, c, 2, -1, 0.000001);
  return pintegrObj->integrar();

}