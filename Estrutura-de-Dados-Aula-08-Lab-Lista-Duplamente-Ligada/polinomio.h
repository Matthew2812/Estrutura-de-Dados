#ifndef POLINOMIO_H
#define POLINOMIO_H
#include "lista_duplamente_ligada.cpp"
#include "monomio.h"

class Polinomio:public ListaDuplamenteLigada<Monomio>{
  public:
    Polinomio();
    void mostra();
    double calcula(double k);
    void remove(int c, int e);
};

#endif