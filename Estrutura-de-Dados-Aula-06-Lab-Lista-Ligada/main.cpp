#include <iostream>
#include "polinomio.h"

int main() {
  Polinomio p;
  Monomio a(5, 2);
  Monomio b(2, 3);
  Monomio c(4, 5);
  p.insereInicio(a);
  p.insereInicio(b);
  p.insereInicio(c);
  p.mostra();
  std::cout << "Resultado do Polinômio: " << p.calcula(3) << std::endl;
}