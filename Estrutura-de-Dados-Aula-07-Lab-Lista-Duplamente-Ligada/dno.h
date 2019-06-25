#ifndef DNO_H
#define DNO_H

template <class E>
class ListaDuplamenteLigada;

class Polinomio;

template <class E>
class Dno{
    private:
      E elem; // informaÃ§Ã£o do no
      Dno<E>* prox; // prÃ³ximo elemento
      Dno<E>* prev;
      friend class ListaDuplamenteLigada<E>;
      friend class Polinomio;
};

#endif