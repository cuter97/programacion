/*4) Realizar un programa que lea un valor del teclado. Alocar en memoria dinámica un vector de enteros de
longitud igual al valor leído. Inicializar dicho vector con valores aleatorios entre 10 y 20. Imprimir el vector.
Implementar usando funciones.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int AlocarVec(int *p,int n){
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL){
		printf("matherror");
		exit(-1);
	}
}
int InicializarVec(int *vec, int n){
	for (int i = 0; i < n; ++i)
	{
		vec[i]=rand()%10+10;
	}
return 0;
}
int mostrarVec(int *vec,int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",vec[i]);
	}
	return 0;
}
int main(){
	int *vector, DIM;
	srand(time(NULL));
	scanf("%d",&DIM);
	AlocarVec(vector,DIM);
	InicializarVec(vector,DIM);
	mostrarVec(vector,DIM);
	fflush;
	return 0;
}
