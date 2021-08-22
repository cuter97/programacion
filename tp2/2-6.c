/*Escribir un programa que lea del teclado 2 valores que indican filas y columnas de una matriz (se aloca en
tiempo de ejecución). Inicializar dicha matriz, y para cada fila de la matriz, indicar el valor máximo y el valor
mínimo. Implementar con funciones.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Alocar_Matriz(int *matriz,int n,int m )
{
  matriz=(int*)malloc(n*m*sizeof(int));
  if(matriz==NULL)
  {
    printf("error al alocar memoria");
    exit(-1);
  }
}
int Inicializar_Mat(int *matriz, int n,int m)
{
	for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
        matriz[i*n+j]=rand()%10;
  }
return 0;
}
int mostrar_Mat(int *matriz,int n,int m)
{
	for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
		    printf("%d ",matriz[i*n+j]);
    printf("\n");
  }
	return 0;
}
int Mayor_y_Menor(int *matriz, int n, int m)
{
  int max=-1000;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)//TERMINAR
    {
      if (matriz[i*n+j]>max)
        max=matriz[i*n+j];
    }
  }
  printf("max %d \n",max);
}
int main()
{
  int *mat, f, c;
  srand(time(NULL));

  scanf("%d %d",&f,&c);
  Alocar_Matriz(mat,f,c);
  Inicializar_Mat(mat,f,c);
  mostrar_Mat(mat,f,c );
  Mayor_y_Menor(mat,f,c);
  return 0;
}
