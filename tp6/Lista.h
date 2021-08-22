#include <stdio.h>
struct Nodo{
	int dato;
	struct Nodo *sig;
};

typedef struct
{
	int n;
	struct Nodo *lista;
}Lista_T;

Lista_T crearLista();
// crea una lista del tipo Lista_T con 0 elementos y la retorna (lista vacía).

int InsertarPrimero(Lista_T *l, int x );
// inserta nodo con elemento x como primer elemento de la lista. Retorna 1 si la operación se realiza con
//éxito, -1 caso contrario.

int InsertarUltimo(Lista_T *l, int x );
/* inserta nodo con elemento x como último elemento de la lista. Retorna 1 si la operación se realiza con
éxito, -1 caso contrario.*/

int RecorrerLista(Lista_T l );
/* Recorre la lista “l” imprimiendo sus elementos. Retorna 1 si la operación se realiza con éxito, -1 caso
contrario (la lista no tiene elementos)*/

int EstaVacia(Lista_T l);
// Retorna TRUE (1) si la lista está vacía, FALSE (0) caso contrario.

int VaciarLista(Lista_T *l);
/*Desaloca la memoria de cada nodo. Longitud de la lista = 0. Retorna 1 si la operación se realiza con
éxito, -1 caso contrario.*/

int SuprimirDato(Lista_T *l, int x);
/* Elimina el nodo con el dato x de la lista. Determinar la acción a realizar en caso que el dato no exista
en la lista.*/

int SuprimirNodo(Lista_T *l, int pos);
/* Elimina el nodo con posición pos de la lista. Determinar la acción a realizar en caso que la posición no
exista en la lista.*/

int LongitudLista(Lista_T l);
// Retorna la longitud de la lista.

int DevolverDatoPosicion(Lista_T l, int pos);
/* Devuelve el dato de la posición pos. Determinar la acción a realizar en caso que la posición no exista
en la lista. si no existe devuelve 0.*/

int InsertarPosicion(Lista_T *l,int num, int pos);
