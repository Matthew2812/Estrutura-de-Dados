#ifndef VETOR_H
#define VETOR_H
#include <iostream>

template <typename T>
class Vetor{
  private:
    T *v; //Vetor de elementos do tipo T
    int tam; //Tamanho do Vetor

  public:
    Vetor(int t);
    ~Vetor();
    int tamanho();
    T elemento(int i);
    bool procura(T elem);
    void insere(int i, int elemento);
    void remove(int i);
    void agrupamento(Vetor vet);
};

#endif