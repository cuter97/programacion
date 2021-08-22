/*16) Se desea eliminar todos los números duplicados de una 
lista o vector (arreglo). Por ejemplo, si el arreglo
toma los valores:
4 7 11 4 9 5 11 7 3 5
ha de cambiarse
4 7 11 9 5 3
Escribir una función que elimine los elementos duplicados 
de un arreglo.*/

#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>
Lista_T suprDupli(Lista_T l);
int Busqueda(Lista_T l,int x);
int main(){
	Lista_T lista;
	lista=crearLista();

	InsertarPrimero(&lista,5);
	InsertarPrimero(&lista,3);
	InsertarPrimero(&lista,7);
	InsertarPrimero(&lista,11);
	InsertarPrimero(&lista,5);
	InsertarPrimero(&lista,9);
	InsertarPrimero(&lista,4);
	InsertarPrimero(&lista,11);
	InsertarPrimero(&lista,7);
	InsertarPrimero(&lista,4);
	RecorrerLista(lista);
	printf("\n");
	lista=suprDupli(lista);
	RecorrerLista(lista);
	/*for (int i = 1; i <= LongitudLista(lista); ++i)
	{
	printf("%d ",DevolverDatoPosicion(lista,i));	
	}*/

	return 0;
}
Lista_T suprDupli(Lista_T l){
	int x;
	Lista_T aux;
	aux=crearLista(); 
	InsertarPrimero(&aux,DevolverDatoPosicion(l,1));
	for(int i=2;i<=LongitudLista(l);i++){
		x=DevolverDatoPosicion(l,i);
		if (!Busqueda(aux,x))
		{
			InsertarUltimo(&aux,x);
		}
	}
	return aux;
}
int Busqueda(Lista_T l,int x){
	for (int i = 1; i <= LongitudLista(l); ++i)
	{
		if(x==DevolverDatoPosicion(l,i)){
			return 1;
		}
	}
	return 0;
}
// en el peor caso la complejidad computacional es O(n2), porque recurre a la funcion busqueda