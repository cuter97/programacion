/*8) Escriba un programa para generar matrices cuadradas de enteros (el usuario introduce la dimensión por te-
clado y todas las matrices generadas tienen el mismo tamaño). El programa reserva memoria para todas las matrices
requeridas. Se pide implementar funciones para inicializar matrices: con números aleatorios entre 1 y 9, matriz
simétrica con números aleatorios entre 1 y 9, matriz identidad. Luego, implemente funciones para imprimir una
matriz y funciones para resolver la suma, resta, multiplicación y transpuesta de matrices. En el código de la
función main() se debe resolver A * I = A, donde I es la matriz identidad y A es una matriz cualquiera. Mostrar
por pantalla las matrices para verificar esta igualdad.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Aloc_Mem (int **matriz, int n){
     (*matriz)=(int*)malloc(n*n*sizeof(int));
	if (matriz==NULL){
		printf("error al alocar\n");
		exit(-1);
	}
}
int Inicializar_Mat(int *matriz,int n){
    int i,j;

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++)
			matriz[i*n+j]=rand()%10;

	}
	return 0;
}
int simetrica(int *matriz,int n){
    int i,j;

	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++)

		matriz[j*n+i]=matriz[i*n+j];
	}
	return 0;
}
int mostrar_Mat(int *matriz,int n){
	for (int i = 0; i < n; i++){
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("%d ",matriz[i*n+j]);
	}
	printf("\n");
	return 0;
}
int swap(int *x,int *y){
	int aux=*x;
	*x=*y;
	*y=aux;
	return 0;
}
int Mat_traspuesta(int *matriz,int n){
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			swap(&matriz[i*n+j],&matriz[j*n+i]);
		}
	}
	return 0;
}
int Mat_ident(int *matriz,int n){

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
	     	if(i==j)
	     		matriz[i*n+j]=1;

	     	else
	     		matriz[i*n+j]=0;

	}
}
	return 0;
}
int Suma_Mat(int *matriz1,int *matriz2,int *matriz3,int n){
	int i,j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			matriz3[i*n+j]=matriz1[i*n+j]+matriz2[i*n+j];
				}
	}
	return 0;
}
int Resta_Mat(int *matriz1,int *matriz2,int *matriz3,int n){
	int i,j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			matriz3[i*n+j]=matriz1[i*n+j]-matriz2[i*n+j];
				}
	}
	return 0;
}

int producto(int *matriz1,int *matriz2,int *matriz3,int n){
	int sum=0;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			sum=0;
			for (int k = 0; k < n; ++k){
			sum=sum+matriz1[i*n+k]*matriz2[k*n+j];
			}
			matriz3[i*n+j]=sum;
		}
	}
	return 0;
}


int main(){
	int *mat,*m1,*m2,*m3;

	int n1;
	srand(time(NULL));
	printf("ingrese dimension de la matriz: \n");
	scanf("%d",&n1);
	Aloc_Mem(&mat,n1);
	Inicializar_Mat(mat,n1);
	printf("\nmatriz 1");
	mostrar_Mat(mat,n1);
	printf("\nmatriz traspuesta");
    Mat_traspuesta(mat,n1);
    mostrar_Mat(mat,n1);
    Mat_traspuesta(mat,n1);
	printf("\nmatriz simetrica");
	Aloc_Mem(&m1,n1);
	Inicializar_Mat(m1,n1);
	simetrica(m1,n1);
	mostrar_Mat(m1,n1);
	printf("\nmatriz identidad");
	Mat_ident(m1,n1);
	mostrar_Mat(m1,n1);
	printf("\nmatriz 2");
	Aloc_Mem(&m2,n1);
    Inicializar_Mat(m2,n1);
    mostrar_Mat(m2,n1);
    printf("\nmatriz 1+matriz 2");
	Suma_Mat(mat,m2,m3,n1);
	mostrar_Mat(m3,n1);
	printf("\nmatriz 1-matriz 2");
	Resta_Mat(mat,m2,m3,n1);
	mostrar_Mat(m3,n1);
	printf("\nmatriz 1* matriz 2");
	producto(mat,m2,m3,n1);
	mostrar_Mat(m3,n1);
	printf("\nmatriz 1*matriz identidad");
	producto(mat,m1,m3,n1);
	mostrar_Mat(m3,n1);
	return 0;
}
