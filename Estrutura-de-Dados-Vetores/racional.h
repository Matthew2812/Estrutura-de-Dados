#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{ 
private: 
  int a,b;
 public:
  Racional(int va, int vb);
  ~Racional();
  Racional();
  int getA();
  int getB();
};

#endif