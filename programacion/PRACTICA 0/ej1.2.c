#include <stdio.h>

int main()
{
    int minimo , maximo;
    int numero = 0;
    int total = 0;
    int contador = 0;
    while(numero != -1)
    {
        printf("INGRESAR NUMERO:\n");
        scanf("%d" , &numero);
        total += numero;
        if(contador == 0)
        {
            minimo = numero;
            maximo = numero;
        }
        else
        {
            if(numero < minimo)
                minimo = numero;
            if(numero > maximo)
                maximo = numero;
        }
        contador++;
    }
    printf("\nMAXIMO: %d\nMINIMO: %d\nNUMEROS LEIDOS: %d\nPROMEDIO: %f" , maximo , minimo , contador, (float) total / contador);
    return 0;
}
