#include <stdio.h>
struct NodoDE
{
  int dato;
  struct NodoDE *sig;
  struct NodoDE *ant;
};
typedef struct
{
  int n;
  struct NodoDE *primero;
  struct NodoDE *ultimo;
}ListaDE_T;

ListaDE_T crearListaa();
// crea una lista del tipo ListaDE_T con 0 elementos y la retorna.
int InsertarPrimero(ListaDE_T *l, int x );
/* inserta nodo con elemento x como primer elemento de la lista. Retorna 1 si la operación se realiza con
éxito, -1 caso contrario.*/
int InsertarUltimo(ListaDE_T *l, int x );
/* inserta nodo con elemento x como último elemento de la lista. Retorna 1 si la operación se realiza con
éxito, -1 caso contrario.*/
int RecorrerListaEnOrden(ListaDE_T l );
/* Recorre la lista l imprimiendo sus elementos, del primer elemento al último. Retorna 1 si la operación
se realiza con éxito, -1 caso contrario.*/
int RecorrerListaEnOrdenInverso(ListaDE_T l);
/* Recorre la lista l imprimiendo sus elementos, del último elemento al primero. Retorna 1 si la operación
se realiza con éxito, -1 caso contrario.*/
int EstaVacia(ListaDE_T l);
// retorna True (1) si la lista está vacía, False (0) caso contrario.
int SuprimirNodo(ListaDE_T *l, int pos);
//elimina el nodo.
int SuprimirDato(ListaDE_T *l, int x);
// Elimina el nodo con el dato x de la lista.
int VaciarLista(ListaDE_T *l);
// desaloca la memoria de cada nodo. Longitud de la lista = 0.
int LongitudLista(ListaDE_T l);
// retorna la longitud de la lista
int DevolverDatoPosicion(ListaDE_T l, int pos);
// devuelve el dato de la posición pos.
int InsertarPosicion(ListaDE_T *l,int num, int pos);
//se inserta en la pos deseada.
