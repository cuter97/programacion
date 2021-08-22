/*10) Vector de vectores: realizar un programa que lea un valor. Dicho valor especifica la cantidad de elementos
de un arreglo de vectores de enteros. Para cada posición del vector, pedir la dimensión del subvector y alocar
memoria para dicho vector. Inicializar toda la estructura y luego, imprimir los datos del vector. Desalocar
memoria de forma correcta. Notar que es necesario mantener la información de la dimensión de cada uno de
los subvectores. Una forma de realizarlo es que cada subvector sea una estructura de la forma:
typedef struct
{
int n;
int *vector;
}Vector_T;
donde el campo n de la estructura es la dimensión del vector. El puntero a enteros es el arreglo dinámico con n
posiciones.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
	int n;
	int *vector;
}Vector_T;

Vector_T* alocarmemory(Vector_T *,int);

Vector_T* alocarHijos(Vector_T *,int);

int llenarVec(int *, int);

int mostrarla(Vector_T *,int);

int main(){
	Vector_T *p;
	int n;
	scanf("%d",&n);

	p=alocarmemory(p,n);
	p=alocarHijos(p,n);
	mostrarla(p,n);
	return 0;

}


Vector_T *alocarmemory(Vector_T *vec,int n){
	vec=(Vector_T*)malloc(n*sizeof(Vector_T));
	if(vec==NULL){
		printf("error ");
		exit ( -1);
	}
	return vec;
}
Vector_T *alocarHijos(Vector_T *padre,int DIM){
	for (int i = 0; i < DIM; ++i)
	{
		scanf("%d",&(padre[i].n));
		padre[i].vector=(int*)malloc(padre[i].n*sizeof(int));
		if(padre[i].vector==NULL){
		printf("error");
		exit (-1);
	}
		llenarVec(padre[i].vector,padre[i].n);

	}
	return padre;
}
int llenarVec(int *vec,int n){
	for (int i = 0; i < n; ++i){
		vec[i]=rand()%10;
	}
	return 0;
}
int mostrarla(Vector_T *padre,int DIM){
	for (int i = 0; i < DIM; ++i){
		for (int j = 0; j < padre[i].n; ++j){
			printf("%d ",padre[i].vector[j]);

		}
		printf("\n");
	}
	return 0;
}
