#include <iostream>
#include "Natural.h"

int main(){
  //Objetos Naturais, Inteiros e Racionais
  Natural n(3);
  Natural m(4);
  Inteiro i(5, '+');
  Inteiro j(2, '+');
  Racional a(4, 3, '+');
  Racional b(3, 4, '+');

  //Axioma Soma Racional com Naturais
  Racional res1 = n + m;
  Racional res2(n.getA()+m.getA(), n.getB(), n.getA()<0?'-':'+');
  if (res1.getA() == res2.getA() || res1.getB() == res2.getB())
    std::cout << "SOMA OK" << std::endl;

  //Axioma Subtração Racional com Inteiros
  res1 = i - j;
  Racional res3(i.getA()-j.getA(), i.getB(), i.getA()<0?'-':'+');
  if (res1.getA() == res3.getA() || res1.getB() == res3.getB())
    std::cout << "SUBTRAÇÃO OK" << std::endl;

  //Axioma Multiplicação Racional com Racionais
  res1 = a * b;
  if (res1.getA()/res1.getB() == 1)
    std::cout << "MULTIPLICAÇÃO OK" << std::endl;

  //Axioma Divisão Racional com Racionais
  res1 = a/a;
  if (res1.getA()/res1.getB() == 1)
    std::cout << "DIVISÃO OK" << std::endl;
}