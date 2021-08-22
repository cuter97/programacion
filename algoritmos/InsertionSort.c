#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10

int InsertionSort(int vector[])
{
  int  i, j, aux;
// inicializacion del vector
  for(i=0; i <N; i++)
  {
    aux = vector[i];
    j = i - 1;
    while ((j>=0) && (vector[j]>aux))
    {
      vector[j+1] = vector[j];
      j--;
    }
    vector[j+1] = aux;
  }
return 0;
}
int mostrar(int vector[])
{
  int i;
  for (i = 0; i < N; i++)
    printf("%d ",vector[i]);
  printf("\n");
  return 0;
}

int main()
{
  int vec[N];
  int i;
  srand(time(NULL));
  for (i = 0; i < N; i++)
  {
    vec[i]=rand()%10;
    printf("%d ",vec[i]);
  }
  printf("\n");
  InsertionSort(vec);
  mostrar(vec);
  return 0;
}
