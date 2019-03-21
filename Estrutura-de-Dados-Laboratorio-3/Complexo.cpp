#include <iostream>
#include "Complexo.h"

Complexo::Complexo(double vr, double vi){
	r = vr;
  i = vi;
}

Complexo Complexo::operator+(Complexo c){
  Complexo soma(r + c.getR(), i + c.getI());
	return soma;
}

Complexo Complexo::operator-(Complexo c){
	Complexo soma(r - c.getR(), i - c.getI());
	return soma;
}

Complexo Complexo::operator*(Complexo c){
	Complexo mult((r*c.getR()) - (i*c.getI()), (r*c.getI()) + (i*c.getR())); 
  return mult;
}

double Complexo::getR(){
	return r;
}

double Complexo::getI(){
	return i;
}