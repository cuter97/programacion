//El código imprime los números correspondientes a las letras minúsculas del abecedario según la tabla ASCII.

#include <stdio.h>

int main()
{
    int car = 97;
    while(car <= 'z')
    {
        printf("%d ", car);
        car++;
    }

    return 0;
}
