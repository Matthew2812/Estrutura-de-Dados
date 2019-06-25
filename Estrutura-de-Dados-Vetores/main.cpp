#include <iostream>
#include "natural.h"
#include "inteiro.h"
#include "racional.h"
#include "real.h"
#include "complexo.h"
#include "vetor.cpp"

int main() 
{
  //Criando Vetor Natural de 3 posiÃ§Ãµes
  Vetor<Natural> vet_nat(3);
  Natural n(3);
  vet_nat[0] = n;
  n = 5;
  vet_nat[1] = n;
  n = 7;
  vet_nat[2] = n;

  //Imprimindo o Vetor Natural
  std::cout << "Natural[0]: " << vet_nat.elemento(0).getValue() << std::endl;
  std::cout << "Natural[1]: " << vet_nat.elemento(1).getValue() << std::endl;
  std::cout << "Natural[2]: " << vet_nat.elemento(2).getValue() << std::endl;


  //Criando Vetor Inteiro de 3 posiÃ§Ãµes
  Vetor<Inteiro> vet_int(3);

  //Alocando valores em cada posiÃ§Ã£o do vetor
  Inteiro i(2);
  vet_int[0] = i;
  i = -3;
  vet_int[1] = i;
  i = 0;
  vet_int[2] = i;

  //Imprimindo o Vetor Inteiro 
  std::cout << "\nInteiro[0]: " << vet_int.elemento(0).getValue() << std::endl;
  std::cout << "Inteiro[1]: " << vet_int.elemento(1).getValue() << std::endl;
  std::cout << "Inteiro[2]: " << vet_int.elemento(2).getValue() << std::endl;


  //Criando Vetor Racional de 3 posiÃ§Ãµes
  Vetor<Racional> vet_rac(3);

  //Alocando valores em cada posiÃ§Ã£o do vetor
  Racional qa(6,4), qb(3,2), qc(5,7);
  vet_rac[0] = qa;
  vet_rac[1] = qb;
  vet_rac[2] = qc;

  //Imprimindo o Vetor Racional
  std::cout << "\nRacional[0]: " << vet_rac.elemento(0).getA() << "/" << vet_rac.elemento(0).getB() << std::endl; 
  std::cout << "Racional[1]: " << vet_rac.elemento(1).getA() << "/" << vet_rac.elemento(1).getB() << std::endl; 
  std::cout << "Racional[2]: " << vet_rac.elemento(2).getA() << "/" << vet_rac.elemento(2).getB() << std::endl; 


  //Criando Vetor Real de 3 posiÃ§Ãµes
  Vetor<Real> vet_real(3);

  //Alocando valore em cada posiÃ§Ã£o do vetor
  Real r(6.47);
  vet_real[0] = r;
  r = 5.223;
  vet_real[1] = r;
  r = -3.5448;
  vet_real[2] = r;

  //Imprimindo o Vetor Real
  std::cout << "\nReal[0]: " << vet_real.elemento(0).getValue() << std::endl;
  std::cout << "Real[1]: " << vet_real.elemento(1).getValue() << std::endl;
  std::cout << "Real[2]: " << vet_real.elemento(2).getValue() << std::endl;


  //Criando Vetor Complexo de 3 posiÃ§Ãµes
  Vetor<Complexo> vet_comp(3);

  //Alocando valores em cada posiÃ§Ã£o do Vetor
  Complexo ca(5, 3), cb(2.231, 1.457), cc(-7, 4);
  vet_comp[0] = ca;
  vet_comp[1] = cb;
  vet_comp[2] = cc;

  //Imprimindo o Vetor Complexo
  std::cout << "\nComplexo[0]: " << vet_comp.elemento(0).getR() << " + " << vet_comp.elemento(0).getI() << 'i' << std::endl;
  std::cout << "Complexo[1]: " << vet_comp.elemento(1).getR() << " + " << vet_comp.elemento(1).getI() << 'i' << std::endl;
  std::cout << "Complexo[2]: " << vet_comp.elemento(2).getR() << " + " << vet_comp.elemento(2).getI() << 'i' << std::endl;
}