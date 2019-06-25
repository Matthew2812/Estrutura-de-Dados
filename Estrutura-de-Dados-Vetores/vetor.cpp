#include "vetor.h"

template <class T>
Vetor<T>::Vetor(int t){
  v = new T[t]; //Aloca dinamicamente o vetor
  if (v == NULL)
    throw new std::string ("MemÃ³ria insuficiente");
  tam = t;
}

template <class T>
Vetor<T>::~Vetor(){
  delete v; //Remove a alocaÃ§Ã£o dinÃ¢mica da memÃ³ria
}

template <class T>
int Vetor<T>::tamanho(){
  return tam;
}

template <class T>
T Vetor<T>::elemento(int i){
  if (i < 0 || i >= tam)
    throw new std::string ("Fora dos limites do vetor");
  return v[i];
}

template <class T>
bool Vetor<T>::procura(T elem){
  for (int i = 0; i < tam; i++){
    if (elem == v[i])
      return true;
  }
  return false;
}

template <class T>
T &Vetor<T>::operator[](int i){
  if (i < 0 || i>=tam)
    throw new std::string ("Fora dos limites do vetor");
  return v[i];
}

template <class T>
void Vetor<T>::remove(int i){
  if (i < 0 || i>=tam)
    throw new std::string ("Fora dos limites do vetor");
  for (int j = i; j < tam - 1; j++)
    v[j] = v[j+1];
  v[tam - 1] = NULL;
}