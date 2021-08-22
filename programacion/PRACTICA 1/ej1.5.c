#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

struct complejos{
    int pRe, pIm;
}matriz1[N][N], matriz2[N][N];

void llenarMatricesAleatoriamente(){
    int i, j;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            matriz1[i][j].pRe = rand() % 10;
            if(rand() % 3 == 0)
                matriz1[i][j].pRe *= -1;

            matriz1[i][j].pIm = rand() % 10;
            if(rand() % 3 == 0)
                matriz1[i][j].pIm *= -1;

            matriz2[i][j].pRe = rand() % 10;
            if(rand() % 3 == 0)
                matriz2[i][j].pRe *= -1;

            matriz2[i][j].pIm = rand() % 10;
            if(rand() % 3 == 0)
                matriz2[i][j].pIm *= -1;
        }
    }
}

void mostrarMatriz(struct complejos matriz[N][N]){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d", matriz[i][j].pRe);
            if(matriz[i][j].pIm >= 0)
                printf("+%di ", matriz[i][j].pIm);
            else
                printf("%di ", matriz[i][j].pIm);
        }
        printf("\n");
    }
}

void sumaMatrices(){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0 ; j < N; j++){
            printf("%d", matriz1[i][j].pRe + matriz2[i][j].pRe);
            if(matriz1[i][j].pIm + matriz2[i][j].pIm >= 0)
                printf("+%di ", matriz1[i][j].pIm + matriz2[i][j].pIm);
            else
            printf("%di ", matriz1[i][j].pIm + matriz2[i][j].pIm);
        }
        printf("\n");
    }
}

void restaMatrices(){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0 ; j < N; j++){
            printf("%d", matriz1[i][j].pRe - matriz2[i][j].pRe);
            if(matriz1[i][j].pIm - matriz2[i][j].pIm >= 0)
                printf("+%di ", matriz1[i][j].pIm - matriz2[i][j].pIm);
            else
            printf("%di ", matriz1[i][j].pIm - matriz2[i][j].pIm);
        }
        printf("\n");
    }
}

int main(){
    llenarMatricesAleatoriamente();
    printf("1° Matriz: \n\n");
    mostrarMatriz(matriz1);
    printf("\n2° Matriz: \n\n");
    mostrarMatriz(matriz2);
    printf("\nSUMA: \n\n");
    sumaMatrices();
    printf("\nRESTA: \n\n");
    restaMatrices();
    return 0;
}
