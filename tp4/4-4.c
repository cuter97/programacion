/*4) Usando el TAD pila, crear una pila de enteros y agregar
datos a la pila. Luego, imprimir los datos de la pila.
Luego de imprimir los datos, la pila original no debe verse
modificada (utilizar estructuras auxiliares, como otra pila).*/
#include <stdio.h>
#include "pila.h"
typedef int TipoDato;

int LlenarPilaOriginal(Pila_T *pila);
Pila_T LlenarPilaInversa(Pila_T pila);
int mostrarPila(Pila_T p1);

int main(){
	Pila_T pilitaOr, pilitaIn;
	Crear_Pila(&pilitaOr);
	LlenarPilaOriginal(&pilitaOr);
	mostrarPila(pilitaOr);
	pilitaIn=LlenarPilaInversa(pilitaOr);
	mostrarPila(pilitaIn);
	return 0;
}

int LlenarPilaOriginal(Pila_T *pila){
	int n;
	do{
	scanf("%d",&n);
		Q_Push(pila,n);
	}while(!Pila_Llena(*pila));
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
int mostrarPila(Pila_T p1){
	while(!Pila_Vacia(p1)){
		printf("%d ",Q_Pop(&p1));
	}
	printf("\n");
	return 0;
}
