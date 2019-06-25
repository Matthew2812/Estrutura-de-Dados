#ifndef POLINOMIO_H
#define POLINOMIO_H
#include "lista_ligada.cpp"
#include "monomio.h"

class Polinomio:public ListaLigada<Monomio>{
  public:
    Polinomio();
    void mostra();
    double calcula(double k);
};

#endif