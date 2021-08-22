/*6) Obtener una secuencia de 10 elementos reales, 
guardarlos en un array y ponerlos en una pila. Imprimir la
secuencia original y, a continuación, imprimir la pila 
extrayendo los elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

typedef int TipoDato;
int crearVec(int *vec);
Pila_T LlenarPila(int *vec);
int mostrarPila(Pila_T p1);
int main(){
	srand(time(NULL));
	int *vec;
	Pila_T pilita;
	crearVec(vec);
	pilita=LlenarPila(vec);
	mostrarPila(pilita);
	return 0;
}
int crearVec(int *vec){
	for (int i = 0; i < TamMax; i++)
	{
		vec[i]=rand()%10;
		printf("%d ",vec[i]);
	}
	return 0;
}
Pila_T LlenarPila(int *vec){
	Pila_T aux;
	Crear_Pila(&aux);
	for (int i=0;i<TamMax;i++)
	{
		Q_Push(&aux,vec[i]);
	}
	return aux;
}
int mostrarPila(Pila_T p1){
	while(!Pila_Vacia(p1)){
		printf("%d ",Q_Pop(&p1));
	}
	printf("\n");
	return 0;
}