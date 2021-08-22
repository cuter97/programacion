/* Programa de ejemplo de manejo de complejos */

#include <stdio.h>

typedef struct {
  int r,i;
}Complejo_T;


/* Prototiposos de funciones */
int imprimir_complejo(Complejo_T x);
int leer_complejo(Complejo_T *x);
Complejo_T setear_complejo(int real, int imag);
Complejo_T sumar_complejos(Complejo_T x, Complejo_T y);
int exchangeCom(Complejo_T *a, Complejo_T *b);



int main() {

  Complejo_T a,b,c,d;

  a.r = 1;
  a.i = 2;

  leer_complejo(&b);
  imprimir_complejo(a);
  imprimir_complejo(b);

  d = setear_complejo(10,20);
  imprimir_complejo(d);
  

  c = sumar_complejos(a,b);
  imprimir_complejo(c);
  imprimir_complejo(sumar_complejos(a,b));


  a = setear_complejo(1,1);
  b = setear_complejo(2,2);
  exchangeCom(&a,&b);
  imprimir_complejo(a);
  imprimir_complejo(b);

  return 0;
}



/* Implementación de funciones */

int imprimir_complejo(Complejo_T x)
{
   printf("(%d, %di) \n", x.r, x.i);

   return 0;
}

int leer_complejo(Complejo_T *x)
{
    int a,b;
    scanf("%d", &a); 
    scanf("%d", &b);

    x->r = a;
    x->i = b;

    return 0;
}


Complejo_T setear_complejo(int real, int imag)
{
    Complejo_T aux; 
    
    aux.r = real;
    aux.i = imag;
    
    return aux;
}



Complejo_T sumar_complejos(Complejo_T x, Complejo_T y)
{
   Complejo_T aux;
   
   aux.r = x.r + y.r;
   aux.i = x.i + y.i;

   return aux;
}


int exchangeCom(Complejo_T *a, Complejo_T *b) {

  Complejo_T aux;

  aux = *a;
  *a = *b;
  *b = aux;

  return 0;


}


