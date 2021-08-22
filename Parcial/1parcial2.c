#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"
typedef int Tipo_Dato;
int suma(Arbol_T a);

int main(){

	  Arbol_T a=NULL;
	  float prom;
	  InsertarElemento(&a,7);
	  InsertarElemento(&a,4);
	  InsertarElemento(&a,2);
	  InsertarElemento(&a,5);
	  InsertarElemento(&a,9);
	  InsertarElemento(&a,8);

	  prom=(float)suma(a)/ContarNodos(a);
	  printf("%f",prom);
  return 0;
}

int suma(Arbol_T a){
	if (a!=NULL)
	{
		return ((a->dato)+suma(a->izq)+suma(a->der));
	}
}// depende de la cantidad de nodos, se realizan dos llamadas por nodo
//es lineal O(n).


