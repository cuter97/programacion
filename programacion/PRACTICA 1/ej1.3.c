#include <stdio.h>

void llenarMatriz(int num, int matriz[num][num]){
    int i, j;
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++){
            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

void mostrarMatriz(int num, int matriz[num][num]){
    int i, j;
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main(){
    int num;

    printf("Ingrese valor para la matriz cuadrada: ");
    scanf("%d", &num);

    int matriz[num][num];

    llenarMatriz(num, matriz);
    mostrarMatriz(num, matriz);

    printf("Cantidad de memoria para una matriz: \n10x10: %d bytes\n100x100: %d bytes\n50x50: %d bytes.", 10 * 10 * sizeof(int), 100 * 100 * sizeof(int), 50 * 50 * sizeof(int));

    return 0;
}
