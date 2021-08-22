/*16) Se desea eliminar todos los números duplicados de una lista
 o vector (arreglo). Por ejemplo, si el arreglo
toma los valores:
4 7 11 4 9 5 11 7 3 5
ha de cambiarse
4 7 11 9 5 3
Escribir una función que elimine los elementos duplicados de un arreglo.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Lista2.h"

ListaDE_T suprimir(ListaDE_T l);
int busqueda(ListaDE_T l, int x);
int main(){
  srand(time(NULL));
  ListaDE_T numeros;
  numeros=crearListaa();
  InsertarPrimero(&numeros,5);
  InsertarPrimero(&numeros,3);
  InsertarPrimero(&numeros,7);
  InsertarPrimero(&numeros,11);
  InsertarPrimero(&numeros,5);
  InsertarPrimero(&numeros,9);
  InsertarPrimero(&numeros,4);
  InsertarPrimero(&numeros,11);
  InsertarPrimero(&numeros,7);
  InsertarPrimero(&numeros,4);
    RecorrerListaEnOrden(numeros);
    printf("\n");
    numeros=suprimir(numeros);
    RecorrerListaEnOrden(numeros);
  return 0;
}


ListaDE_T suprimir(ListaDE_T l){
	int x;
  ListaDE_T aux;
  aux=crearListaa();
  InsertarPrimero(&aux,DevolverDatoPosicion(l,1));
	for (int i = 2; i <= LongitudLista(l); ++i)
	{
		x=DevolverDatoPosicion(l,i);
		if(!busqueda(aux,x)){
			InsertarUltimo(&aux,x);
		}
	}
	return aux;
}
int busqueda(ListaDE_T l, int x){
  for (int i = 1; i <= LongitudLista(l); i++) {
    if (x==DevolverDatoPosicion(l,i)) {
      return 1;
    }
  }
  return 0;
}
