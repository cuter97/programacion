typedef int TipoDato;
#include "Pila_Vec.h"
#include <stdlib.h>
#include <stdio.h>
int Crear_Pila(Pila_T *pila)
{
    pila->indice=-1;
    pila->max=TamMax;
    return 0;
}

int Q_Push(Pila_T *pila, TipoDato x )
{
    if (Pila_Llena(*pila))
    {
      printf("desbordamiento de pila");
      exit(-1);
    }
    pila->indice=pila->indice+1;
    pila->pila[pila->indice]=x;
}

TipoDato Q_Pop(Pila_T *pila)
{
    if (!Pila_Vacia(*pila))
    {
      TipoDato dato;
      dato=pila->pila[pila->indice];
      pila->indice=pila->indice-1;
      return dato;
    }
    else
    {
      printf("error pop: pila vacia");
      exit -1;
    }
}

int Pila_Llena(Pila_T pila)
{
  return (pila.indice==TamMax-1);
}

int Pila_Vacia(Pila_T pila)
{
  return (pila.indice == -1);
}

TipoDato Q_Top(Pila_T pila)
{
  if (Pila_Vacia (pila) )
  {
    printf(" Error de ejecución, pila vacía");
    exit (1);
  }
  return pila.pila[pila.indice];
}

int Longitud_Pila(Pila_T pila)
{
  return pila.indice;
}

int Vaciar_Pila(Pila_T *pila)
{
  pila->indice == -1;
  return 0;
}

int mostrarPila(Pila_T pila)
{
  while (Longitud_Pila(pila) >= 0)
  {
    printf("%d ",Q_Pop(&pila));
  }
  printf("\n");
  return 0;
}
