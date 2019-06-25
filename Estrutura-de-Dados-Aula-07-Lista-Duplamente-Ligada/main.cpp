#include <iostream>
#include "lista_duplamente_ligada.cpp"

int main() {
  ListaDuplamenteLigada<int> lista;
  lista.insereInicio(2);
  lista.insereFinal(4);
  lista.imprime();
  lista.insereAntes(2, 3);
  lista.imprime();
  lista.insereDepois(4, 5);
  lista.imprime();
  lista.inverte();
  lista.imprime();
}