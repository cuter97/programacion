/*escribir un programa que lea un valor del teclado. dicho valor es la cantidad de filas y columnas de 
una matriz de enteros(cuadrada). implementar funciones para: 
a) imprimir la matriz (por filas). 
b) mostrar la matriz superior(incluye la diagonal principal).
c) mostrar la matriz inferior (no incluye la diagonal principal).
d) determinar si una matriz es simetrica.
Cada una de estas operaciones debe ser una funcion.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int alocarMemory(int n, int **mat){
	(*mat)=(int*)malloc(n*n*sizeof(int));
	if (mat==NULL)
	{
		printf("error puto");
		exit(-1);
	}
}
int crearMatriz(int n, int *mat){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mat[i*n+j]=rand()%10+1;
		}
	}
	return 0;
}
int Mostrar(int n, int *mat){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",mat[i*n+j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int DiagonalSup(int n, int *mat){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i<=j){
				printf("%d ",mat[i*n+j]);
			}
			else{
				printf("0 ");
			}
		}
			printf("\n");
	}
				printf("\n");

	return 0;
}
int DiagonalInf(int n, int *mat){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i>j){
				printf("%d ",mat[i*n+j] );
			}
			else{
				printf("0 "); 
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int matliszimetrica(int n,int *mat){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(mat[i*n+j]!=mat[j*n+i]){
				return 0;
			}
		}
	}
}
int main(){
	int *Mat,n1;
	srand(time(NULL));

	printf("ingresar dimension cuadrada");
	scanf("%d",&n1);

	alocarMemory(n1,&Mat);
	crearMatriz(n1,Mat);
	Mostrar(n1,Mat);

	DiagonalSup(n1,Mat);
	DiagonalInf(n1,Mat);
	if (matliszimetrica(n1,Mat)==0)
	{
		printf("no es simetrica");
	}
	else{
		printf("si lo es");
	}
	return 0;
}