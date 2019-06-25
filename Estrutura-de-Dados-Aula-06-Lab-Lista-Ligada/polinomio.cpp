#include <iostream>
#include <math.h>
#include "polinomio.h"

Polinomio::Polinomio():ListaLigada<Monomio>(){}

void Polinomio::mostra(){
  No<Monomio> *aux = cabeca;
  while (aux->prox != NULL){
    std::cout << aux->elem.getC() << 'x' << '^' << aux->elem.getE() << " + ";
    aux = aux->prox;
  }
  std::cout << aux->elem.getC() << 'x' << '^' << aux->elem.getE();
  std::cout << std::endl;
}

double Polinomio::calcula(double k){
  No<Monomio> *aux = cabeca;
  double soma = 0;
  while (aux != NULL){
    soma += pow(k, aux->elem.getE()) * aux->elem.getC();
    aux = aux->prox;
  }
  return soma;
}