#include "Inteiro.h"

Inteiro::Inteiro(unsigned int v, char sinal):Racional(v, 1, sinal){}

Inteiro::~Inteiro(){}

int Inteiro::getValue(){ 
	return getA();
}

Inteiro Inteiro::suc(){ 
	int v = getA() +1; 
	Inteiro n(abs(v), v<0?'-':'+');
  return n;
}

Inteiro Inteiro::pred(){ 
	int v = getA() -1; 
	Inteiro n(abs(v), v<0?'-':'+');
  return n;
}