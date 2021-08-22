/*12) Usando el TAD creado anteriormente, construir un ABB 
con las claves 50, 25, 75, 10, 40, 60, 90, 35, 45,
70, 42. Recorrerlo utilizando preorden. Verificar que 
los datos están ordenados de menor a mayor.*/

#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"

// definicion del tipo y función para imprimir dicho tipo
typedef int Tipo_Dato;
void imprimirTipoDato(Tipo_Dato x)
{
   printf(" dato: %d \n", x);
}


int main()
{
	int x;
	float prom;
    Arbol_T a=NULL;
  InsertarElemento(&a,50);
  InsertarElemento(&a,25);
  InsertarElemento(&a,75);
  InsertarElemento(&a,10);
  InsertarElemento(&a,40);
  InsertarElemento(&a,60);
  InsertarElemento(&a,90);
  InsertarElemento(&a,35);
  InsertarElemento(&a,45);
  InsertarElemento(&a,70);
  InsertarElemento(&a,42);

      x=sumaNodo(a);
 	printf("%d\n",x);
prom=(float)x/11;
printf("%.2f",prom);

printf("\n");
 PreOrder(a);
  printf("\n");
  InOrder(a);
    printf("\n");
    printf("%d",ContarNodos(a));
      printf("\n");
      printf("%d",Profundidad(a));
      printf("\n");
      ImprimirPares(a);
      printf("\n");
      printf("%d\n",Minimo(a));
      printf("%d\n",Maximo(a));
      ImprimirNivel(a,3);
      printf("\n");
      
 
    return 0;
}