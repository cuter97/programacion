#include <stdio.h>
#include <stdbool.h>

#define N 20

struct registros{
    int dni, matricula;
}vector[N];

int verificarRegistro(){
    int i;

    for(i = 0; i < N; i++){
        if(vector[i].dni == 0 ){
            break;
        }
    }

    return i;
}

void moverElementosVector(int pos){
    int i;

    for(i = pos; i < N; i++){
        if(i != N - 1){
            vector[i].dni = vector[i + 1].dni;
            vector[i].matricula = vector[i + 1].matricula;
        }
        else{
            vector[i].dni = 0;
            vector[i].matricula = 0;
        }
    }
}

void eliminarElemento(int pos){
    vector[pos].dni = 0;
    vector[pos].matricula = 0;
    moverElementosVector(pos);
}

void imprimir(){
    int i;
    printf("\nDNI:");
    for(i = 0; i < N; i++)
        printf(" %d |", vector[i].dni);

    printf("\nMAT:");
    for(i = 0; i < N; i++)
        printf(" %d |", vector[i].matricula);
}

int main(){
    int posicion, a;

    do{
        a = verificarRegistro();

        if(a != N){
            printf("\nDNI: ");
            scanf("%d", &vector[a].dni);
            printf("MATRICULA: ");
            scanf("%d", &vector[a].matricula);
        }
        else{
            printf("\nEl vector esta lleno\n");
        }
    }while(a != N);

    imprimir();

    do{
        printf("\n\nPosicion del vector a eliminar: ");
        scanf("%d", &posicion);
    }while(posicion < 1 || posicion > N);

    eliminarElemento(posicion - 1);
    printf("\n");
    imprimir();
    printf("\n");
    return 0;
}
