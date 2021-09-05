#include "E_S.h"
#include <iostream>

E_S::E_S(Funcao* integrando, double a, double b) {
  this->integrando = integrando;
  this->a = a;
  this->b = b;
}

double E_S::integrar() {

  double c = 0.5;
  double integral = 0;

  Funcao *f1 = new FuncaoGenE_S(integrando, a, b);

  double oldIntegral = 0;

  while (1) {

    Integracao* pintegrObj = new NC_F_P4(f1, -c, c, 2, -1, 0.00001);
    integral = pintegrObj->integrar();
    if (integral != integral) {
      //É NaN
      return oldIntegral;
    }
      
    if (c == 0.5) {

      oldIntegral = integral;
      c+=0.5;
      continue;

    } else {

      if (integral == 0) {
          if (abs(integral-oldIntegral) < precisao) {
            break;
          }
        } else if ( abs( (integral-oldIntegral)/integral ) < precisao) {
          break;
      }

      c+=0.5;
      oldIntegral = integral;

    }

  }

  return integral;

}