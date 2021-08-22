#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"
int suma(Arbol_T a);
int main()
{
  Arbol_T a = NULL;
  InsertarElemento (&a,1);
  InsertarElemento (&a,4);
  InsertarElemento (&a,6);
  InsertarElemento (&a,7);
  InsertarElemento (&a,9);

printf("%d \n",suma(a));

  return 0;
}
int suma(Arbol_T a)
{
  if (a != NULL)
  return ((a->dato)+suma(a->izq)+suma(a->der));
}
