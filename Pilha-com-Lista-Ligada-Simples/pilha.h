#ifndef PILHA_h
#define PILHA_h
#include <iostream>
#include "lista_ligada.cpp"

template <typename T>
class Pilha{
  private:
    ListaLigada<T> *p;

  public:
    Pilha();
    ~Pilha();
    bool vazia();
    void empilha(const T& e);
    const T topo () const;
    void desempilha();
};

#endif