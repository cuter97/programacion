
#include "Lista.h"
#define N 10

int llenarLista(Lista_T *l){
	for (int i = 0; i < N; ++i)
	{
		InsertarPrimero(l,rand()%10);
	}
	return 0;
}
int mostrarPares(Lista_T l){
	int x;
	for (int i = 1; i <= N; ++i)
	{
		x=DevolverDatoPosicion(l,i);
		if(x%2==0){
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;
}
int main(){ 
	srand(time(NULL));
	Lista_T libros;
	libros=crearLista();
	llenarLista(&libros);
	RecorrerLista(libros);
	mostrarPares(libros);


	return 0;
}