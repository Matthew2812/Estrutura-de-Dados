#ifndef MONOMIO_H
#define MONOMIO_H

class Monomio{
  private:
    int c, e;
  public:
    Monomio(int vc, int ve);
    ~Monomio();
    Monomio();
    int getC();
    int getE();
};

#endif