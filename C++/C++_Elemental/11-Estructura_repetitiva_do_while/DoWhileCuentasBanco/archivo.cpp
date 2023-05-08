// #include <iostream>

// using namespace std;

// int main() {
//     int valor;
//     do {
//         cout << "Ingrese un valor entre 0 y 999 (0 finaliza):";
//         cin >> valor;
//         if (valor >= 100) {
//             j cout << "Tiene 3 dígitos.";
//         } else {
//             if (valor >= 10) {
//                 cout << "Tiene 2 dígitos.";
//             } else {
//                 cout << "Tiene 1 dígito.";
//             }
//         }
//         cout << "\n";
//     } while (valor != 0);
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int valor, suma, cuenta, saldo;
    suma = 0;
    do {
        cout << "Ingrese el numero de cuenta (ingrese un numero negativo para finalizar):";
        cin >> cuenta;
        if (cuenta >= 0) {
            cout << "Ingrese el saldo de la cuenta:";
            cin >> saldo;
            if (saldo < 0) {
                cout << "Saldo deudor.";
            } else if (saldo > 0) {
                cout << "Saldo acreedor.";
                suma++;
            } else {
                cout << "Saldo nulo.";
            }
            cout << "\n";
        }
    } while (cuenta >= 0);
    cout << "Total de saldos acreedores:";
    cout << suma;
    return 0;
}
