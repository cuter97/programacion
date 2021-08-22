/*Dado un árbol binario de búsqueda cons-
truir su árbol espejo. (&bol espejo es el
que se construye a partir de uno dado, con-
virtiendo el subárbol izquierdo en subárbol
derecho y viceversa.)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "ABB.h"
typedef int Tipo_Dato;

int llenarArbol(Arbol_T *a);
int Insertar(Arbol_T *a, Tipo_Dato x);
int espejo(Arbol_T a,Arbol_T *b);
int main()
{
	int x;
	  Arbol_T a=NULL;
	  Arbol_T b=NULL;
	  llenarArbol(&a);
	espejo(a,&b);
	printf("\n");
  	InOrder(a);
  	printf("\n");
  	InOrder(b);
    return 0;
}
int llenarArbol(Arbol_T *a){
	int aux;
	for (int i = 0; i < N; ++i)
	{
		aux=rand()%10;
		InsertarElemento(a,aux);
		printf("%d ",aux);
	}

    
	printf("\n");
	return 0;
}
int Insertar(Arbol_T *a, Tipo_Dato x){
    if ((*a) == NULL)
       *a = CrearArbol(x);
    else
      if (x < (*a)->dato)
         Insertar(&((*a)->der), x);
      else
         Insertar(&((*a)->izq), x);
}
int espejo(Arbol_T a,Arbol_T *b){
   if(a!=NULL){
   	Insertar(b,a->dato);
   	espejo(a->izq,b);
   	espejo(a->der,b);
   }
   return 0;

}