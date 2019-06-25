#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H
#include "no.h"

template <class E>
class ListaLigada{
  private:
    No<E> * cabeca; // inicio da lista ligada (head)
  public:
    ListaLigada();
    ~ListaLigada();
    bool vazia() const;
    const E& inicio() const;
    const E& fim() const;
    void insereInicio(const E& e);
    void insereFinal (const E& e);
    void removeInicio();
    void removeFinal();
    void imprime() const;
    void inverte();
    No<E>* getCabeca();
};

#endif