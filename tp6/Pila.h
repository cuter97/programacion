typedef int TipoDato;

struct Nodo{
  TipoDato dato;
  struct Nodo *sig;
};

typedef struct{
  int dim;// cantidad de datos de la pila
  struct Nodo *pila; // puntero a la pila
}Pila_T;


Pila_T Crear_Pila();
/* crea la pila pasada como parámetro: con 0 elementos y asignando el valor correcto al resto de los
campos. O esta función puede no recibir parámetros y devolver un dato de tipo Pila_T*/
int Q_Push(Pila_T *p, TipoDato x );
// Añade x a la pila, si la misma no está llena.
TipoDato Q_Pop(Pila_T *p);
// Saca un elemento de la pila si la pila no está vacía. La función retorna dicho dato.
int Pila_Vacia(Pila_T p);
// retorna True si la pila está vacía. False caso contrario.
TipoDato Q_Top(Pila_T p);
// Retorna el dato que está en el tope de la pila, pero sin sacarlo (no modifica la pila)
int Longitud_Pila(Pila_T p);
// Retorna la longitud de la pila.
int Vaciar_Pila(Pila_T *p);
// Vacia la pila pasada como parámetro.
//int MostrarPila(Pila_T p);
//muestra la pila.
