#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
typedef int Tipo_Dato;

int Crear_Cola(Cola_T *C)
{
	C->final=Max-1;
	C->frente=0;
	return 0;
}

int S_Push(Cola_T *C, Tipo_Dato x )
{
	if (!Cola_Llena(*C))
	{
		C->final=(C->final+1)%Max;
		C->Cola[C->final]=x;
	}
	else{
		printf("Cola llena 1");
		exit(-1);
	}
	return 0;
}

Tipo_Dato S_Pop(Cola_T *C)
{
	if (!Cola_Vacia(*C))
	{
		int aux;
		aux=C->Cola[C->frente];
		C->frente=(C->frente+1)%Max;
		return aux;
	}
	/*else{
		printf("cola vacia" );
		exit(-1);
	}*/
}

int Cola_Llena(Cola_T C)
{
	return ((C.final+2)%Max==C.frente);
}

int Cola_Vacia(Cola_T C)
{
	return ((C.final+1)%Max==C.frente);
}

Tipo_Dato S_Top(Cola_T C)
{
	if (Cola_Vacia(C))
	{
		printf (" Se requiere frente de una cola vacía ");
		exit (-1);
	}
	return C.Cola[C.frente];
}

int Longitud_Cola(Cola_T C)
{
	return C.final;
}

int Vaciar_Cola(Cola_T *C)
{
	C->final=-1;
	return 0;
}
