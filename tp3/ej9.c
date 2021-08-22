/*9) Un conjunto es una colección de elementos del mismo tipo sin duplicidades. Escribir un programa para re-
presentar un conjunto de enteros mediante una lista enlazada. El programa debe contemplar las operaciones:
- Cardinal del conjunto.
- Pertenencia de un elemento al conjunto.
- Añadir un elemento al conjunto.
- Escribir en pantalla los elementos del conjunto.*/

#include "Lista.h"
#define N 10

int Cardinal(Lista_T l){
	return LongitudLista(l);
}
int Busqueda(Lista_T l,int x){
	for (int i = 1; i <= LongitudLista(l); ++i)
	{
		if(x==DevolverDatoPosicion(l,i)){
			return 1;
		}
	}
	return 0;
}
int llenarListaSD(Lista_T *l,int x){
		if(Busqueda(*l,x)==0){
			InsertarPrimero(l,x);
			printf("ok \n");
		}
		else
			printf("otro\n");
	return 0;
}
int Pertenece(Lista_T l,int x){
	if(Busqueda(l,x)==1){
		printf("esta ");
	}
	else{
		printf("no esta ");
	}
	return 0;
}

int main(){
	srand(time(NULL));
	int x;
	Lista_T libros;
	libros=crearLista();
	while(Cardinal(libros)<N)
	{
		scanf("%d",&x);
		llenarListaSD(&libros,x);
	}
	RecorrerLista(libros);
	printf("pertenece o no?");
	scanf("%d",&x);
	Pertenece(libros,x);
	return 0;
}
