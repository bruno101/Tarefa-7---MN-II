#include "E_S.h"
#include <iostream>

E_S::E_S(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_S::integrar() {
  return 0;
}