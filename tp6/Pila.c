typedef int TipoDato;
#include "Pila.h"
#include <stdio.h>
#include <stdlib.h>

Pila_T Crear_Pila()
{
  Pila_T p;
  p.dim=0;
  p.pila=NULL;
  return p;
}

int Q_Push(Pila_T *p, TipoDato x)
{
  struct Nodo *nuevo;
  nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
  if (!nuevo)
  {
    printf("no se aloco memoria");
    exit (-1);
  }
  nuevo->dato=x;
  nuevo->sig=p->pila;
  p->pila=nuevo;
  (p->dim)++;

  return 1;
}

TipoDato Q_Pop(Pila_T *p)
{
  TipoDato tem;
  struct Nodo *aux;
  if (Pila_Vacia(*p))
  {
    printf(" Se intenta sacar un elemento en pila vacía");
  }
  else
  {
    tem = p->pila->dato;
    aux = p->pila;
    p->pila = aux->sig;
    free (aux);
    (p->dim)--;
    return tem;
  }
}

int Pila_Vacia(Pila_T p)
{
  if (p.dim==0)
    return 1;
  return 0;
}

TipoDato Q_Top(Pila_T p)
{
  if (Pila_Vacia(p))
  {
    printf (" Error de ejecución, pila vacía");
    exit (-1);
  }
  return p.pila->dato;
}

int Longitud_Pila(Pila_T p)
{
  return p.dim;
}

int Vaciar_Pila(Pila_T *p)
{
  while (!Pila_Vacia(*p) )
  {
    Q_Pop(p);
  }
}
/*
int MostrarPila(Pila_T p)
{
  if(!Pila_Vacia(p))
  {
    struct Nodo *aux;
    aux=p.pila;
    while(aux!=NULL)
    {
      printf("%d ",aux->dato);
      aux=aux->sig;
    }printf("\n");
    return 1;
  }
  return (-1);
}
*/
