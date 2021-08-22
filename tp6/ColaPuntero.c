typedef int Tipo_Dato;
#include <stdio.h>
#include <stdlib.h>
#include "colapuntero.h"

int Crear_Cola(Cola_T *cola)
{
  cola->frente = cola->final = NULL;
  return 0;
}
int S_Push(Cola_T *cola, Tipo_Dato x )
{
  struct Nodo *nuevo;
  nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
  if (!nuevo)
  {
    printf("no se aloco memori\n");
    exit (-1);
  }
  nuevo->dato=x;
  nuevo->sig=NULL;
  if (Cola_Vacia(*cola))
  {
    cola->frente=nuevo;
  }
  else
    cola->final->sig=nuevo;
    cola->final=nuevo;

  return 1;
}
Tipo_Dato S_Pop(Cola_T *cola)
{
  Tipo_Dato tmp;
  if (!Cola_Vacia (*cola) )
  {
    struct Nodo* a;
    a = cola->frente;
    tmp = cola->frente->dato;
    cola->frente = cola->frente->sig;
    free (a);
  }
  else
  {
    printf ("Error cometido al eliminar de una cola vacía");
    exit (1);
  }
  return tmp;
}
int Cola_Vacia(Cola_T cola)
{
  //return (cola.frente == NULL);
  if (cola.frente==NULL) {
    return 1;
  }
  return 0;
}
Tipo_Dato S_Top(Cola_T cola)
{
  if (Cola_Vacia(cola))
  {
    printf("Error: cola vacía ");
    exit (-1);
  }
  return (cola.frente->dato);
}
int Longitud_Cola(Cola_T cola)
{
  int n=0;
  while (!Cola_Vacia(cola))
  {
    S_Pop(&cola);
    n++;
  }
  return n;
}
int Vaciar_Cola(Cola_T *cola)
{
  for (;cola->frente != NULL;)
  {
  struct Nodo *aux;
  aux = cola -> frente;
  cola -> frente = cola -> frente -> sig;
  free (aux);
  }
}
