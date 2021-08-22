#include <stdio.h>

struct numerosComplejos{
    int pRe, pIm;
}n[2];

void mostrarNumeros(int a  , int b){
    printf("%d" , a);
    if(b >= 0)
        printf("+");
    printf("%di\n" , b);
}

void leerNumeros(){
    int i;
    for(i = 0 ; i < 2 ; i++){
        printf("\nIngrese parte real del %d° numero complejo: " , i + 1);
        scanf("%d" , &n[i].pRe);
        printf("Ingrese parte imaginaria del %d° numero complejo: " , i + 1);
        scanf("%d" , &n[i].pIm);
    }
}

void sumarNumeros(){
    int sumaRe, sumaIm;
    sumaRe = n[0].pRe + n[1].pRe;
    sumaIm = n[0].pIm + n[1].pIm;
    printf("\nSUMA: ");
    mostrarNumeros(sumaRe , sumaIm);
}

void restarNumeros(){
    int restaRe , restaIm;
    restaRe = n[0].pRe - n[1].pRe;
    restaIm = n[0].pIm - n[1].pIm;
    printf("RESTA: ");
    mostrarNumeros(restaRe , restaIm);
}

void multNumeros(){
    int prodRe , prodIm;
    prodRe = n[0].pRe * n[1].pRe + n[0].pIm * n[1].pIm * -1;
    prodIm = n[0].pRe * n[1].pIm + n[1].pRe * n[0].pIm;
    printf("MULTIPLICACION: ");
    mostrarNumeros(prodRe , prodIm);
}
int main(){
    leerNumeros();
    sumarNumeros();
    restarNumeros();
    multNumeros();
    return 0;
}
