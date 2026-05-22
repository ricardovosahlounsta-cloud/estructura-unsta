#include <iostream>
using namespace std;

// tamano maximo de la pila
#define N 10

// la pila es un arreglo simple
int S[N];
int tope = 0;

// procedimiento AGREGAR - agrega un elemento a la pila
void AGREGAR(int x) {
    if (tope == N) {
        cout << "Error: la pila esta LLENA" << endl;
        return;
    }
    tope = tope + 1;
    S[tope] = x;
}

// procedimiento ELIMINAR - elimina un elemento de la pila y lo guarda en x
void ELIMINAR(int &x) {
    if (tope <= 0) {
        cout << "Error: la pila esta VACIA" << endl;
        return;
    }
    x = S[tope];
    tope = tope - 1;
}

int main() {
    int x;

    // agregamos algunos numeros a la pila
    cout << "Agregando 5, 10, 15 a la pila..." << endl;
    AGREGAR(5);
    AGREGAR(10);
    AGREGAR(15);

    // eliminamos un elemento
    cout << "Eliminando un elemento de la pila..." << endl;
    ELIMINAR(x);
    cout << "Elemento eliminado: " << x << endl;

    // eliminamos otro
    ELIMINAR(x);
    cout << "Elemento eliminado: " << x << endl;

    return 0;
}
