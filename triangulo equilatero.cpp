#include <iostream>
using namespace std;

int main() {
    int i, j, filas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    for (i = 1; i <= filas; i++) {

        // Espacios
        for (j = 1; j <= filas - i; j++) {
            cout << " ";
        }

        // Estrellas
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}