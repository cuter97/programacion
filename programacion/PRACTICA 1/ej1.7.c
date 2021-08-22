// La segunda solucion es mejor porque se recorrera el arrelgo hasta cumplir la condicion y saldra del bucle, y en la mayoria de los casos se ahorrara tiempo.
// Como minimo el arreglo se recorrera una vez. Como maximo todo el arreglo (1000)
// El promedio es de 500 recorridos sobre el arreglo.

#include <stdbool.h>


/*(1)*/

bool funcion(int array[1000], int entero){
    bool valor = false;
    int i;

    for(i = 0; i < 1000; i++){
        if(array[i] == entero)
            valor = true;
    }
    return valor;
}

/*(2)*/

bool funcion2(int array[1000], int entero){
    bool valor = false;
    int i;

    for(i = 0; i < 1000 && !valor; i++){
        if(array[i] == entero)
            valor = true;
    }
    return valor;
}

int main(){
    return 0;
}
