#ifndef REAL_H
#define REAL_H
#include "Complexo.h"

class Real:public Complexo{
  public:
    Real(double c, char sinal); 
    ~Real();
    double getValue();
};

#endif