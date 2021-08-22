/*11) Reescribir el ejercicio 3) para descubrir si una frase es 
palíndroma. Esta vez, utilizar pilas y colas de carac-
teres. NO acceder a la estructura, usar funciones del/los TAD/s.*/

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
#include "pila.h"
typedef char Tipo_Dato;
typedef char TipoDato;

int LlenarPilaOriginal(Pila_T *pila, Cola_T*);
int Palindromo(Pila_T pila,Cola_T cola);

int main(){
	Pila_T pilita;
	Cola_T colita;
	Crear_Pila(&pilita);
	Crear_Cola(&colita);

	LlenarPilaOriginal(&pilita,&colita);

	if (Palindromo(pilita,colita))
		printf("es palindromo");
	else
		printf("no es palindromo");

	return 0;
}
int LlenarPilaOriginal(Pila_T *pila, Cola_T *cola){
	char aux;
	do{
		aux = getchar();
		if(aux!= ' ' && aux != '\n'){
			Q_Push(pila, aux);
			S_Push(cola, aux);
		}
	}while(aux !='\n');
	
	return 0;
}
int Palindromo(Pila_T pila, Cola_T cola){
	while(!Pila_Vacia(pila) && !Cola_Vacia(cola))
		if (Q_Pop(&pila) != S_Pop(&cola))
		return 0;
	return 1;
}