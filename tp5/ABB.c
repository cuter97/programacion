#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"
typedef int Tipo_Dato;
/*Funciones*/

Arbol_T CrearArbol (int x)
{
  Arbol_T a;
  a = (Arbol_T)malloc(sizeof(struct Nodo));

  a->izq = NULL;
  a->der = NULL;
  a->dato = x;

  return(a);
}

int InsertarElemento (Arbol_T *a, int x)
{
  if ((*a) == NULL)
    *a = CrearArbol (x);
  else
    if (x < (*a)->dato)
      InsertarElemento (&((*a)->izq), x);
    else
      InsertarElemento (&((*a)->der), x);
  return 1;
}

void InOrder (Arbol_T a)
{
  if(a != NULL)
  {
    if(a->izq != NULL)
      InOrder(a->izq);

    printf("%d ", a->dato);

    if(a->der != NULL)
      InOrder(a->der);
  }
}

void PostOrder (Arbol_T a)
{
  if (a != NULL)
  {
    if (a->izq != NULL)
      PostOrder (a->izq);

    if (a->der != NULL)
      PostOrder (a->der);

    printf ("%d ", a->dato);
  }
}

void PreOrder (Arbol_T a)
{
  if (a != NULL)
  {
    printf ("%d ", a->dato);

    if (a->izq != NULL)
      PreOrder (a->izq);

    if (a->der != NULL)
      PreOrder (a->der);
  }
}

void EliminarElemento (Arbol_T *a, int x)
{
  if ((*a) == NULL)
    printf("El dato a eliminar no se encuentra \n");
  else
    if (x < (*a)->dato)
      EliminarElemento (&((*a)->izq), x);
    else
      if (x > (*a)->dato)
        EliminarElemento (&((*a)->der), x);
      else  /*Nodo encontrado*/
      {
        Arbol_T q;
        q = (*a);
        if (q->izq == NULL)
        {
          (*a) = (*a)->der;
        }
        else
          if (q->der == NULL)
          {
            (*a) = (*a)->izq;
          }
          else    /*tiene 2 hijos*/
          {
            (*a) = q->izq;

            while ((*a)->der != NULL)
              (*a) = (*a)->der;

            (*a)->der = q->der;
            q->der = q->izq;

            if (q->der != (*a))
            {
              while (q->der->der != (*a))
                q->der = q->der->der;

              q->der->der = (*a)->izq;
              (*a)->izq = q->izq;
            }
          }
    free (q);
    }
}

int Existe (Arbol_T a, int x)
{
  if (a == NULL)
    return 0;

  if (a->dato == x)
    return 1;
  else
  {
    if (a->izq != NULL){
      if(Existe (a->izq, x))
        return 1;
    }
    if (a->der != NULL){
      if(Existe (a->der, x))
        return 1;
    }
  }
  return 0;
}

int ContarNodos (Arbol_T a)
{
  if (a == NULL)
     return 0;
  else
     return (1 + ContarNodos(a->der) + ContarNodos(a->izq));
}

int Profundidad(Arbol_T a)
{
   if (a == NULL)
     return 0;
   else
     return (1 + obtenerMax (Profundidad(a->izq), Profundidad (a->der)));
}

void ImprimirPares (Arbol_T a)
{
  if (a != NULL)
  {
    ImprimirPares (a->izq);

    if (a->dato % 2 == 0)
      printf("%d ", a->dato);

    ImprimirPares (a->der);
  }
}

int Minimo(Arbol_T a)
{
   if (a == NULL)
   {
       printf("Minimo: Arbol vacio \n");
       return 0;
   }
   else
     while (a->izq != NULL)
      a = a->izq;
    return (a->dato);
 }

int Maximo(Arbol_T a)
{
    if (a == NULL)
    {
        printf("Maximo: Arbol Vacio \n");
        return 0;
    }
    else
      while (a->der != NULL)
        a = a->der;
      return (a->dato);
}

void ImprimirNivel (Arbol_T a, int l)
{
  if (!(l > Profundidad (a)))
  {
    if (l != 1)
    ImprimirNivel(a->izq, l - 1);

    if(l == 1)
      printf("%d ", a->dato);

    if(l != 1)
    ImprimirNivel (a->der, l - 1);
  }
}

int obtenerMax (int a, int b)
{
  return (a < b ? b : a);
}
