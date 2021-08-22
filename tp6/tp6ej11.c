/*11) Diseñe un algoritmo recursivo para calcular la altura de un árbol 
binario. ¿Cuál es la complejidad temporal
de su algoritmo?*/

#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"
typedef int Tipo_Dato;
int altura(Arbol_T a);
int main(){

	  Arbol_T a=NULL;
	  float prom;
	  InsertarElemento(&a,7);
	  InsertarElemento(&a,4);
	  InsertarElemento(&a,2);
	  InsertarElemento(&a,5);
	  InsertarElemento(&a,9);
	  InsertarElemento(&a,8);
	  InsertarElemento(&a,10);
	  InsertarElemento(&a,1);
	    InsertarElemento(&a,12);
	    InsertarElemento(&a,15);


	  printf("%d",altura(a));

  return 0;
}
int altura(Arbol_T a){
	if (a!=NULL)
	{
		if (altura(a->izq)>altura(a->der))
		{
			return (1+altura(a->izq));
		}else
			return (1+altura(a->der));
	}
}
//