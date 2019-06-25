#include <iostream>
#include "vetor.cpp"

int main() 
{
  //Criando os vetores;
  Vetor<int> a(5);
  Vetor<int> b(4);

  //Preenchendo o Vetor A
  for (int i = 0; i < 5; i++)
    a.insere(i, i+1);
  
  //Preenchendo o Vetor B
  for (int i = 0; i < 4; i++)
    b.insere(i, i+20);

  //Imprimindo Vetor A
  std::cout << "Vetor A:" << std::endl;
  std::cout << "[";
  for (int i = 0; i < 5; i++)
    std::cout << a.elemento(i) << " ";
  std::cout << "]" << std::endl;

  //Imprimindo Vetor B
  std::cout << "\nVetor B:" << std::endl;
  std::cout << "[";
  for (int i = 0; i < b.tamanho(); i++)
    std::cout << b.elemento(i) << " ";
  std::cout << "]" << std::endl; 

  //Fazendo agrupamento de A e B em A
  a.agrupamento(b);

  //Imprimindo o agrupamento de A e B
  std::cout << "\nVetor A e B agrupados:" << std::endl;
  std::cout << "[";
  for (int i = 0; i < a.tamanho(); i++)
    std::cout << a.elemento(i) << " ";
  std::cout << "]" << std::endl;
}