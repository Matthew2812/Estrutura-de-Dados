#include <iostream>
#include "lista_ligada.h"

template <class E>
ListaLigada<E>::ListaLigada(){
  cabeca = NULL;
}

template <class E>
ListaLigada<E>::~ListaLigada(){
  delete cabeca;
}

template <class E>
bool ListaLigada<E>::vazia() const{
    return (cabeca == NULL);
}

template <class E>
const E& ListaLigada<E>::inicio() const{
   return cabeca->elem;
}

template <class E>
void ListaLigada<E>::insereInicio(const E& e){
   No<E> *novo = new No<E>();
   novo->elem = e;
   novo->prox = cabeca;
   cabeca = novo;
}

template <class E>
void ListaLigada<E>::removeInicio(){
  if (!vazia()){  
    No<E> *aux = cabeca;
    cabeca = cabeca->prox;
    delete aux;
  }   
}

template <class E>
void ListaLigada<E>::insereFinal(const E& e) const{
  No<E> *aux = cabeca;
  while (aux->prox != NULL){
    aux = aux->prox;
  }
  No<E> *novo = new No<E>();
  novo->elem = e;
  novo->prox = NULL;
  aux->prox = novo;
}

template <class E>
void ListaLigada<E>::removeFinal(){
  No<E> *aux = cabeca;
  while (aux->prox->prox != NULL){
    aux = aux->prox;
  }
  delete aux->prox;
  aux->prox = NULL;
}

template <class E>
const E& ListaLigada<E>::fim() const{
  No<E> *aux = cabeca;
  while (aux->prox != NULL)
    aux = aux->prox;
  return aux->elem;
}

template <class E>
void ListaLigada<E>::imprime() const{
  No<E> *aux = cabeca;
  while (aux != NULL){
    std::cout << aux->elem << ' ';
    aux = aux->prox;
  }
  std::cout << std::endl;
}

template <class E>
void ListaLigada<E>::inverte(){
  No<E> *i = cabeca;
  ListaLigada<E> aux;
  while (i != NULL){
    aux.insereInicio(i->elem);
    i = i->prox;
    removeInicio();
  }
  cabeca = aux.getCabeca();
}

template <class E>
No<E>* ListaLigada<E>::getCabeca(){
  return cabeca;
}