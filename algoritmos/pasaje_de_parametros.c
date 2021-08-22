#include <stdio.h>
int funcion1(int x, int y)
{
  x = x + 1;
  y = y - 1;
  printf("Dentro de funcion1, x = %d, y = %d ", x, y);
return 0;
}

int funcion2(int *x, int *y)
{
  *x = *x + 1;
  *y = *y - 1;
  printf("Dentro de funcion1, x = %d, y = %d ", *x, *y);
return 0;
}

int main()
{
  int a, b;
  a = 3;
  b = 10;
  printf("Antes de llamar a funcion1, a = %d, b = %d \n", a, b);
  printf("\n");
  funcion1(a,b);
  printf("\n");
  printf("Despues de llamar a funcion1, a = %d, b = %d \n", a, b);
  printf("\n");
  printf("Antes de llamar a funcion2, a = %d, b = %d \n", a, b);
  printf("\n");
  funcion2(&a,&b);
  printf("Despues de llamar a funcion2, a = %d, b = %d \n", a, b);
return 0;
}
