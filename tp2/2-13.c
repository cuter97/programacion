/*13) Calculadora: Implementar una calculadora que sepa sumar, restar, multiplicar y dividir 2 números flo-
tantes. Mostrar un menú con las 4 opciones, y utilizando puntero a función, realizar la operación solicitada y
mostrar el resultado.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sumar(int a,int b){
	return a+b;
}
int restar(int a,int b){
	return a-b;
}
int multiplicar(int a, int b){
	return a*b;
}
int dividir(int a,int b){
	if(b!=0){
		return a/b;
	}
	return 0;
}
int menu(){
	int n;
	printf("\n   1- sumar");
	printf("\n   2- restar");
	printf("\n   3- multiplicar");
	printf("\n   4- dividir");
	printf("\n------------------");
	printf("\n ingrese operación: ");
	scanf("%d",&n);
	return n;
}
int main(){
	int a,b,n;
	int (*pf)(int,int);
	scanf("%d%d",&a,&b);

	do{
		n=menu();
		switch(n){
		case 1:
			pf = sumar;
		break;
		case 2:
			pf = restar;
		break;
		case 3:
			pf=multiplicar;
		break;
		case 4:
			pf=dividir;
		break;
		default:
		break;
		}
	}while(n<1|| n>4);
	printf("resultado: %d",pf(a,b));
	
	return 0;
}
