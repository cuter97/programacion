/*ej24.c*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void imprimir(int vector[], int n);
void cambio(int *a, int *b);
void Shellsort(int vector[], int n);
void llenarVectores(int vectorA[], int vectorB[]);
void merge(int vectorA[], int vectorB[], int vectorC[]);

int main(){
    srand(time(NULL));
    int vecA[N], vecB[N], vecC[N * 2];

    llenarVectores(vecA, vecB);

    imprimir(vecA, N);
    imprimir(vecB, N);

    Shellsort(vecA, N);
    Shellsort(vecB, N);

    printf("\nShellsort\n");
    imprimir(vecA, N);
    imprimir(vecB, N);

    merge(vecA, vecB, vecC);
    printf("\nMerge\n");
    imprimir(vecC, N * 2);

    return 0;
}

void Shellsort(int vector[], int n){                                    //Shellsort recursivo
    int i, j;
    for(i = n; i < N; i++){
        j = i;
        while(vector[j - n] > vector[j] && j > 0 && j - n >= 0){
            cambio(&vector[j - n], &vector[j]);
            j -= n;
        }
    }
    if(n != 1)    
    Shellsort(vector, n/2);
}

void merge(int vectorA[], int vectorB[], int vectorC[]){
    int i = 0, j = 0, k;
    for(k = 0; k < N * 2; k++){
        if(i == N){
            vectorC[k] = vectorB[j];
            j++;
        }
        else if(j == N){
            vectorC[k] = vectorA[i];
            i++;
        }
        else{
          if(vectorA[i] < vectorB[j]){
              vectorC[k] = vectorA[i];
              i++;
           }
            else{
                vectorC[k] = vectorB[j];
                j++;
            }
        }
    }
}

void imprimir(int vector[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d, ", vector[i]);
    }
    printf("\n");
}

void cambio(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void llenarVectores(int vectorA[], int vectorB[]){
    int i;
    for(i = 0; i < N; i++){
        vectorA[i] = rand() % 100;
        vectorB[i] = rand() % 100;
    }
}

/*t*/