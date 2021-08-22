#include <stdio.h>
#include "Pila.h"
int main()
{
  Pila_T duracell;
  duracell=Crear_Pila();
  Q_Push(&duracell,1);
  Q_Push(&duracell,2);
  Q_Push(&duracell,3);
  Q_Push(&duracell,4);
  Q_Pop(&duracell);
  MostrarPila(duracell);
  printf("%d\n",Q_Top(duracell));
  
  return 0;
}
