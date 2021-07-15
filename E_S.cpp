#include "E_S.h"
#include "NC_A_P4"
#include "FuncaoGenE_S"
#include <iostream>

E_S::E_S(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_S::integrar() {

  c = 2;
  return NC_A_P4::integrar(FuncaoGenE_S(integrando, a, b), -c, c, 2, -1, 0.000001);

}