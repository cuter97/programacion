/*ej23.c*/
#include <stdio.h>

#define N 5

typedef struct{
	int mat, mod;
}Coche;

void llenarInfo(Coche info1[], Coche info2[]);
void cambioMat(int *dato1, int *dato2);
void ordenarMatCrec(Coche info[]);
void ordenarModDec(Coche info[]);
void imprimir(Coche info[]);

int main(){
	Coche info1[N];
	Coche info2[N];

	llenarInfo(info1, info2);
	ordenarModDec(info1);
	ordenarMatCrec(info2);

	printf("\nMatricula (Creciente):\n");
	imprimir(info2);
	printf("\nModelo (Decreciente):\n\n");
	imprimir(info1);

	return 0;
}

void llenarInfo(Coche info1[], Coche info2[]){
	int i;
	for(i = 0; i < N; i++){
		printf("\nMatricula: ");
		scanf("%d", &info1[i].mat);
		info2[i].mat = info1[i].mat;
		printf("Modelo: ");
		scanf("%d", &info1[i].mod);
		info2[i].mod = info1[i].mod;
	}
}

void cambioMat(int *dato1, int *dato2){
	int aux;
	aux = *dato1;
	*dato1 = *dato2;
	*dato2 = aux;
}

void ordenarMatCrec(Coche info[]){			//Metodo Seleccion
	int i, j, min;
	for(i = 0; i < N; i++){
		min = i;
		for(j = i + 1; j < N; j++){
			if(info[j].mat < info[min].mat){
				min = j;
			}
		}
		cambioMat(&info[i].mat, &info[min].mat);
		cambioMat(&info[i].mod, &info[min].mod);
	}

}

void ordenarModDec(Coche info[]){
	int i, j, max;
	for(i = 0; i < N; i++){
		max = i;
		for(j = i + 1; j < N; j++){
			if(info[j].mod > info[max].mod){
				max = j;
			}
		}
		cambioMat(&info[i].mod, &info[max].mod);
		cambioMat(&info[i].mat, &info[max].mat);
	}
}

void imprimir(Coche info[]){
	int i;
	for(i = 0; i < N; i++){
		printf("%d\n", i + 1);
		printf("Mod: %d\n", info[i].mod);
		printf("Mat: %d\n", info[i].mat);
	}

}

/*t*/