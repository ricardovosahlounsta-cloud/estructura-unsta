#include <iostream>
using namespace std;

#define N 10

int S[N];
int tope = 0;

void AGREGAR(int x) {
    if (tope == N) {
        cout << "La pila esta LLENA" << endl;
        return;
    }
    tope = tope + 1;
    S[tope] = x;
}

void ELIMINAR(int &x) {
    if (tope <= 0) {
        cout << "La pila esta VACIA" << endl;
        return;
    }
    x = S[tope];
    tope = tope - 1;
}

int main() {
    int x;

    AGREGAR(5);
    AGREGAR(10);
    AGREGAR(15);

    ELIMINAR(x);
    cout << "Elemento eliminado: " << x << endl;

    ELIMINAR(x);
    cout << "Elemento eliminado: " << x << endl;

    return 0;
}
