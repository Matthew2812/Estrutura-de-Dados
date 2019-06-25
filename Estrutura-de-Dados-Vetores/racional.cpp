#include "racional.h"
#include <stdlib.h>

Racional::Racional(int va, int vb){
  a = va;
  b = vb;
}

Racional::~Racional(){}

Racional::Racional(){}

int Racional::getA(){
  return a;
}

int Racional::getB(){
  return b;
}