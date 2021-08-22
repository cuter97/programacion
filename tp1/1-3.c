/*Escriba y ejecute un programa que lea un entero. Este entero define la dimensión lógica de una matriz cua-
drada (filas = columnas) de enteros. Escriba una función que inicialice una matriz identidad (matriz identidad:
m[i][j] = 1 si i = j, m[i][j] = 0 caso contrario). Escriba otra función que reciba la matriz y su dimensión lógica
e imprima sus valores. Asumir que la matriz es de N x N como máximo (dimensión física). Si N = 500, calcule
la cantidad de memoria que se reserva para la matriz y cuánto se usa realmente si se leen los valores: 10, 100,
50. Responda para cada valor: ¿cuántos bytes tienen datos válidos y cuántos no?*/
#include <stdio.h>
#include <stdlib.h>
#define N 1000
int matrizidentidad(int matriz[N][N],int f,int c)
{
  int i,j;
  for (size_t i = 0; i < f; i++)
  {
      for (size_t j = 0; j < c; j++)
      {
          if (i==j)
            matriz[i][j]=1;
      }
  }
  return 0;
}
int mostrarmatriz(int matriz[N][N],int f, int c)
{
  int i,j;
  for (size_t i = 0; i < f; i++)
  {
      for (size_t j = 0; j < c; j++)
        printf("%d ",matriz[i][j] );
        printf("\n\n");
      }
  return 0;
}
int  main(int argc, char const *argv[]) {
  int m[N][N],fila,columna;
  scanf("%d %d",&fila,&columna );
  printf("\n");
  matrizidentidad(m,fila,columna);
  mostrarmatriz(m,fila,columna);

    printf("%ld\n",sizeof(m) );

  return 0;
}
