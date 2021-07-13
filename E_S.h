#include "Integracao.h"

class E_S : 
   public Integracao {

  public:
    
    E_S(Funcao* integrando, double a, double b);
    double integrar();
  
};