#include "inteiro.h"
#include <stdlib.h>

Inteiro::Inteiro(int v){
  value = v;
}

Inteiro::~Inteiro(){}

Inteiro::Inteiro(){}

int Inteiro::getValue(){
  return value;
}