#include "Funcao.h"

class FuncaoGenE_S:
  public Funcao {
    
    public:
      FuncaoGenE_S(Funcao* f0, double a, double b);
      double f(double x);

    private:
      Funcao* f0;
      
  
};