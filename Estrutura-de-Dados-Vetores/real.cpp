#include "real.h"
#include <stdlib.h>

Real::Real(double v){
  value = v;
}

Real::~Real(){}

Real::Real(){}

double Real::getValue(){
  return value;
}