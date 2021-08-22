6/*Escribir y ejecutar un programa que inicialice un arreglo de N enteros y luego elimine la primer ocurrencia
de un número ingresado por teclado. La eliminación debe ser tal que si el número no existe en el arreglo,
el arreglo queda de dimensión N. Si el elemento existe, el arreglo debe quedar de N-1 enteros y la eliminación
genera un corrimiento pisando el elemento eliminado: si se elimina el elemento de la posición 3, se debe mover
el elemento de posición 4 a la posición 3, el elemento de la posición 5 a la posición 4 y así sucesivamente,
reescribiendo las posiciones de los datos.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int N=10;
  int i,j,dato,k;
  int vector[N];
  srand(time(NULL));
  for (size_t i = 0; i < N; i++)
  {
    vector[i]=rand()%10;
    printf("%d ",vector[i]);
  }
  printf("\n");
  scanf("%d",&dato);

  for (size_t i = 0; i < N; i++)
  {
    for (size_t j = 0; j<N && vector[j]!=dato; j++);

        if (j<N && vector[j]!=dato)
        {
          for (size_t k = j; k < N-1 ; k++)
          vector[k]=vector[k+1];
          N=N-1;
            printf("%d ",vector[k]);

        }
}


  return 0;
}
