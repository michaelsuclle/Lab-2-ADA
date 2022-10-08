#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Nodo {
  public:
  int valor;
  Nodo* siguiente;
  //Nodo *anterior;

};

// cree una lista para reutilizarla en la pregunta 4
class Lista {
  public:
  Nodo* inicio;
  Nodo* final;
  Lista(Nodo* nodito){
    inicio = nodito;
    nodito->siguiente = nullptr;
    //final = nodito;
    cout << "lista creada\n";
  }
  void push (Nodo* nodito){
    nodito->siguiente = inicio;
    //*inicio.anterior = nodito;
    inicio = nodito;
  } 
  int pop (){
    Nodo* temponodo = inicio;
    inicio = inicio->siguiente;
    cout << "pop: " << temponodo->valor << "\n";
    return temponodo->valor;
  }
  void add(int valor){
    Nodo* temponodo = new Nodo();
    temponodo->valor = valor;
    push(temponodo);
    cout << "push: " << valor <<"\n";
  }
  void imprimir(){
    Nodo* nodoiterador = inicio;
    cout << "los elementos son: ";
    while(true){
      cout << nodoiterador->valor << " ";
      if (nodoiterador->siguiente == nullptr) {
        break;
      }
      nodoiterador = nodoiterador->siguiente;
    }
    cout << "\n";
  }
};



int main() { 
  Nodo* amigo = new Nodo();
  amigo->valor = 5;
  Lista Pila(amigo);
  Pila.add(6);
  Pila.add(7);
  Pila.pop();
  Pila.add(8);
  Pila.add(9);
  Pila.add(10);
  Pila.imprimir();
  return 0; 
}