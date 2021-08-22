/*9) Declare una estructura para representar un punto en el espacio tridimensional (con campos x,y,z).
Declare un puntero a la estructura para que tenga la dirección de un arreglo dinámico de n estructuras punto.
Utilizar la función calloc() para asignar memoria al arreglo y compruebe que se ha podido asignar la memoria reque-
rida.
Escribir una función que retorne un puntero a un array de estructuras punto. Los valores de los puntos se
ingresan en esa función.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
	int x,y,z;
}Punto;

Punto *vec(Punto *, int);
int mostrar(Punto *,int);

int main(){
	Punto *pp;
	int n;
	scanf("%d",&n);
	pp=(Punto *)calloc(n,sizeof(Punto));
	if(pp==NULL){
      printf("error");
      exit -1;

	}
pp=vec(pp,n);
mostrar(pp,n);

return 0;
}

int mostrar(Punto *v,int n){
  for (int i = 0; i < n; ++i)
  {
  	printf("(%d,%d,%d)\n",v[i].x,v[i].y,v[i].z);
  }
  printf("\n");
return 0;

}

Punto *vec(Punto *aux,int n){
	for(int i=0;i<n;i++){
         printf("x, y, z: ");
         scanf("%d %d %d",&((*(aux+i)).x), &(aux[i].y), &((aux+i)->z));


	}
	return aux;
}
