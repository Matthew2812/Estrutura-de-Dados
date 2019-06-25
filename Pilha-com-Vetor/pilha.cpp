#include "pilha.h"

template <typename T>
Pilha<T>::Pilha(int t){
  p = new Vetor<T>(t);
  if (p == NULL)
    throw new std::string ("Memória insuficiente");
  tam = t;
}

template <typename T>
Pilha<T>::~Pilha(){
  delete p;
}

template <typename T>
bool Pilha<T>::vazia(){
  return (p == NULL);
}

template <typename T>
void Pilha<T>::empilha(const T& e){
  if (tam == -1)
    throw new std::string("Pilha Cheia");
  tam--;
  p->insere(tam, e);
}

template <typename T>
const T Pilha<T>::topo() const{
  return p->elemento(tam);
}

template <typename T>
void Pilha<T>::desempilha(){
  p->remove(tam);
}