#ifndef INTEIRO_H
#define INTEIRO_H
#include <iostream> 
#include "Racional.h"

class Inteiro:public Racional{ 
  public:
  	Inteiro(unsigned int v, char sinal);
    ~Inteiro();
  	Inteiro suc();
  	Inteiro pred();
  	int getValue(); 
};

#endif