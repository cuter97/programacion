/*16) Se tiene una lista de enteros. Escribir una función que 
imprima los elementos de la lista en orden inverso.
NO acceder a la estructura, usar funciones del TAD.*/
#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
#include "pila.h"
typedef int Tipo_Dato;
typedef int TipoDato;
int LlenarColaor(Cola_T *cola);
Pila_T Llenarpila(Cola_T cola);
int mostrarcola(Cola_T cola);
int mostrarpila(Pila_T pila);
int main(){
	Pila_T pilita;
	Cola_T colita;
	Crear_Cola(&colita);
	LlenarColaor(&colita);
    pilita=Llenarpila(colita);
    mostrarcola(colita);
    printf("\n");
    mostrarpila(pilita);
return 0;
}
int LlenarColaor(Cola_T *cola){
   int n;
   do{
     scanf("%d",&n);
     S_Push(cola,n);
   }while(!Cola_Llena(*cola));
return 0;
}
Pila_T Llenarpila(Cola_T cola){
 Pila_T aux;
 Crear_Pila(&aux);
   while(!Cola_Vacia(cola)){
    Q_Push(&aux,S_Pop(&cola));

   }
  return aux; 
}
int mostrarcola(Cola_T cola){
  while(!Cola_Vacia(cola)){
  	printf("%d ",S_Pop(&cola));
  }
return 0;
}
int mostrarpila(Pila_T pila){
  while(!Pila_Vacia(pila)){
  	printf("%d ",Q_Pop(&pila));
  }
return 0;
}