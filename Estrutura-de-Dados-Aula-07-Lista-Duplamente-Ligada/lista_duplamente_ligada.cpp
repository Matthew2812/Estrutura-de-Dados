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
void ListaDuplamenteLigada<E>::inverte(){
  Dno<E> *i = cabeca;
  Dno<E> *j = f;
  E aux;
  while (i != j && j->prox != i){
    aux = i->elem;
    i->elem = j->elem;
    j->elem = aux;
    i = i->prox;
    j = j->prev;
  }
}

template <class E>
void ListaDuplamenteLigada<E>::troca(){
  E aux = cabeca->elem;
  cabeca->elem = f->elem;
  f->elem = aux;
}

template <class E>
void ListaDuplamenteLigada<E>::removeElemento(E e){
  Dno<E>* i = cabeca;
  while (i != NULL){
    if (i->elem == e){
      if (i == cabeca)
        removeInicio();
      else if (i == f)
        removeFinal();
      else{
        Dno<E>* aux1 = i;
        Dno<E>* aux2 = i->prev;
        i = i->prox;
        i->prev = aux2;
        aux2->prox = i;
        delete aux1;
      }
    }
    else
      i = i->prox;
  }
}

template <class E>
void ListaDuplamenteLigada<E>::insereAntes(E elemento, const E& insere){ 
  Dno<E>* i = cabeca->prox;

  if (vazia() || elemento == cabeca->elem)
    insereInicio(insere);

  while (i != NULL){
    if (i->elem == elemento){
      Dno<E>* novo = new Dno<E>();
      novo->elem = insere;
      Dno<E>* aux = i->prev;
      novo->prev = aux;
      novo->prox = i;
      aux->prox = novo;
      i->prev = novo;
    }
    i = i->prox;
  }
}

template <class E>
void ListaDuplamenteLigada<E>::insereDepois(E elemento, const E& insere){
  Dno<E>* i = f->prev;

  if (vazia() || elemento == f->elem)
    insereFinal(insere);

  while (i != NULL){
    if (i->elem == elemento){
      Dno<E>* novo = new Dno<E>();
      novo->elem = insere;
      Dno<E>* aux = i->prox;
      novo->prox = aux;
      novo->prev = i;
      aux->prev = novo;
      i->prox = novo;
    }
    i = i->prev;
  }
}