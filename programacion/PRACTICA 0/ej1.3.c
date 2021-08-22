#include <stdio.h>
#include <ctype.h>

#define NOMBRES 10
#define MAXIMO 15

int main()
{
    char matriz[NOMBRES][MAXIMO];
    int i , j ;

    for(i = 0 ; i < NOMBRES ; i++)
    {
        j = -1;
        do
        {
            j++;
            matriz[i][j] = getchar();
        }while(matriz[i][j] != '\n');
        matriz[i][j] = '\0';
    }

    printf("\n\n");

    for(i = 0 ; i < NOMBRES ; i++)
    {
        matriz[i][0] = toupper(matriz[i][0]);
        printf("%s\n" , matriz[i]);
    }

    return 0;
}
