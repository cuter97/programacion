/*18) Escribir una función no recursiva (iterativa)
que, dado un árbol binario, lo recorra en postorden.*/
typedef int Tipo_Dato;

#include <stdio.h>
#include <stdlib.h>
#include "ABB.h"

int main(){

	  Arbol_T a=NULL;
  InsertarElemento(&a,50);
  InsertarElemento(&a,25);
  InsertarElemento(&a,75);
  InsertarElemento(&a,10);
  InsertarElemento(&a,40);
  InsertarElemento(&a,60);
  InsertarElemento(&a,90);
  InsertarElemento(&a,35);

  return 0;
}

int norecursiva(Arbol_T a){

}
//no hacia falta hacerlo
