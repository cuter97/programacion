#include <stdio.h>

#define N 1447

int main(){
    int matriz[N][N] = {1}, i , j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++)
            printf("%d ", matriz[i][j]);
    }
    return 0;
}
