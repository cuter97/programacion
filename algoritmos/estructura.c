#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
struct datos
{
  char nombre[20];
  char apellido[20];
  long int dni;
};
struct tablapersonas
{
  int numpersonas;
  struct datos persona[100];
};
void main()
{
  int i;
  struct tablapersonas tabla;

  printf("numero de personas:  ");
  scanf("%d",&tabla.numpersonas );
  for ( i = 0; i < tabla.numpersonas; i++)
  {
      printf("nombre: " );
      scanf("%s",&*tabla.persona[i].nombre);
      printf("\n\n");
      printf("apellido: " );
      scanf("%s",&*tabla.persona[i].apellido);
      printf("\n\n");
      printf("DNI: " );
      scanf("%ld",&tabla.persona[i].dni );
  }
}
