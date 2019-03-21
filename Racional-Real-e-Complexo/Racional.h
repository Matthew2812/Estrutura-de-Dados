#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream> 
#include "Real.h"

class Racional:public Real{ 
  public:
    Racional(int v, int x, char sinal);
    ~Racional();
    int getA();
    int getB();
};

#endif