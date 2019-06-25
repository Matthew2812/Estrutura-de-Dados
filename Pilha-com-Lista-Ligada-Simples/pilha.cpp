#include "pilha.h"

template <typename T>
Pilha<T>::Pilha(){
  p = new ListaLigada<T>();
  if (p == NULL)
    throw new std::string ("Memória insuficiente");
}

template <typename T>
Pilha<T>::~Pilha(){
  delete p;
}

template <typename T>
bool Pilha<T>::vazia(){
  return p->vazia();
}

template <typename T>
void Pilha<T>::empilha(const T& e){
  p->insereInicio(e);
}

template <typename T>
const T Pilha<T>::topo() const{
  return p->inicio();
}

template <typename T>
void Pilha<T>::desempilha(){
  p->removeInicio();
}