#include <iostream>

using namespace std;

int main() {
    int numero;
    do {
        cout << "Ingrese un numero entre 0 y 999:";
        cin >> numero;
        if (numero >= 1000) {
            cout << "Error: numero no admitido";
        } else {
            if (numero >= 100) {
                cout << "El numero ingresado tiene 3 digitos.";
            } else {
                if (numero >= 10) {
                    cout << "El numero ingresado tiene 2 digitos.";
                } else {
                    if (numero > 0) {
                        cout << "El numero ingresado tiene 1 digito.";
                    }
                }
            }
        }
        cout << "\n";
    } while (numero != 0);
    return 0;
}
