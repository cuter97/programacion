#include <stdio.h>
#define DIM 10

typedef struct{
  int real, imag;
}Complex_T;

Complex_T leerComplejo(); // lee los campos de un complejo y lo retorna
int mostrarComplejo(Complex_T); // muestra los campos del complejo num_c

int main(){

  Complex_T *vectorC[DIM];
  Complex_T *p_num;
  int i;

  Complex_T num1;

  // inicializacion del vector de complejos
  for(i=0; i <DIM; i++) {
    num1 = leerComplejo();
    vectorC[i] = &num1;           /*
                                    NO FUNCIONA YA QUE
                                    TODOS LOS ELEMENTOS
                                    DEL VECTOR APUNTAN A num1.
                                  */
  }
  // impresion del vector de complejos
  for(i = 0; i < DIM; i++) {
    p_num = vectorC[i];
    mostrarComplejo(*p_num);
  }
  return 0;
}

int mostrarComplejo(Complex_T num_c){
  printf("(%d, %d)\n", num_c.real, num_c.imag);
  return 1;
}

Complex_T leerComplejo(){
  Complex_T aux;
  printf("P. Real: ");
  scanf("%d", &aux.real);
  printf("P. Imag: ");
  scanf("%d", &aux.imag);
  printf("\n");
  return aux;
}

/*
  All rights reserved
*/
