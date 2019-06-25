#include "monomio.h"

Monomio::Monomio(int vc, int ve){
  c = vc;
  e = ve;
}

Monomio::~Monomio(){}

Monomio::Monomio(){}

int Monomio::getC(){
  return c;
}

int Monomio::getE(){
  return e;
}