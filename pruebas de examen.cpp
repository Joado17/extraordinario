#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    cout << "Ingresa un n�mero para generar su tabla de multiplicar: ";
    cin >> numero;

    // Generar la tabla de multiplicar usando un bucle for
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
