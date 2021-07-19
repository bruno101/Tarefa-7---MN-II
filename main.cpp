#include <iostream>
#include "Funcao01.h"
#include "Funcao02.h"
#include "Funcao03.h"
#include "Funcao04.h"
#include "Funcao05.h"
#include "Funcao06.h"
#include "Funcao07.h"
#include "Funcao08.h"
#include "Funcao09.h"
#include "E_D.h"
#include "E_S.h"
#include "Funcao.h"
#include "Integracao.h"

using namespace std;

int main() {

  int metodo_de_integracao;
  int id_integrando = 0;
  Funcao *integrando = 0;
  Integracao *pintegrObj;

  double a = -1.0;
  double b = 1.0;
  double precisao = 0.000001;
  double integral;

  cout << "Escolha a função a ser integrada: \n";
  cout << "\t1 - x^3 \n";
  cout << "\t2 - sin(x) \n";
  cout << "\t3 - cos(x) \n";
  cout << "\t4 - (sen(2x)+4x^2+3x)^2 \n";
  cout << "\t5 - (e^(-x^2)*(x+1)) \n";
  cout << "\t6 - (e^(-x)*(x+1)) \n";
  cout << "\t7 - ((1/sqrt(1-x^2))*(x+1))\n";
  cout << "\t8 - 1/cbrt(x^2)\n";
  cout << "\t9 - 1/sqrt(4-x^2)\n";
  cin >> id_integrando;
  switch (id_integrando) {
    case 1:
       integrando = new Funcao01;
       break;
    case 2:
       integrando = new Funcao02;
       break;
    case 3:
       integrando = new Funcao03;
       break;
    case 4:
       integrando = new Funcao04;
       break;
    case 5:
       integrando = new Funcao05;
       break;
    case 6:
       integrando = new Funcao06;
       break;
    case 7:
       integrando = new Funcao07;
       break;
    case 8:
       integrando = new Funcao08;
       break;
    case 9:
       integrando = new Funcao09;
       break;
  }

  cout << "Escolha entre exponencial simples ou exponencial dupla\n";
  cout << "1 - Exponencial simples\n";
  cout << "2 - Exponencial dupla\n";
  cin >> metodo_de_integracao;

  switch (metodo_de_integracao) {

      case 1:

        cout << "Escolha o valor de a: \n";
        cin >> a;
        cout << "Escolha o valor de b: \n";
        cin >> b;

        pintegrObj = new E_S(integrando, a, b);
        integral = pintegrObj->integrar();


        break;

      case 2:

        cout << "Escolha o valor de a: \n";
        cin >> a;

        cout << "Escolha o valor de b: \n";
        cin >> b;

        pintegrObj = new E_D(integrando, a, b);
        integral = pintegrObj->integrar();

        break;

  }

  cout << "O valor da integral é : " << integral;

}