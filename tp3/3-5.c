/*Utilizando el TAD implementado en 1) escriba un programa que agregue los datos 4, 5, 6 al comienzo, 7, 8
y 9 al final y que agregue en distintas posiciones los elementos 11 y 12. Luego, elimine los elementos pares de
la lista.*/
#include <stdio.h>
#include "Lista.h"
int main()
{
    int x;
    int i=1;
    Lista_T numeros;
    numeros=crearLista();
    InsertarPrimero(&numeros,8);
    InsertarPrimero(&numeros,7);
    InsertarPrimero(&numeros,6);
    InsertarPrimero(&numeros,5);
    InsertarPrimero(&numeros,4);
    InsertarUltimo(&numeros,9);
    RecorrerLista(numeros);
    InsertarPosicion(&numeros,11,5);
    InsertarPosicion(&numeros,12,3);
    RecorrerLista(numeros);
    while(i<=(LongitudLista(numeros))) {
      x=DevolverDatoPosicion(numeros,i);

      if (x%2==0){
        SuprimirNodo(&numeros,i);
      }
      else
      i++;
    }
    RecorrerLista(numeros);
    SuprimirNodo(&numeros,3);
    RecorrerLista(numeros);
    SuprimirDato(&numeros,7);
    RecorrerLista(numeros);
    InsertarPosicion(&numeros,12,2);
    RecorrerLista(numeros);
  return 0;
}
