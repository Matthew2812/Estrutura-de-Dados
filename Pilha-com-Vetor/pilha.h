#ifndef PILHA_h
#define PILHA_h
#include <iostream>
#include "vetor.cpp"

template <typename T>
class Pilha{
  private:
    Vetor<T> *p;
    int tam;

  public:
    Pilha(int t);
    ~Pilha();
    bool vazia();
    void empilha(const T& e);
    const T topo () const;
    void desempilha();
};

#endif