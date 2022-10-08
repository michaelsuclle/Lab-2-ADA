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
class Pila {
  public:
  Nodo* inicio;
  Nodo* final;
  Pila(int valor){//aqui describimos con que valor arrancara nuestra esttructura
    Nodo* nodito = new Nodo();
    nodito->valor = valor;
    inicio = nodito;
    nodito->siguiente = nullptr;
    //final = nodito;
    cout << "lista creada con " << valor << " como arranque\n";
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
  Pila Pila(5);
  Pila.add(6);
  Pila.add(7);
  Pila.pop();
  Pila.add(8);
  Pila.add(9);
  Pila.add(10);
  Pila.imprimir();
  return 0; 
}