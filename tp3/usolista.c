#include <stdio.h>
#include "Lista.h"

int main(){
	Lista_T libros;
	libros=crearLista();
	InsertarPrimero(&libros,5);
	InsertarPrimero(&libros,8);
	InsertarPrimero(&libros,2);
	InsertarPrimero(&libros,9);
	InsertarUltimo(&libros,10);
	RecorrerLista(libros);
	printf("%d\n",DevolverDatoPosicion(libros,5));
	InsertarPosicion(&libros,3,2);
	RecorrerLista(libros);
	SuprimirNodo(&libros,3);
	RecorrerLista(libros);


	VaciarLista(&libros);

	return 0;
}

//9 8 2 5 10
