#include "Integracao.h"
#include "NC_F_P4.h"
#include "FuncaoGenE_S.h"

class E_S : 
   public Integracao {

  public:
    
    E_S(Funcao* integrando, double a, double b);
    double integrar();
  
};