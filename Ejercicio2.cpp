
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


void imprimirContadoresdeVocales(string stringcadenaoriginal);

int main (){

  string stringcadenaoriginal;


  cout << "B?Cuantos nC:meros tendra tu array?: ";
  cin >> stringcadenaoriginal;
  imprimirContadoresdeVocales(stringcadenaoriginal);
  return 0;
}

  void imprimirContadoresdeVocales(string stringcadenaoriginal){
    int a = 0, e = 0, i = 0, o = 0, u = 0;

        for (int j = 0; j < stringcadenaoriginal.length(); j++) {
            if(stringcadenaoriginal[j] == 'a'){
                a++;
            }else if(stringcadenaoriginal[j] == 'e'){
                e++;
            }else if(stringcadenaoriginal[j] == 'i'){
                i++;
            }else if(stringcadenaoriginal[j] == 'o'){
                o++;
            }else if(stringcadenaoriginal[j] == 'u'){
                u++;
            }
            /* code */
        }
        cout << "El resultado del conteo de vocales finaliza con: \n";
        cout << "a: " << a << "\n";
        cout << "e: " << e << "\n";
        cout << "i: " << i << "\n";
        cout << "o: " << o << "\n";
        cout << "u: " << u << "\n";
  }

