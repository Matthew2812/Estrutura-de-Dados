#include <iostream>
#include "lista_ligada.cpp"
//Fiz com o Luiz Tagliaferro e o Edison

int main() {
  //Criando a Lista ligada
  ListaLigada<int> lista;
  //Inserindo três valores no Inicio e Imprimindo a lista
  lista.insereInicio(4);
  lista.insereInicio(5);
  lista.insereInicio(7);
  lista.imprime();
  //Inserindo três valores no Final e Imprimindo a lista
  lista.insereFinal(6);
  lista.insereFinal(8);
  lista.insereFinal(2);
  lista.imprime();
  //Invertendo e Imprimindo a lista
  lista.inverte();
  lista.imprime();
  //Removendo do Inicio e do Final da lista
  lista.removeInicio();
  lista.removeFinal();
  lista.imprime();
  //Imprimindo o inicio e o final da lista
  std::cout << lista.inicio() << std::endl;
  std::cout << lista.fim() << std::endl;
}
