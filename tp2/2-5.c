#include <stdio.h>
#include <stdlib.h>
int main()
{
  float *pf = NULL;
  int i, num;
  do{
    printf("Ingrese la dimensión del vector");
    scanf(" %d", &num);
  }while(num <1);
    pf = (float*) calloc(num, sizeof(float));
    if(pf == NULL)
    {
      printf("Error en la asignacion de memoria");
      exit(-1);
    }
    printf("Ingrese %d valores", num);
    for(i=0; i<num; i++)
    {
      scanf(" %f", &pf[i]);
    }
    free(pf);
return 0;
}
