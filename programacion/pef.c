#include <stdio.h>
#include <string.h>

struct datos{
  int edad;
  char nombre[10];
};

void aumentarEdad_Y_Renombrar(struct datos *);
void cambiarNombre(struct datos *);

int main(){
  struct datos persona;
  struct datos *ptr;

  ptr = &persona;

  persona.edad = 21;
  strcpy(persona.nombre, "Hector");

  printf("Nombre: %s\nEdad: %d\n\n", persona.nombre, persona.edad);

  ptr->edad = 1;
  strcpy(ptr->nombre, "Sancho");

  printf("Nombre: %s\nEdad: %d\n\n", ptr->nombre, persona.edad);
  aumentarEdad_Y_Renombrar(ptr);
  printf("Nombre: %s\nEdad: %d\n", persona.nombre, persona.edad);
  return 0;
}

void aumentarEdad_Y_Renombrar(struct datos *p){
  (*p).edad++;
  cambiarNombre(p);
}

void cambiarNombre(struct datos *p){
  strcpy(p->nombre, "Mila");
}
