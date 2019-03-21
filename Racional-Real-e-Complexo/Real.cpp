#include "Real.h"

Real::Real(double c, char sinal):Complexo(c, 0, sinal, '+'){}

Real::~Real(){}

double Real::getValue(){
  return getR();
}