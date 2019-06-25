#include <iostream>
#include "lista_duplamente_ligada.h"

template <class E>
ListaDuplamenteLigada<E>::ListaDuplamenteLigada(){
  cabeca = f = NULL;
}

template <class E>
ListaDuplamenteLigada<E>::~ListaDuplamenteLigada(){
  delete cabeca;
}

template <class E>
bool ListaDuplamenteLigada<E>::vazia() const{
  return (cabeca == NULL);
}

template <class E>
const E& ListaDuplamenteLigada<E>::inicio() const{
   return cabeca->elem;
}

template <class E>
const E& ListaDuplamenteLigada<E>::fim() const{
  return f->elem;
}

template <class E>
void ListaDuplamenteLigada<E>::insereInicio(const E& e){
   Dno<E> *novo = new Dno<E>();
   novo->prev = NULL;
   novo->elem = e;
   if (vazia()){
     novo->prox = NULL;
     cabeca = f = novo;
   }
   else{
     novo->prox = cabeca;
     cabeca->prev = novo;
     cabeca = novo;
   }
}

template <class E>
void ListaDuplamenteLigada<E>::insereFinal(const E& e){
  Dno<E> *novo = new Dno<E>();
   novo->prox = NULL;
   novo->elem = e;
   if (vazia()){
     novo->prev = NULL;
     cabeca = f = novo;
   }
   else{
     novo->prev = f;
     f->prox = novo;
     f = novo;
   }
}

template <class E>
void ListaDuplamenteLigada<E>::removeInicio(){
  if (cabeca == f){
    delete cabeca;
    cabeca = f = NULL;
  }
  else{
    Dno<E>* aux = cabeca;
    cabeca = cabeca->prox;
    cabeca->prev = NULL;
    delete aux;
  }
}

template <class E>
void ListaDuplamenteLigada<E>::removeFinal(){
  if (cabeca == f){
    delete f;
    cabeca = f = NULL;
  }
  else{
    Dno<E>* aux = f;
    f = f->prev;
    f->prox = NULL;
    delete aux;
  }
}

template <class E>
void ListaDuplamenteLigada<E>::imprime() const{
  Dno<E> *aux = cabeca;
  while (aux != NULL){
    std::cout << aux->elem << ' ';
    aux = aux->prox;
  }
  std::cout << std::endl;
}

template <class E>
void ListaDuplamenteLigada<E>::inverte() const{
  Dno<E> *i = cabeca;
  Dno<E> *j = f;
  ListaDuplamenteLigada<E> aux;
  while (i != j || i->prox != j){
    aux.insereInicio(i->elem);
    aux.insereFinal(j->elem);
    i = i->prox;
    j = j->prev;
    removeInicio();
    removeFinal();
  }
  cabeca = aux.getCabeca();
  f = aux.getFim();
}

template <class E>
Dno<E>* ListaDuplamenteLigada<E>::getCabeca(){
  return cabeca;
}

template <class E>
Dno<E>* ListaDuplamenteLigada<E>::getFim(){
  return f;
}