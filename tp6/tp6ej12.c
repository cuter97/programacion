/*12) Búsqueda binaria: dados un entero x y un array A de n enteros que
se encuentran ordenados en memoria,encontrar un i tal que A[i] == x o 
retornar 0 si x no se encuentra en el array (consideramos los elementos
 del array de 1 a n). A continuación se encuentra el algoritmo:*/

#include <stdio.h>
#include <stdlib.h>
#define N 3
#include "ABB.h"
typedef int Tipo_Dato;
int busqueda_binaria(int A[N], int x,int i,int j);
int LlenarVestor(Arbol_T a, int vec[N],int);

int main(){
	  Arbol_T a=NULL;
	  int vec[N];
	  //InsertarElemento(&a,7);
	  InsertarElemento(&a,4);
	  InsertarElemento(&a,2);
	  InsertarElemento(&a,5);
	  /*InsertarElemento(&a,9);
	  InsertarElemento(&a,8);
	  InsertarElemento(&a,10);
	  InsertarElemento(&a,1);
	  InsertarElemento(&a,12);
	  InsertarElemento(&a,15);
*/
	  LlenarVestor(a,vec,0);
	  for (int i = 0; i < N; ++i)
	  {
	  	printf("%d ",vec[i]);
	  }
	 // printf("%d",busqueda_binaria(vec,10,0,N));

return 0;
}

int busqueda_binaria(int A[N],int x ,int i,int j){
    int medio;
		if(i > j)
		return 0;
/* se cruzan indices: no existe x en A */
		medio=(i+j)/2;
			if(A[medio]<x)
/* busco en la mitad superior */
				return busqueda_binaria(A, x, medio+1, j);
			else
				if (A[medio] > x) /* busco en la mitad inferior */
					return busqueda_binaria(A, x, i, medio-1);
				else
					return medio;
}

int LlenarVestor(Arbol_T a, int vec[N], int pos){

	if (a!=NULL)
	{
		LlenarVestor(a->izq, vec, pos);
		vec[pos] = a->dato;
		pos++;
		LlenarVestor(a->der, vec, pos++);
	}
	return 0;
}