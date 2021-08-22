//operador ternario//
#include <stdio.h>
int ternario(int mayor)
{
  int a,b;
  printf("ingresar valor\n");
  scanf("%d %d",&a,&b);
  mayor=(a>b)?a:b;
  printf("el mayor es %d\n",mayor );
  return mayor;
}
int main(int argc, char const *argv[]) {
  int mayor=0;

  ternario(mayor);
  return 0;
}
