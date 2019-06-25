#include "complexo.h"

Complexo::Complexo(double vr, double vi){
  r = vr;
  i = vi;
}

Complexo::~Complexo(){}

Complexo::Complexo(){}

double Complexo::getR(){
  return r;
}

double Complexo::getI(){
  return i;
}