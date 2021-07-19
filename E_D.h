#include "Integracao.h"
#include "NC_F_P4.h"
#include "FuncaoGenE_D.h"

class E_D : 
   public Integracao {

  public:
    
    E_D(Funcao* integrando, double a, double b);
    double integrar();
  
};