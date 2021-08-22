/*Se realiza una encuesta anónima sobre 50 personas, donde de cada una se conoce la edad y la cantidad
de hijos. Luego de ingresar los datos, se procesan los datos para obtener: 1. El listado de los 50 participantes,
ordenados por edad e informando edad y cantidad de hijos. Utilizar el método de inserción para realizar la
ordenación. 2. Un listado donde se informe el promedio de hijos para cada una de las edades consideradas
(establecer como pre-condición el rango de edades que se usará).*/
#include <stdio.h>
#define N 3
typedef struct
{
  int edad, hijos;
}Info;
int InsertionSort(Info vector[])
{
  int  i, j;
  Info aux;
// inicializacion del vector
  for(int i=0; i <N; i++)
  {
    aux = vector[i];
    j = i - 1;
    while ((j>=0) && (vector[j].edad > aux.edad))
    {
      vector[j+1] = vector[j];
      j--;
    }
    vector[j+1] = aux;
  }
return 0;
}
int Llenar_Vector(Info vector[])
{
  Info a,b;
  printf("ingresar edad | hijos\n");
  for (int i = 0; i < N; i++)
      scanf("%d %d",&vector[i].edad,&vector[i].hijos);

  return 0;
}
int mostrar(Info vector[])
{
  for (int i = 0; i < N; i++)
    printf("%d %d",vector[i].edad,vector[i].hijos);
  printf("\n");
  return 0;
}

int main(int argc, char const *argv[])
{
  Info vec[N];

  Llenar_Vector(vec);
  InsertionSort(vec);
  for (int i = 0; i < N; i++)
    printf("%d %d \n",vec[i].edad,vec[i].hijos );
  return 0;
}
