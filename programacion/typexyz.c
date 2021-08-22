#include <stdio.h>
#include <math.h>

//typedef char * string;
typedef struct{
  int x;
  int y;
  int z;
}punto;

float Distancia(punto, punto);

int main(){
  punto r1 = {1,3,4};
  punto r2, *p = &r2;

  //string name = "Perro";

  p->x = 2;
  p->y = 0;
  p->z = 1;

  printf("r1: (%d, %d, %d)\n", r1.x, r1.y, r1.z);
  printf("r2: (%d, %d, %d)\n", r2.x, p->y, (*p).z);

  printf("Distancia entre r1 y r2 : %f\n", Distancia(r1, *p));

  //printf("%c\n", *(name + 2));

  printf("\n");
  return 0;
}

float Distancia(punto A, punto B){
  return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2) + pow(A.z - B.z, 2));
}
