#include <iostream>
#include "Racional.h"

int main() {
  Complexo a(3, 4);
  Racional d(5, 2);

  Complexo x = a + d;
  std::cout << "Complexo: " << x.getR() << '+' << x.getI() << 'i' << std::endl;
}