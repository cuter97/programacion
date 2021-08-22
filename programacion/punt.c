#include <stdio.h>

struct Est{
  int ID;
};

int main(){
  struct Est e;
  struct Est * p;

  e.ID = 2112;
  p = &e;

  printf("%d\n", e.ID);
  printf("%d\n", p->ID);
  printf("%d\n", (*p).ID);
  printf("%d\n", (&e)->ID);

  return 0;
}
