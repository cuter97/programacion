#include <stdio.h>
#include <string.h>

void LeerInfoPelicula(char nombre[] , char director[] , char anio[] , char codigo[])
{
    printf("Title: ");
    scanf("%s20" , &nombre[0]);
    printf("Director: ");
    scanf("%s20" , &director[0]);
    printf("Year: ");
    scanf("%s4" , &anio[0]);
}

void MostrarInfoPelicula(char nombre[] , char director[] , char anio[] , char codigo[])
{
    printf("%s\n%s\n%s\n%s" , nombre , director , anio , codigo);
}

int main ()
{
    char nombre[20];
    char director[20];
    char anio[4];
    char codigo[20];
    LeerInfoPelicula(nombre , director , anio , codigo);
    MostrarInfoPelicula(nombre , director , anio , codigo);
    return 0;
}
