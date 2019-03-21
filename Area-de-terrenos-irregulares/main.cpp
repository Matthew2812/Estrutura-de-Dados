
#include <iostream>
#include <cstdlib>
#include "Triangulo.h"


int main() {
  int i = 0;
  double soma;
  double vet[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,};
  while (true){
    int op;
    std::cout << "\nOpção 0: Sair" << std::endl;
    std::cout << "Opção 1: Lados do Triângulo" << std::endl;
    std::cout << "Opção 2: Área total" << std::endl;
    std::cin >> op;
    if (op == 0)
      break;
    else if (op == 1){
      if (i == 10){
        std::cout << "Valor de triângulos maior que vetor" << std::endl;
        break;
      }
      else {
        double la, lb, lc;
        std::cout << "Lado 1: ";
        std::cin >> la;
        std::cout << "Lado 2: ";
        std::cin >> lb;
        std::cout << "Lado 3: ";
        std::cin >> lc;
        Triangulo t(la, lb, lc);
        vet[i] = t.areaTriangulo();
        std::cout << "Área do Triângulo: " << vet[i] << std::endl;
        i++;
      }
    }
    else if (op == 2){
      int j;
      soma = 0;
      for (j = 0; j < 10; j++){
        if (vet[j] == -1)
          break;        
        soma += vet[j];
      }
      std::cout << "\nÁrea total dos Triângulos: " << soma << std::endl;
    }
  }
  std::cout << "Saindo do programa" << std::endl;
  return 0;
}