#include <iostream>
using namespace std;

int main() {
    int numero, i = 1;

   
    cout << "Ingresa un número para obtener su tabla de multiplicacion: ";
    cin >> numero;

    cout << "Tabla de multiplicar es: " << numero << ":" << endl;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++; 
    }

    return 0;
}
