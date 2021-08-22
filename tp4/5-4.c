#include "pila.h"
#include <stdio.h>

int main(){
	int x = 4, y;

	Pila_T pilita;
	Crear_Pila(&pilita);
	Q_Push(&pilita,x);
	printf ("%d\n",Q_Top(pilita));
	y = Q_Pop(&pilita);
	Q_Push(&pilita,32);
	Q_Push(&pilita,3);
	Q_Push(&pilita,Q_Pop(&pilita));
		do {
			printf ("%d ",y);
		} while(!Pila_Vacia(pilita));
	return 0;
}