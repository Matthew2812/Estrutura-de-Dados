#include "Triangulo.h"
#include <math.h>

Triangulo::Triangulo(double lx, double ly, double lz){
  la = lx;
  lb = ly;
  lc = lz;
}

Triangulo::~Triangulo(){}

double Triangulo::areaTriangulo(){
  double p = (la + lb + lc)/2;
  double area = sqrt(p*(p-la)*(p-lb)*(p-lc));
  return area;
}

double Triangulo::operator+(Triangulo n){
  double soma = n.areaTriangulo() + areaTriangulo();
  return soma;
}