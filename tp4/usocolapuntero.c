typedef int Tipo_Dato;
#include <stdio.h>
#include <stdlib.h>
#include "colapuntero.h"

int Mostrar(Cola_T culo);
int main()
{
    Cola_T colita;
    Crear_Cola(&colita);
    S_Push(&colita,1);
    S_Push(&colita,2);
    S_Push(&colita,3);
    S_Push(&colita,6);
    S_Push(&colita,44);

    //printf("%d \n",Longitud_Cola(colita));

    Mostrar(colita);
    printf("\n");
return 0;
}

int Mostrar(Cola_T culo)
{
  while (!Cola_Vacia(culo))
  {
    printf("%d ",S_Pop(&culo));
  }
  return 0;
}
