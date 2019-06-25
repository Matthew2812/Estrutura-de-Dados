#include <iostream>
#include <math.h>
#include "polinomio.h"

Polinomio::Polinomio():ListaDuplamenteLigada<Monomio>(){}

void Polinomio::mostra(){
  Dno<Monomio> *aux = cabeca;
  while (aux->prox != NULL){
    std::cout << aux->elem.getC() << "x^" << aux->elem.getE() << " + ";
    aux = aux->prox;
  }
  std::cout << aux->elem.getC() << "x^" << aux->elem.getE() << std::endl;
}

double Polinomio::calcula(double k){
  Dno<Monomio> *i = cabeca;
  Dno<Monomio> *j = f;
  double soma = 0;
  while (i != j && i != j->prox){
    soma += pow(k, i->elem.getE()) * i->elem.getC();
    i = i->prox;
    soma += pow(k, j->elem.getE()) * j->elem.getC();
    j = j->prev;
  }
  if (i == j)
    soma += pow(k, i->elem.getE()) * i->elem.getC();
    
  return soma;
}