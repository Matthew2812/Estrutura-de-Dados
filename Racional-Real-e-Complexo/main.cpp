#include <iostream>
#include "Racional.h"

int main() {
  //Objetos Racionais, Reais e Complexos
  Racional a(3, 2, '+');
  Racional b(2, 5, '+');
  Real x(0.35, '+');
  Real y(0.78, '+');
  Complexo c(3.45, 4.21, '+', '-');
  Complexo d(1.34, 5.57, '-', '+');

  //Soma de Reais em um Complexo
  Complexo soma = y + x;
  char sinal = 0<=soma.getI()? '+':' ';
  std::cout << soma.getR() << sinal << soma.getI() << 'i' << std::endl;

  //Subtração de Reais em um Complexo
  Complexo subt = y - x;
  sinal = 0<=subt.getI()? '+':' ';
  std::cout << subt.getR() << sinal << subt.getI() << 'i' << std::endl;

  //Multiplicação de Reais em um Complexo
}