#include "E_D.cpp"
#include "NC_A_P4"
#include "FuncaoGenE_D"
#include <iostream>

E_D::E_D(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_D::integrar() {
  return NC_A_P4::integrar(FuncaoGenE_D(integrando, a, b), -c, c, 2, -1, 0.000001)
}