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
    int   menos, intermedio, mas, total;
    float peso;
    menos      = 0;
    intermedio = 0;
    mas        = 0;
    total      = 0;
    do {
        cout << "Ingrese el peso de la pieza (0 para finalizar):";
        cin >> peso;
        if (peso != 0) {
            if (peso < 9.8) {
                menos++;
                total++;
            } else if (peso > 10.2) {
                mas++;
                total++;
            } else {
                intermedio++;
                total++;
            }
        }
    } while (peso != 0);
    cout << "Piezas que pesan menos de 9.8kg: ";
    cout << menos;
    cout << "\n";
    cout << "Piezas que pesan entre 9.8kg y 10.2kg: ";
    cout << intermedio;
    cout << "\n";
    cout << "Piezas que pesan mas de 10.2kg: ";
    cout << mas;
    cout << "\n";
    cout << "Piezas procesadas: ";
    cout << total;
    return 0;
}