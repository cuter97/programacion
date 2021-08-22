/*16.9. Dados dos árboles binarios de búsqueda
indicar mediante un programa si los árboles
tienen o no elementos comunes.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "ABB.h"
typedef int Tipo_Dato;

int Llenararbol(Arbol_T *a);
int comun(Arbol_T a,Arbol_T b,int *flag);

int main()
{
	  Arbol_T b=NULL;
	  Arbol_T a=NULL;
		int flag=0;
		srand(time(NULL));
		Llenararbol(&a);
		printf("\n");
		Llenararbol(&b);
	//	InsertarElemento(&a, 4);
		//InsertarElemento(&a, 2);
	//	InsertarElemento(&a, 1);
InOrder(a);
printf("\n");
InOrder(b);
		printf("\n");
		comun(a,b,&flag);
		if(flag)
			printf("tienen elementos en comun");
		else
			printf("no tiene");
  return 0;
}
int Llenararbol(Arbol_T *a)
{
	int aux;
  for (int i = 0; i < N; ++i)
  {
		aux=rand()%5+1;
		InsertarElemento(a,aux);
	  printf("%d ",aux);
  }
	printf("\n" );
  return 0;
}

int comun(Arbol_T a,Arbol_T b,int *flag)
{
	if(a!=NULL && !(*flag))
	{
		if (Existe(b,a->dato))
		{
     *flag=1;
		}
		else{
		comun(a->izq,b,flag);
		comun(a->der,b,flag);
	}
}
	return 0;
}
