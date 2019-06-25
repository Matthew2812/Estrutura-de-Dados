#include <iostream>
#include <math.h>
#include "polinomio.h"

Polinomio::Polinomio():ListaDuplamenteLigada<Monomio>(){}

void Polinomio::mostra(){
  Dno<Monomio> *aux = cabeca;
  if (vazia())
    std::cout << "Vazio" << std::endl;
  else{
    while (aux->prox != NULL){
      std::cout << aux->elem.getC() << "x^" << aux->elem.getE() << " + ";
      aux = aux->prox;
    }
    std::cout << aux->elem.getC() << "x^" << aux->elem.getE() << std::endl;
  }
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

void Polinomio::remove(int c, int e){
  Dno<Monomio>* i = cabeca;
  while (i != NULL){
    if (i->elem.getC() == c && i->elem.getE() == e){
      if (i == cabeca){
        removeInicio();
        std::cout << "\nMonômio deletado" << std::endl;
        return;
      }
      else if (i == f){
        removeFinal();
        std::cout << "\nMonômio deletado" << std::endl;
        return;
      }
      else{
        Dno<Monomio>* aux1 = i;
        Dno<Monomio>* aux2 = i->prev;
        i = i->prox;
        i->prev = aux2;
        aux2->prox = i;
        delete aux1;
        std::cout << "\nMonômio deletado" << std::endl;
        return;
      }
    }
    i = i->prox;
  }
  std::cout << std::endl;
  std::cout << "Este monômio não existe" << std::endl;
}