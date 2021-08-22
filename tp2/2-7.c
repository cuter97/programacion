/*Se tiene un arreglo de n elementos enteros (n es ingresado por teclado y se aloca memoria de forma diná-
mica). Se inicializa el vector con valores aleatorios entre 0 y VALOR_MAX. Se quiere generar otro arreglo
donde estén los elementos del vector original sin repetir. Escribir un programa que genere el nuevo vector, cuya
dimensión sólo se conoce en tiempo de ejecución. Luego muestre en pantalla ambos vectores. Nota: no imple-
mentar con un arreglo de N datos. Ir realocando en memoria dinámica espacio a medida que el vector resultado
va aumentando.*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int Alocar_Vector(int *vector,int n)
{
  vector=(int*)malloc(n*sizeof(int));
  if(vector==NULL)
  {
    printf("error al alocar memoria");
    exit(-1);
  }
}
int Llenar_Vector(int *vector,int n)
{
  int valor_max=100;
  for (int i = 0; i < n; i++)
      vector[i]=rand()%valor_max;
  return 0;
}
int Mostrar(int *vector, int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ",vector[i]);
    printf("\n");
    return 0;
}

int main()
{
  int *mat,x;
  srand(time(NULL));
  Alocar_Vector(mat,x);
  scanf("%d",&x);
  Llenar_Vector(mat,x);
  Mostrar(mat,x);
  return 0;
}
