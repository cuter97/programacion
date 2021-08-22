/*10) Se tiene una pila de enteros positivos. Con las
operaciones básicas de pilas y colas escribir un programa
para poner todos los elementos que son par de la pila en una
cola. Luego, mostrar los elementos de la cola. NO
acceder a la estructura, usar funciones del TAD.*/
#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
#include "pila.h"
typedef int Tipo_Dato;
typedef int TipoDato;

int LlenarPilitaOr(Pila_T *pilita);
int mostrarPila(Pila_T pilita);
Cola_T paresenCola(Pila_T pilita);
int mostrar(Cola_T culo);

int main(){

Pila_T pilitaOr;
Cola_T colita;
Crear_Pila(&pilitaOr);
Crear_Cola(&colita);
LlenarPilitaOr(&pilitaOr);
mostrarPila(pilitaOr);
colita=paresenCola(pilitaOr);
mostrar(colita);

	return 0;
}
int LlenarPilitaOr(Pila_T *pilita){
	int n; 
	do{
		scanf("%d",&n);
		Q_Push(pilita,n);
	}while(!Pila_Llena(*pilita));
	return 0;
}
int mostrarPila(Pila_T pilita){
	while(!Pila_Vacia(pilita)){
		printf("%d ",Q_Pop(&pilita));
	}
	printf("\n");
	return 0;
}
Cola_T paresenCola(Pila_T pilita){
	Cola_T aux;
	int a;
	Crear_Cola(&aux);
	while(!Pila_Vacia(pilita) && !Cola_Llena(aux)){
		a= Q_Pop(&pilita);
		if(a%2==0)
		{
			S_Push(&aux,a);
		}
	}
	return aux;
}
int mostrar(Cola_T culo){
	while(!Cola_Vacia(culo)){
		printf("%d ",S_Pop(&culo));
	}
	return 0;
}