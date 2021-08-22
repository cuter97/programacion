#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 835

void llenarMatrices(int m1[N][N], double m2[N][N]){
    int i , j;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            m1[i][j] = rand() % 10;
            m2[i][j] = rand() % 10;
        }
    }
}

void mostrarMastrices(int m1[N][N], double m2[N][N]){
    int i , j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d " , m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%.5lf " , m2[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int m_enteros[N][N];
    double m_doubles[N][N];

    llenarMatrices(m_enteros, m_doubles);
    mostrarMastrices(m_enteros, m_doubles);

    printf("\n");
    printf("La matriz de enteros ocupa %d bytes" , N * N * sizeof(int));
    printf("\nLa matriz de doubles ocupa %d bytes" , N * N * sizeof(double));

    return 0;
}

/*t*/
