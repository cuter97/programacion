/*12) Escribir un programa en el que se generen 100 números
 aleatorios entre -25 y +25 y se guarden en una
cola. Una vez creada la cola, implementar una función que forma
ra cola con los números negativos de la cola
original. NO acceder a la estructura, usar funciones del TAD.*/

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
typedef int Tipo_Dato;
int llenarCola(Cola_T *culo);
int mostrar(Cola_T culo);
Cola_T negativosCola(Cola_T culo);

int main(){
	Cola_T colita,colaneg;
	Crear_Cola(&colita);
	Crear_Cola(&colaneg);

llenarCola(&colita);
mostrar(colita);
printf("\n");
colaneg=negativosCola(colita);
mostrar(colaneg);

	return 0;
}

int llenarCola(Cola_T *culo){
	while(!Cola_Llena(*culo)){ 
		int n=0;
		n=rand()%51-25;
		S_Push(culo,n);
	}
	return 0;
}
int mostrar(Cola_T culo){
	while(!Cola_Vacia(culo)){
		printf("%d ",S_Pop(&culo));
	}
	return 0;
}
Cola_T negativosCola(Cola_T culo){
	Cola_T aux;
	int a;
	Crear_Cola(&aux);
	while(!Cola_Vacia(culo)){
		a= S_Pop(&culo);
		if(a<0)
		{
			S_Push(&aux,a);
		}
	}
	return aux;
}

