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
    int valor, suma;
    suma = 0;
    do {
        cout << "Ingrese valor (9999 finaliza):";
        cin >> valor;
        if (valor != 9999) {
            suma += valor;
        }
    } while (valor != 9999);
    cout << "El valor acumulado es:";
    cout << suma;
    cout << "\n";
    if (suma = 0) {
        cout << "El valor acumulado es igual a 0";
    } else if (suma < 0) {
        cout << "El valor acumulado es menor a 0";
    } else {
        cout << "El valor acumulado es mayor a 0";
    }
    return 0;
}
