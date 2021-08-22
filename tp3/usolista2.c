#include <stdio.h>
#include "Lista2.h"
int main(int argc, char const *argv[])
{
  ListaDE_T caramelitos;
  caramelitos=crearListaa();
  InsertarPrimero(&caramelitos,1);
  InsertarPrimero(&caramelitos,2);
  InsertarPrimero(&caramelitos,3);
  InsertarUltimo(&caramelitos,9);
  InsertarUltimo(&caramelitos,8);
  InsertarUltimo(&caramelitos,7);
  InsertarUltimo(&caramelitos,6);

  RecorrerListaEnOrden(caramelitos);
  InsertarPosicion(&caramelitos,4,5);
  RecorrerListaEnOrden(caramelitos);
  RecorrerListaEnOrdenInverso(caramelitos);
  SuprimirDato(&caramelitos,5);
  RecorrerListaEnOrden(caramelitos);
  printf("%d\n",DevolverDatoPosicion(caramelitos,5));

  return 0;
}
