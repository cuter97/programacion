/*15) Escribir una función para crear una copia de una cola determinada.
La función tendrá dos argumentos, el primero es la cola origen y el
segundo la cola que va a ser la copia. Las operaciones que se han de 
utilizar serán únicamente las definidas para el tipo cola. En esta 
función no se acceden a las estructuras del tipo, solo se deben
invocar funciones del TAD.*/

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
typedef int Tipo_Dato;
int mostrarcola(Cola_T cola);
Cola_T LlenarColaIn(Cola_T cola);
int llenarColaOr(Cola_T *cola);
int main(){
	Cola_T Colita1,Colita2;
	Crear_Cola(&Colita1);
	Crear_Cola(&Colita2);
	llenarColaOr(&Colita1);
    mostrarcola(Colita1);
    printf("\n");
    Colita2=LlenarColaIn(Colita1);
    mostrarcola(Colita2);
	return 0;
}

int llenarColaOr(Cola_T *cola){
	int n;
	do{
		scanf("%d",&n);
		S_Push(cola,n);
	}while(!Cola_Llena(*cola));
	return 0;
}
Cola_T LlenarColaIn(Cola_T cola){
	Cola_T aux;
	Crear_Cola(&aux);
	while(!Cola_Vacia(cola)){
        S_Push(&aux,S_Pop(&cola));

	}
return aux;
}
int mostrarcola(Cola_T cola){
   while(!Cola_Vacia(cola)){
   	printf("%d ",S_Pop(&cola));
   }
return 0;
}