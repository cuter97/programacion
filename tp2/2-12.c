/*12) Retomar los algoritmos de ordenación vistos anteriormente e implementar un programa donde se le pida
al usuario qué algoritmo quiere utilizar: (1) Método de la burbuja, (2) Método de Inserción, (3) Método de Se-
lección, (4) Shell Sort. Declarar un puntero a una función que ordene un vector de enteros de dimension DIM.
Elegir en tiempo de ejecución el método de ordenación e invocarlo utilizando un puntero a función. Tomar
tiempos utilizando las funciones clock() de la librería time.h o gettimeofday() de sys/time.h (investi-
gar).*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int swap(int *x, int *y){
	int aux = *x;
	*x = *y;
	*y = aux;
return 0;
}

int BubbleSort(int vector[N]){
	int i, j;
	for(i=0; i <N; i++) {
		for(j=i+1; j <N; j++) {
			if (vector[j] <vector[i]) {
				swap(&vector[i], &vector[j]);
			}
		}
	}
return 0;
}
int InsertionSort(int vector[N]){
int i, j, aux;
	for(i=0; i <N; i++) {
	aux = vector[i];
	j = i - 1;
		while ((j>=0) && (vector[j] >aux)) {
		vector[j+1] = vector[j];
		j--; //doble simbolo menos
		}
	vector[j+1] = aux;
	}
return 0;
}
int SelectionSort(int vector[N]){
int  i, j, k, p;

	for(k=0; k <N-1; k++) {
	p = k;
		for (i = k + 1; i <= N-1; i++) {
			if (vector[i] <vector[p]) {
			p = i;
			}
		}
			if (p != k) {
			swap (&vector[p], &vector[k]);
			}
		}
return 0;
}

int ShellSort(int vector[N]){
int i, j, incr = N;
	do {
		for (i = incr; i <N; i++) {
			for (j = i; (j>=incr) && (vector[j-incr]>vector[j]); j -= incr) {
			swap(&vector[j], &vector[j-incr]);
			}
		}
	incr = incr / 2;
	}
	while (incr >0);
return 0;
}
int Llenar_Vec(int vector[N]){
	for (int i = 0; i < N; ++i)
	{
			vector[i]=rand()%10;
	}
	return 0;
}
int Mostrar_Vec(int vector[N]){
	for (int i = 0; i < N; ++i){
			printf("%d ",vector[i]);
	}
	printf("\n");
	return 0;	
}


int main(){
	int metodo;
	int v1[N];
	Llenar_Vec(v1);
	Mostrar_Vec(v1);
	
	int (*pf)(int []);


do{
	printf("\n   1- burbuja");
	printf("\n   2- Inserción");
	printf("\n   3- seleccion");
	printf("\n   4- ShellSort");
	printf("\n------------------");
	printf("\n ingrese metodo de ordenacion: ");
	scanf("%d",&metodo);
	switch(metodo){
		case 1:
			pf = BubbleSort;
		break;
		case 2:
			pf = InsertionSort;
		break;
		case 3:
			pf=SelectionSort;
		break;
		case 4:
			pf=ShellSort;
		break;
		default:
			metodo=5;
		break;
}
	}while(metodo==5);

	pf(v1);
	printf("\n");
	Mostrar_Vec(v1);
	return 0;
}