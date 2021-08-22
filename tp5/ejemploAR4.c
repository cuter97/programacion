/*Escribir una función boogeana IDENTICOS que permita decir
si dos árboles binarios son iguales.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define N 2
#include "ABB.h"
typedef int Tipo_Dato;

int Llenararbol(Arbol_T *a);
int iguales(Arbol_T a,Arbol_T b);

int main()
{
	  Arbol_T b=NULL;
	  Arbol_T a=NULL;

		InsertarElemento(&a,1);
		InsertarElemento(&a,2);
		InsertarElemento(&a,3);
		InsertarElemento(&a,4);

		InsertarElemento(&b,1);
		InsertarElemento(&b,2);
		InsertarElemento(&b,3);
		InsertarElemento(&b,5);
	  //srand(time(NULL));
		//Llenararbol(&a);
		//Llenararbol(&b);

		InOrder(a);
		printf("\n");
		InOrder(b);
		printf("\n");

		if(iguales(a,b)==0)
			printf("son iguales\n");
		else
			printf("no son iguales\n");
  return 0;
}
/*int Llenararbol(Arbol_T *a)
{
	int aux;
  for (int i = 0; i < N; ++i)
  {
		aux=rand()%4;
		InsertarElemento(a,aux);
	  printf("%d ",aux);
  }
	printf("\n" );
  return 0;
}*/
int iguales(Arbol_T a, Arbol_T b)
{
	if(a == NULL && b ==NULL){
		return 0;
	}
	else {
		if(a == NULL || b == NULL){
			return 1;
		}
		else{
			if(a->dato == b->dato){
				iguales(a->izq, b->izq);
				iguales(a->der, b->der);
			}
			else{
				return 1;
			}
		}
	}
}
