#include "E_D.cpp"
#include <iostream>

E_D::E_D(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_D::integrar() {
  return 0;
}