#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"
int Profundo(Arbol_T a);
int max (int a, int b);

int main()
{
  Arbol_T a = NULL;
  InsertarElemento (&a,1);
  InsertarElemento (&a,4);
  InsertarElemento (&a,6);
  InsertarElemento (&a,7);
  InsertarElemento (&a,9);
  InsertarElemento (&a,2);
printf("%d \n",Profundo(a));

  return 0;
}

int Profundo(Arbol_T a)
{
  if (a != NULL)
  return (1 + max (Profundo(a->izq),Profundo(a->der)));
}

int max (int a, int b)
{
  return (a < b ? b : a);
}
