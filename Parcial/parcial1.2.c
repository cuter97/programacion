#include <stdio.h>
#include "Lista.h"

int main(){
	Lista_T A;
	Lista_T B;
	Lista_T C;
	A=crearLista();
	B=crearLista();
	C=crearLista();

	InsertarUltimo(&A,1);
	InsertarUltimo(&A,3);
	InsertarUltimo(&A,4);
	InsertarUltimo(&A,6);
	InsertarUltimo(&A,8);

	RecorrerLista(A);

	InsertarUltimo(&B,2);
	InsertarUltimo(&B,3);
	InsertarUltimo(&B,5);
	InsertarUltimo(&B,7);
	InsertarUltimo(&B,9);

	RecorrerLista(B);
    int x=1,y=1,d=0,e=0;
	for (int i = 0; i < 10; ++i)
	{
	 if(x!=6 && y!=6){
		d=DevolverDatoPosicion(A,x);
		e=DevolverDatoPosicion(B,y);
		if (d<=e)
		{
			InsertarUltimo(&C,d);
			x++;
		}
		else{
			InsertarUltimo(&C,e);
			y++;
		}
	  }
	if(x==6){
	  while(y<6){
      InsertarUltimo(&C,e);
      y++;
	  }

	  }
	if(y==6){
      while(x<6){
	  InsertarUltimo(&C,d);
	  x++;
     }
	 }  	
	 }
	RecorrerLista(C);

return 0;
}
/*int merge(Lista_T C){
	Lista_T A,B;
	C=crearLista();
	int x=1,y=1,d=0,e=0;
	for (int i = 0; i < 10; ++i)
	{
	 if(x!=6 && y!=6){
		d=DevolverDatoPosicion(A,x);
		e=DevolverDatoPosicion(B,y);
		if (d<=e)
		{
			InsertarUltimo(&C,d);
			x++;
		}
		else{
			InsertarUltimo(&C,e);
			y++;
		}
	  }
	if(x==6){
	  while(y<6){
      InsertarUltimo(&C,e);
      y++;
	  }

	  }
	if(y==6){
      while(x<6){
	  InsertarUltimo(&C,d);
	  x++;
     }
	 }  	
	 }
	return 0;
   }*/