/*Se tiene una lista de enteros. Se pide calcular e informar la cantidad de elementos
en la lista que son mayores al promedio de todos los elementos de la lista. 
Asuma que dispone del TAD lista como el visto en la practica. No modifique el TAD-*/

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
float prom(Lista_T l);
int mayora(Lista_T l,int x);
int main(){
Lista_T libros;
libros=crearLista();
InsertarPrimero(&libros,1);
InsertarPrimero(&libros,2);
InsertarPrimero(&libros,3);
InsertarPrimero(&libros,5);
InsertarPrimero(&libros,7);
RecorrerLista(libros);
mayora(libros,prom(libros));

return 0;
}
float prom(Lista_T l){
int x,sum=0;
float promedio=0;
	for(int i=1;i<=LongitudLista(l);i++){
    x=DevolverDatoPosicion(l,i);
   sum=sum+x;

	}
	promedio=(float)sum/LongitudLista(l);
return promedio;
}
int mayora(Lista_T l,int x){
	int aux;
    for (int i = 1; i<=LongitudLista(l); ++i)
      {
      	aux=DevolverDatoPosicion(l,i);
      	if(aux>x){
         printf("%d ",aux);

      	}
      }  
  
return 0;
}