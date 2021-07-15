#include "Funcao.h"

class FuncaoGenE_D:
  public Funcao {
    
    public:
      FuncaoGenE_D(Funcao* f0, double a, double b);
      double f(double x);

    private:
      Funcao* f0;
      double a;
      double b;
      
  
};