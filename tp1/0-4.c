/*char car = ’a’;
do
{
printf(" %d", car);
car ++;
}while (car <= ’z’);
EN LA TABLA ASCII a=97*/
#include <stdio.h>
#include <ctype.h>
int main()
{

  int i;
  char aux='a';
  char N='z';
  for ( i = 0 ; i <= N; i++)
  {
    i=aux++;
    printf("%d ",i);
  }
  printf("\n\n");
  return 0;
}
