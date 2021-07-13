#include "Integracao.h"

class E_D : 
   public Integracao {

  public:
    
    E_D(Funcao* integrando, double a, double b);
    double integrar();
  
};