#ifndef VETOR_H
#define VETOR_H
#include <iostream>

template <class T>
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
    T &operator[](int i);
    void remove(int i);
    T *agrupamento(Vetor vet);
};

#endif