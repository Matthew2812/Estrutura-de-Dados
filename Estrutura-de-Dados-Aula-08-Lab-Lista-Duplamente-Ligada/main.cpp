#include <iostream>
#include "polinomio.h"

int main() {
  int op, expo, coef;
  double x;
  bool controle = true;
  Polinomio p;
  while(controle){
    std::cout << std::endl;
    std::cout << "0 - sair" << std::endl;
    std::cout << "1 - inserir um monômio (expoente e coeficiente)" << std::endl;
    std::cout << "2 - remover um monômio (expoente e coeficiente)" << std::endl;
    std::cout << "3 - cálcula o polinômio" << std::endl;
    std::cout << "4 - imprimir o polinômio" << std::endl;
    std::cin >> op;
    switch (op){
      case 0:
      {
        controle = false;
        break;
      }
      case 1:
      {
        std::cout << std::endl;
        std::cout << "Digite o expoente: " << std::endl;
        std::cin >> expo;
        std::cout << "Digite o coeficiente" << std::endl;
        std::cin >> coef;
        Monomio m(coef, expo);
        p.insereInicio(m);
        break;
      }
      case 2:
      {
        std::cout << std::endl;
        std::cout << "Digite o expoente: " << std::endl;
        std::cin >> expo;
        std::cout << "Digite o coeficiente" << std::endl;
        std::cin >> coef;
        Monomio m(coef, expo);
        p.remove(coef, expo);
        break;
      }
      case 3:
      {
        std::cout << std::endl;
        std::cout << "Digite o valor de X: " << std::endl;
        std::cin >> x;
        std:: cout << "Resultado: " << p.calcula(x) << std::endl;
        break;
      }
      case 4:
      {
        std::cout << std::endl;
        std::cout << "Polinômio:" << std::endl;
        p.mostra();
        break;
      }
    }
  }
}