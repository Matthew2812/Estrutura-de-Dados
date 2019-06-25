#ifndef NO_H
#define NO_H

template <class E>
class ListaLigada;

template <class E>
class No{
    private:
      E elem; // informaÃ§Ã£o do no
      No<E>* prox; // prÃ³ximo elemento
      friend class ListaLigada<E>;
};

#endif