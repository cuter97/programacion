/*17) Escribir una función que elimine los elementos 
duplicados de un vector ordenado. ¿Cuál es la complejidad
computacional de esta función? Compare con la que tiene la 
función del ejercicio anterior.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 8

 int swap(int *x, int *y);
int LlenarVector(int vec[N]);
int mostrarVec(int vec[N]);
 int Burbuja(int vector[N]);
 int elimDupli(int vec[N]);

int main(){
int vec1[N];
srand(time(NULL));
LlenarVector(vec1);
mostrarVec(vec1);
printf("\n");
Burbuja(vec1);
mostrarVec(vec1);
printf("\n");
elimDupli(vec1);
mostrarVec(vec1);
return 0;
}
 int swap(int *x, int *y){
 	int aux=*x;
	*x = *y;
	*y = aux;
	return 0;
}
int LlenarVector(int vec[N]){
	for (int i = 0; i < N; ++i)
	{
		vec[i]=rand()%10;
	}
	return 0;
}
int mostrarVec(int vec[N]){
	for (int i = 0; i < N; ++i)
	{
		printf("%d ",vec[i]);
	}
	return 0;
}
 int Burbuja(int vector[N]){
 	int i, j;
 // inicializacion del vector
		for(i=0; i <N; i++) {
 			for(j=i+1; j <N; j++) {
 				if (vector[j] >vector[i]) {
 					swap(&vector[i],&vector[j]);
 				}
 			}
 		}
	return 0;
}
int elimDupli(int vec[N]){
	for (int i = 0; i < N; ++i)
	{
		if (vec[i+1]==vec[i])
		{
			for (int j = i+1; j < N; ++j)
			{
				vec[j-1]=vec[j];
				
			}
		}
	}
	return 0;
}