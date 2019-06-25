#include "vetor.h"

template <typename T>
Vetor<T>::Vetor(int t){
  v = new T[t]; //Aloca dinamicamente o vetor
  if (v == NULL)
    throw new std::string ("Memória insuficiente");
  tam = t;
}

template <typename T>
Vetor<T>::~Vetor(){
  delete v; //Remove a alocação dinâmica da memória
}

template <typename T>
int Vetor<T>::tamanho(){
  return tam;
}

template <typename T>
T Vetor<T>::elemento(int i){
  if (i < 0 || i >= tam)
    throw new std::string ("Fora dos limites do vetor");
  return v[i];
}

template <typename T>
bool Vetor<T>::procura(T elem){
  for (int i = 0; i < tam; i++){
    if (elem == v[i])
      return true;
  }
  return false;
}

template <typename T>
void Vetor<T>::insere(int i, int elemento){
  if (i < 0 || i >= tam)
    throw new std::string ("Fora dos limites do vetor");
  v[i] = elemento;
}

template <typename T>
void Vetor<T>::remove(int i){
  if (i < 0 || i >= tam)
    throw new std::string ("Fora dos limites do vetor");
  for (int j = i; j < tam - 1; j++)
    v[j] = v[j+1];
  v[tam - 1] = 0;
}

template <typename T>
void Vetor<T>::agrupamento(Vetor<T> vet){
  int c = 0;
  int tamanho = tam + vet.tamanho();
  Vetor<T> aux(tamanho);

  for (int i = 0; i < tam; i++){
    aux.insere(i, elemento(i));
    c++;
  }

  for (int j = 0; j < vet.tamanho(); j++){
    aux.insere(c, vet.elemento(j));
    c++;
  }
    
  delete v;
  v = new T[tamanho];
  tam = tamanho;

  for (int k = 0; k < tamanho; k++){
    insere(k, aux.elemento(k));
  }
}