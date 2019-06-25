#include <iostream>
#include "pilha.cpp"

int main() 
{
  Pilha<int> pilha(5);
  pilha.empilha(2);
  pilha.empilha(3);
  std::cout << "Topo: " << pilha.topo() << std::endl;
  pilha.desempilha();
  std::cout << "Topo: " << pilha.topo() << std::endl;
}