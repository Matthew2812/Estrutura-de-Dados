#include <iostream>
#include "polinomio.h"

int main() {
  Monomio a(3, 5);
  Monomio b(4, 2);
  Monomio c(4, 3);
  Monomio d(5, 4);
  Monomio e(10, 2);
  Monomio f(23, 3);
  Polinomio p;
  p.insereInicio(a);
  p.insereInicio(b);
  p.insereInicio(c);
  p.insereInicio(d);
  p.insereInicio(e);
  p.insereInicio(f);
  p.mostra();
  std::cout << p.calcula(2) << std::endl;
}