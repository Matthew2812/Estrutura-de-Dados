#include "natural.h"
#include <stdlib.h>

Natural::Natural(int v){
  value = v;
}

Natural::~Natural(){}

Natural::Natural(){}

unsigned int Natural::getValue(){
  return value;
}