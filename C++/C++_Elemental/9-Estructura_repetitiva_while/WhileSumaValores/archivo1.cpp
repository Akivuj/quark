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
    int n, x, suma, promedio;
    x = 1;
    suma = 0;
    while (x <= 10)
    {
        cout << "Ingrese numero:";
        cin >> n;
        suma = suma + n;
        x = x + 1;
    }
    promedio = suma / x;
    cout << "La suma de los numeros es:";
    cout << suma;
    cout << "\n";
    cout << "El promedio de los numeros es:";
    cout << promedio;
    return 0;
}