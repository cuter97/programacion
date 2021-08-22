#include <stdio.h>
#include "Pila_Vec.h"
int main(int argc, char const *argv[])
{
    Pila_T pilita;
    Crear_Pila(&pilita);
    Q_Push(&pilita,1);
    Q_Push(&pilita,2);
    Q_Push(&pilita,3);
    Q_Push(&pilita,4);
    mostrarPila(pilita);
  return 0;
}
