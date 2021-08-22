/*Escriba y ejecute un programa que lea 2 enteros. Estos dos enteros definen las dimensiones de una matriz
(filas, columnas). La matriz tiene como dimensión física NxN, y dimensión lógica filasxcolumnas (enteros leí-
dos). El programa debe inicializar la matriz con valores aleatorios entre 20 y 30. Luego, se debe imprimir la
matriz de dos formas: por filas y por columnas. Definir funciones para inicializar y mostrar la matriz. Explique:
¿qué sucede si N es muy grande? ¿Qué sucede si N es muy pequeño?*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int craer(int matriz[N][N],int f,int c)
{
  int i,j;
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
      matriz[i][j]=rand()%20+10;
  }
  return 0;
}
int mostrarporfila(int matriz[N][N],int f, int c)
{
  int i,j;
  for (size_t i = 0; i < f; i++)
   {
    for (size_t j = 0; j < c; j++)
      printf("%d ",matriz[i][j] );
      printf("\n" );
  }
  printf("\n\n");
  return 0;
}
int mostrarporcolumna(int matriz[N][N],int f, int c)
{
  int i,j;
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
      printf("%d ",matriz[j][i] );
      printf("\n" );
  }
  printf("\n\n");
  return 0;
}
 int main(int argc, char const *argv[])
 {
  int fila,columna;
  int m[N][N];
  scanf("%d %d",&fila,&columna );
  craer(m,fila,columna);
  mostrarporfila(m,fila,columna);
  mostrarporcolumna(m,fila,columna);
  return 0;
}
