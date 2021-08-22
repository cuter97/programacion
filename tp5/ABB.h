typedef int Tipo_Dato;
struct Nodo
{
  struct Nodo *izq;
  Tipo_Dato dato;
  struct Nodo *der;
};

typedef struct Nodo *Arbol_T;

/*Prototipos*/

Arbol_T CrearArbol (int x);
int InsertarElemento (Arbol_T *a, int x);
void InOrder (Arbol_T a);           /* I V D */
void PostOrder (Arbol_T a);         /* I D V */
void PreOrder (Arbol_T a);          /* V I D */
void EliminarElemento (Arbol_T *a, int x);
int Existe (Arbol_T a, int x);
int ContarNodos (Arbol_T a);        /* 13) */
int Profundidad (Arbol_T a);        /* 14) */
void ImprimirPares (Arbol_T a);     /* 15) */
int Minimo (Arbol_T a);             /* 16) */
int Maximo (Arbol_T a);             /* 17) */
void ImprimirNivel (Arbol_T a, int l);/* 21) */


int obtenerMax (int a, int b);        /* aux */
