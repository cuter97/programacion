 /*19) Se desa realizar un programa que realice las siguientes
 tareas:
a) Generar, aleatoriamente, una lista de 999 números reales 
	en el rango de 0 a 2000.
b) Ordenar en modo creciente por el método de la burbuja.
c) Ordenar en modo creciente por el método Shell.
d) Buscar si existe el número x (leído del teclado) en la 
lista. Aplicar la búsqueda binaria.
Ampliar el programa anterior de modo que pueda obtener y
visualizar en el programa principal los siguientes
tiempos:
t1: Tiempo empleado en ordenar la lista con cada uno de los
 	métodos.
t2: Tiempo que se emplearía en ordenar la lista ya ordenada.
t3: Tiempo empleado en ordenar la lista en forma inversa.
Para tomar los tiempos de ejecución en CPU puede utilizar 
la rutina gettimeofday() de la librería sys/time.h*/
#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9

int llenarLista(ListaDE_T *l);
int OrdBurbuja(ListaDE_T *l);
int main(){
	ListaDE_T lista;
	lista=crearLista();
	srand(time(NULL));
	llenarLista(&lista);
	RecorrerListaEnOrden(lista);
	printf("\n");
	OrdBurbuja(&lista);
	RecorrerListaEnOrden(lista);


	return 0;
}
int llenarLista(ListaDE_T *l){
	for (int i = 0; i < N; ++i)
	{
		InsertarPrimero(l,rand()%20);
	}
	return 0;
}
int OrdBurbuja(ListaDE_T *l){
	if (!EstaVacia(*l))
	{
		struct Nodo *x=NULL, *y=NULL;
		int aux=0; 	
		x=l->primero;
		while(x!=l->ultimo){
			y=x->sig;
			while(y!=NULL){
				if (x->dato>y->dato){
					aux=x->dato;
					x->dato=y->dato;
					y->dato=aux;
				}
			y=y->sig;
		}
		x=x->sig;
		}
	}
	else{
		printf("chupala");
	}
	return 0;
}
