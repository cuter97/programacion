/*13) Escribir una función que tenga como argumento dos colas del 
mismo tipo y devuelva True si las colas son
idénticas, False caso contrario. NO acceder a la estructura, 
usar funciones del TAD.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cola.h"

int llenarCola(Cola_T *culo);
int mostrar(Cola_T culo);
int identicas(Cola_T C1, Cola_T C2);

int main(){
	Cola_T colita, culito;
	Crear_Cola(&colita);
	Crear_Cola(&culito);
	srand(time(NULL));

	llenarCola(&colita);
	mostrar(colita);
	printf("\n");

	llenarCola(&culito);
	mostrar(culito);

	if(identicas(colita,culito)==1){
		printf("es true");
	}
	else
		printf("es false");
	return 0;
}

int llenarCola(Cola_T *culo){
	while(!Cola_Llena(*culo)){ 
		int n=0;
		n=rand()%3;
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

int identicas(Cola_T C1, Cola_T C2){
	while(!Cola_Vacia(C1))
		if(S_Pop(&C1)!=S_Pop(&C2))
			return 0;
		return 1;
}