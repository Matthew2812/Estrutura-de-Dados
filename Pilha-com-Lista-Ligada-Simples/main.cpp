#include <iostream>
#include "pilha.cpp"

int main() {
  Pilha<int> p;
  p.empilha(4);
  std::cout << "Topo: " << p.topo() << std::endl;
  p.empilha(5);
  std::cout << "Topo: " << p.topo() << std::endl;
  p.desempilha();
  std::cout << "Topo: " << p.topo() << std::endl;
  std::cout << "Vazia: " << p.vazia();
}