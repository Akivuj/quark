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
    int   numero, contador;
    float promedio, suma;
    suma     = 0;
    contador = 0;
    do {
        cout << "Ingrese numero (0 para finalizar):";
        cin >> numero;
        suma += numero;
        if (numero != 0) {
            contador++;
        }
    } while (numero != 0);
    promedio = suma / contador;
    cout << "El promedio es: ";
    cout << promedio;
    return 0;
}
