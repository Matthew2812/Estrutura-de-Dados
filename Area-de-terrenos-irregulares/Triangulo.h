#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
  private:
    double la, lb, lc;
  public:
    Triangulo(double lx, double ly, double lz);
    ~Triangulo();
    double operator+(Triangulo n);
    double areaTriangulo();
};

#endif