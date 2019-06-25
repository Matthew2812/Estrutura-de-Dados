#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H
#include "dno.h"

class Polinomio;

template <class E>
class ListaDuplamenteLigada{
  private:
    Dno<E> *cabeca; // inicio da lista ligada (head)
    Dno<E> *f;
  public:
    ListaDuplamenteLigada();
    ~ListaDuplamenteLigada();
    bool vazia() const;
    const E& inicio() const;
    const E& fim() const;
    void insereInicio(const E& e);
    void insereFinal (const E& e);
    void removeInicio();
    void removeFinal();
    void imprime() const;
    void inverte() const;
    Dno<E>* getCabeca();
    Dno<E>* getFim();
    friend class Polinomio;
};

#endif