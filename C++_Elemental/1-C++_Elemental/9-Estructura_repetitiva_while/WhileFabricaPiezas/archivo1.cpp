// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//     x = 2;
//     while (x <= 100)
//     {
//         cout << x;
//         cout << " - ";
//         x = x + 2;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, n, largo, suma;
    x = 1;
    suma = 0;
    cout << "Ingrese numero de piezas:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese largo de la pieza:";
        cin >> largo;
        if (largo >= 120 && largo <= 130)
        {
            suma = suma + 1;
        }
        x = x + 1;
    }
    cout << "El numero de piezas aceptadas para procesar es:";
    cout << suma;
    return 0;
}