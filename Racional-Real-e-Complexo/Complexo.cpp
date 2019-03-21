#include <iostream>
#include "Complexo.h"

Complexo::Complexo(double vr, double vi, char sinalReal, char sinalImag){
	r = vr;
  i = vi;
  if (sinalReal == '-')
    r = -r;
  else if (sinalImag == '-')
    i = -i;
}

Complexo Complexo::operator+(Complexo c){
  double cr = r + c.getR();
  double ci = i + c.getI();
  Complexo soma(std::abs(cr), std::abs(ci), cr<0?'-':'+', ci<0?'-':'+');
	return soma;
}

Complexo Complexo::operator-(Complexo c){
	double cr = r - c.getR();
  double ci = i - c.getI();
  Complexo subt(std::abs(cr), std::abs(ci), cr<0?'-':'+', ci<0?'-':'+');
	return subt;
}

Complexo Complexo::operator*(Complexo c){
  double cr = r*c.getR() - i*c.getI();
  double ci = r*c.getI() + i*c.getR();
	Complexo mult(std::abs(cr), std::abs(ci), cr<0?'-':'+', ci<0?'-':'+'); 
  return mult;
}

double Complexo::getR(){
	return r;
}

double Complexo::getI(){
	return i;
}