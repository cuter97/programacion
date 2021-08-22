typedef int Tipo_Dato;
struct Nodo
{
  Tipo_Dato dato;
  struct Nodo *sig;
};
typedef struct
{
  struct Nodo *frente;
  struct Nodo *final;
  int size;
}Cola_T;

int Crear_Cola(Cola_T *cola);
/* crea la cola pasada como parámetro: con 0 elementos y asignando el valor correcto al resto de los
campos (frente = final = NULL).*/
int S_Push(Cola_T *cola, Tipo_Dato x );
// Añade x a la cola.
Tipo_Dato S_Pop(Cola_T *cola);
// Saca un elemento de la cola si la cola no está vacía. La función retorna dicho dato.
int Cola_Vacia(Cola_T cola);
// retorna True si la cola está vacía. False caso contrario.
Tipo_Dato S_Top(Cola_T cola);
// Retorna el dato que está en el tope de la cola, pero sin sacarlo (no modifica la cola)
int Longitud_Cola(Cola_T cola);
// Retorna la longitud de la cola.
int Vaciar_Cola(Cola_T *cola);
// Vacia la cola pasada como parámetro.
