#include <stdio.h>
#define Max 11
typedef int Tipo_Dato;
typedef struct
{
int frente;
int final;
Tipo_Dato Cola[Max];
}Cola_T;


int Crear_Cola(Cola_T *C);
// crea la C pasada como parámetro: con 0 elementos y asignando el valor correcto al resto de los
//campos.
int S_Push(Cola_T *C, Tipo_Dato x );
// Añade x a la C, si la misma no está llena.
Tipo_Dato S_Pop(Cola_T *C);
// Saca un elemento de la C si la C no está vacía. La función retorna dicho dato.
int Cola_Llena(Cola_T C);
// Retorna True si la C está llena. False caso contrario.
int Cola_Vacia(Cola_T C);
// retorna True si la C está vacía. False caso contrario.
Tipo_Dato S_Top(Cola_T C);
// Retorna el dato que está en el tope de la C, pero sin sacarlo (no modifica la C)
int Longitud_Cola(Cola_T C);
// Retorna la longitud de la C.
int Vaciar_Cola(Cola_T *C);
// Vacia la C pasada como parámetro