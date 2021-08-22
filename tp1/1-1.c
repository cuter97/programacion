/*¿Cuánto ocupará un arreglo de enteros de 100 elementos? ¿Y un arreglo de doubles de 100 elementos?
Escriba y ejecute un programa que inicialice con valores aleatorios ambos arreglos, los muestre por pantalla
y por último muestre la cantidad de bytes que ocupa cada uno. Implemente con funciones. Utilice la función
sizeof() cuando sea necesario.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int crear(int vec[N],double vector[N])
{
  int i,j;
  for (size_t i = 0; i < N; i++)
    vec[i]=rand()%10;

  for (size_t j = 0; j < N; j++)
    vector[j]=rand()%10;

  return 0;
}
int mostrar(int vec[N],double vector[N])
{
    int i,j;
    for (size_t i = 0; i < N; i++)
      printf("%d ",vec[i]);
printf("\n\n");
    for (size_t j = 0; j < N; j++)
      printf("%f ",vector[j] );

    return 0;
}
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int v[N];
  double ve[N];

  crear(v,ve);
  mostrar(v,ve);
  printf("\n\n");


  printf("%ld\n",sizeof(v));
  printf("%ld\n",sizeof(ve));
  return 0;
}
