/*Se leen numeros del teclado hasta el valor 0. No se sabe cuantos valores seran leidos. Almacenarlos de 
forma eficiente. Una vez leidos todos los numeros, primero, imprimir los pares de forma inversa a como 
se han leido desde el teclado y luego los impares en el mismo orden en que fueron leidos. Utilice
TADs, asumiendo que estan implementados. No puede modificar funciones de los TADs ni acceder a las
estructuras de los mismos.*/
#include <stdio.h>
#include <stdlib.h>
#include "LLista.h"
int mostrarparesinverso(ListaDE_T l);
int mostrarimparesenorden(ListaDE_T l);
int main(){
	int x=1;
	ListaDE_T libros;
	libros=crearLista();
while(x!=0){
	scanf("%d",&x);
	InsertarPrimero(&libros,x);
	}
	RecorrerListaEnOrden(libros);
	//mostrarimparesenorden(libros);
	printf("\n");
	mostrarparesinverso(libros);
	return 0;
}
int mostrarparesinverso(ListaDE_T l){
	int x;
	for(int i=1;i<=LongitudLista(l);i++){
		x=DevolverDatoPosicion(l,i);
		if(x%2==1){
			SuprimirDato(&l,x);
		}
	}
	RecorrerListaEnOrdenInverso(l);
return 0;	
}
int mostrarimparesenorden(ListaDE_T l){
	int x;
	for(int i=1;i<=LongitudLista(l);i++){
		x=DevolverDatoPosicion(l,i);
		if(x%2==0){
			SuprimirDato(&l,x);
		}
	}
	RecorrerListaEnOrden(l);
return 0;	
}