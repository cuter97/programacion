#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarMatriz(int filas, int columnas, int matriz[filas][columnas]){
    int i, j;
    srand(time(NULL));

    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            matriz[i][j] = rand() % 11 + 20;
        }
    }
}

void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas]){
    int i, j;

    printf("Filas: ");
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("/ ");
    }

    printf("\n\nColumnas: ");
    for(i = 0; i < columnas; i++){
        for(j = 0; j < filas; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("/ ");
    }
}
int main(){
    int fil, col;

    printf("Ingresar filas y columnas para la matriz: ");
    scanf("%d%d", &fil, &col);

    int matriz[fil][col];

    inicializarMatriz(fil, col, matriz);
    mostrarMatriz(fil, col, matriz);

    return 0;
}
