#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int swap(int *x, int *y)
{
  int aux = *x;
  *x = *y;
  *y = aux;
return(0);
}
void quicksort(int *a, int primero, int ultimo)
{
  int i, j, central;
  int pivote;
  central = (primero + ultimo) / 2;
  pivote = a[central];
  i = primero;
  j = ultimo;
  do {
    while (a[i] <pivote) i++;
    while (a[j] >pivote) j--;
    if (i <= j)
    {
      swap(&a[i], &a[j]);
      i++;
      j--;
    }
  }
  while (i <= j);
  if (primero <j)
  quicksort(a, primero, j);   /* llamada recursiva con sublista izquierda */

  if (i <ultimo)
  quicksort(a, i, ultimo);    /* llamada recursiva con sublista izquierda */
}
int mostrar(int *vec)
{
  int i;
  for (i = 0; i < N; i++)
  printf("%d ",vec[i] );
  return 0;
}
int main()
{
  int vector[N];
  int pri=0;
  int ult=N-1;
  int i;
  srand(time(NULL));
  for ( i = 0; i < N; i++)
  {
      vector[i]=rand()%10;
      printf("%d ",vector[i] );
  }
  printf("\n");
  quicksort(vector,pri,ult);
  mostrar(vector);
  printf("\n");

  return 0;
}
