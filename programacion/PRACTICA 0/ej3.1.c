#include <stdio.h>
#include <stdbool.h>

struct fecha{
    int dia , mes , anio;
} pf , sf;

bool bisiesto(int anio){
    bool valor = false;
    if(anio !=0 ){
        if((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
            valor = true;
    }
    return valor;
}

int mesesEnDias(int anio , int mes){
    int d = 0, i;
    int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    mes -= 1;

    if(bisiesto(anio))
        meses[1] = 29;

    for(i = 0 ; i < mes; i++)
        d += meses[i];

    return d;
}

int aniosEnDias(int anio){
    int i , dias = 0;

    for(i = 1 ; i < anio ; i++){
        dias += 365;
        if(bisiesto(i))
            dias += 1;
    }
            return dias;
}

int main(){
    int i , SUMA1 , SUMA2;

    do{
        printf("Ingrese primera fecha(dd mm aaaa): ");
        scanf("%d%d%d" , &pf.dia , &pf.mes , &pf.anio);

        printf("Ingrese segunda fecha(dd mm aaaa): ");
        scanf("%d%d%d" , &sf.dia , &sf.mes , &sf.anio);

    }while(pf.dia < 1 || sf.dia < 1 || pf.mes < 1 || sf.mes < 1 || pf.anio < 1 || sf.anio < 1);

    pf.dia -= 1;
    sf.dia -= 1;

    SUMA1 = mesesEnDias(pf.anio , pf.mes);
    SUMA1 += aniosEnDias(pf.anio);
    SUMA1 += pf.dia;

    SUMA2 = mesesEnDias(sf.anio , sf.mes);
    SUMA2 += aniosEnDias(sf.anio);
    SUMA2 += sf.dia;


    printf("La diferencia de dias es: %d" , SUMA2 - SUMA1);

    return 0;
}
