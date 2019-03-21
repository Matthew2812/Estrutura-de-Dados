#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream> 

class Racional{ 
  private:
    int a,b;
    char sinal;
  public:
    Racional(int v, int x, char sinal);
    ~Racional();
    Racional operator+(Racional n);
    Racional operator-(Racional n);
    Racional operator*(Racional n);
    Racional operator/(Racional n);
    unsigned int getA();
    unsigned int getB();
};

#endif