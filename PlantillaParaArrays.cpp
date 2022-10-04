
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int obtenerNumeroPositivo ();
void rellenarArreglo (int *arrintdenumeros, int inttamano);
void imprimirArreglo (int *arrintdenumeros, int inttamano);
void impresordeImparesyRutas (int *arrintdenumeros, int inttamano);

int
main ()
{

  int intcantdenum;


  cout << "B?Cuantos nC:meros tendra tu array?: ";
  intcantdenum = obtenerNumeroPositivo ();
  int arrintdenumeros[intcantdenum];
  rellenarArreglo (arrintdenumeros, intcantdenum);
  cout << "Tu array es:  ";
  imprimirArreglo (arrintdenumeros, intcantdenum);
  cout << "Los nC:meros impares son:  ";
  impresordeImparesyRutas (arrintdenumeros, intcantdenum);
  return 0;
}

int
obtenerNumeroPositivo ()
{
  int intcantdenum;
  do
    {
      cin >> intcantdenum;	// Asignamos un valor a  la variable cantidad de numeros
      cout << "has introducido " << intcantdenum << "\n";
    }
  while (intcantdenum < 0);

  return intcantdenum;
}

void
rellenarArreglo (int *arrintdenumeros, int inttamano)
{
  int numerotemporal;
  for (int i = 0; i < inttamano; i++)
    {
      cout << "Ingresa un numero:";
      cin >> numerotemporal;
      arrintdenumeros[i] = numerotemporal;
    }
}

void
imprimirArreglo (int *arrintdenumeros, int inttamano)
{
  cout << "[";
  for (int i = 0; i < inttamano - 1; i++)
    {
      cout << arrintdenumeros[i] << ", ";
    }
  cout << arrintdenumeros[inttamano - 1] << "]\n";
}

void
impresordeImparesyRutas (int *arrintdenumeros, int inttamano)
{
  cout << "[";
  for (int i = 0; i < inttamano - 1; i++)
    {
      if (arrintdenumeros[i] % 2 != 0)
	{
	  cout << arrintdenumeros[i] << ", ";
	}
    }
  cout << arrintdenumeros[inttamano - 1] << "]\n";


}

