#include <iostream>
using namespace std;

int invertirNumero(int n, int invertido = 0) {
    if (n == 0)
        return invertido;
    else
        return invertirNumero(n / 10, invertido * 10 + n % 10);
}

int main() {
    int numero;


    cout << "Ingresa un número: ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "Por favor, ingresa un número POSITIVO." << endl;
    } else {
        int numeroInvertido = invertirNumero(numero);
        cout << "El número invertido es: " << numeroInvertido << endl;
    }

    return 0;
}
