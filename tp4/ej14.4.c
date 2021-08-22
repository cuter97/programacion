/*14) Encontrar un número capicúa leído del dispositivo estándar de
entrada (usando pilas o colas o ambas). NO
acceder a la estructura, usar funciones del TAD.*/

#include <stdio.h>
#include <stdlib.h>
#include "Pila_Vec.h"  //pila vector
#include "cola.h"      //cola vector
typedef int TipoDato;
typedef int Tipo_Dato;
int LlenarPilaOriginal(Pila_T *pila, Cola_T*);
int capicua(Pila_T pila,Cola_T cola);

int main(){
	Pila_T pilita;
	Cola_T colita;
	Crear_Pila(&pilita);
	Crear_Cola(&colita);

	LlenarPilaOriginal(&pilita,&colita);

	if (capicua(pilita,colita))
		printf("es capicua");
	else
		printf("no es capicua");

	return 0;
}
int LlenarPilaOriginal(Pila_T *pila, Cola_T *cola){
	int aux;
	do{
		scanf("%d",&aux);
		if(aux!= ' ' && aux != '\n'){
			Q_Push(pila, aux);
			S_Push(cola, aux);
		}
	}while(!Cola_Llena(*cola) && !Pila_Llena(*pila) && aux !='\n');

	return 0;
}
int capicua(Pila_T pila, Cola_T cola){
	while(!Pila_Vacia(pila) && !Cola_Vacia(cola))
		if (Q_Pop(&pila) != S_Pop(&cola))
		return 0;
	return 1;
}
