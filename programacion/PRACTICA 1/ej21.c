/*ej21.c*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void llenar(int vector[]){
	int i;
	for(i = 0; i < N; i++){
		vector[i] = rand() % 50;
	}
	printf("Sin ordenar:\n");
	for (i = 0; i < N; i++){
		printf("%d, ", vector[i]);
	}
}

void imprimir(int vector[]){
	int i;
	printf("\nOrden creciente:\n");
	for(i = 0; i < N; i++){
		printf("%d, ", vector[i]);
	}
	printf("\nOrden decreciente:\n");
	for(i = N - 1; i > -1; i--){
		printf("%d, ", vector[i]);
	}
	printf("\n");
}

void burbuja(int vector[]){
	int i, j, aux;
	for(i = 0; i < N; i++){
		for(j = 0; j < N - 1 - i; j++){
			if(vector[j] > vector[j + 1]){
				aux = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = aux;
			}
		}
	}
}

int main(){
	srand(time(NULL));
	int vector[N];

	llenar(vector);
	burbuja(vector);
	imprimir(vector);

	return 0;
}

/*t*/