#include "Racional.h"

Racional::Racional(int v, int x, char sinal){
  a = v;
  b = x;
  if (sinal == '-')
    a = -a;
}

Racional::~Racional(){}

unsigned int Racional::getA(){
  return a;
}

unsigned int Racional::getB(){
  return b;
}

Racional Racional::operator+(Racional n){
  int v, x;
  if (b == n.getB()){
    v = a + n.getA();
    x = b;
  } else{
    v = a*n.getB() + b*n.getA();
    x = b*n.getB();
  }
  Racional soma(std::abs(v), std::abs(x), (v/x)<0?'-':'+');
  return soma; 
}

Racional Racional::operator-(Racional n){
 int v, x;
  if (b == n.getB()){
    v = a - n.getA();
    x = b;
  } else{
    v = a*n.getB() - b*n.getA();
    x = b*n.getB();
  }
  Racional subt(std::abs(v), std::abs(x), (v/x)<0?'-':'+');
  return subt; 
}

Racional Racional::operator*(Racional n){
  int v = a*n.getA();
  int x = b*n.getB();
  Racional mult(std::abs(v), std::abs(x), (v/x)<0?'-':'+');
  return mult;
}

Racional Racional::operator/(Racional n){
  int v = a*n.getB();
  int x = b*n.getA();
  Racional div(std::abs(v), std::abs(x), (v/x)<0?'-':'+');
  return div;
}