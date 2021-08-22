#include <stdio.h>
#include "pila.h"
typedef char TipoDato;

int LlenarPilaOriginal(Pila_T *pila);
Pila_T LlenarPilaInversa(Pila_T pila);
int Palindromo(Pila_T p1, Pila_T p2);


int main(){
	Pila_T pilaOr, pilaIn;
	Crear_Pila(&pilaOr);
	LlenarPilaOriginal(&pilaOr);

	pilaIn=LlenarPilaInversa(pilaOr);

	if(Palindromo(pilaOr,pilaIn))
	printf(" es Palindromo\n");
	else 
		printf("no es Palindromo\n");
	return 0;
}

int LlenarPilaOriginal(Pila_T *pila){
	do{
		Q_Push(pila, getchar());
		if(Q_Top(*pila) == ' ')    //no ingresa los espacios
			Q_Pop(pila);
	}while(Q_Top(*pila)!='\n');
	Q_Pop(pila);
	return 0;
}
Pila_T LlenarPilaInversa(Pila_T pila){
	Pila_T aux;
	Crear_Pila(&aux);
	while(!Pila_Vacia(pila)){
		Q_Push(&aux,Q_Pop(&pila));
	}
	return aux;
}
int Palindromo(Pila_T p1, Pila_T p2){
	while(!Pila_Vacia(p1))
		if(Q_Pop(&p1)!=Q_Pop(&p2))
			return 0;
	return 1;
}