#include <stdio.h>
#include <stdlib.h>

typedef int TipoDato;
#define TamMax 5
typedef struct
{
int indice;
TipoDato pila[TamMax];
int max;
}Pila_T;

int Crear_Pila(Pila_T *pila);
/* crea la pila pasada como parámetro: con 0 elementos y asignando el valor correcto al resto de los
campos. O esta función puede no recibir parámetros y devolver un dato de tipo Pila_T*/
int Q_Push(Pila_T *pila, TipoDato x );
// Añade x a la pila, si la misma no está llena.
TipoDato Q_Pop(Pila_T *pila);
// Saca un elemento de la pila si la pila no está vacía. La función retorna dicho dato.
int Pila_Llena(Pila_T pila);
// Retorna True si la pila está llena. False caso contrario.
int Pila_Vacia(Pila_T pila);
// retorna True si la pila está vacía. False caso contrario.
TipoDato Q_Top(Pila_T pila);
// Retorna el dato que está en el tope de la pila, pero sin sacarlo (no modifica la pila)
int Longitud_Pila(Pila_T pila);
// Retorna la longitud de la pila.
int Vaciar_Pila(Pila_T *pila);
// Vacia la pila pasada como parámetro.
int mostrarPila(Pila_T pila);
//muestra la pila.
