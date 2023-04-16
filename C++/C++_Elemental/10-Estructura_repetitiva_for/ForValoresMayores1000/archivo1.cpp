// #include <iostream>

// using namespace std;

// int main()
// {
//     int f;
//     for (f = 1; f <= 100; f++)
//     {
//         cout << f;
//         cout << "-";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, n, valor, suma;
    suma = 0;
    cout << "Ingrese la cantidad de numeros a analizar:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese valor:";
        cin >> valor;
        if (valor >= 1000)
        {
            suma = suma + 1;
        }
    }
    cout << "Los valores mayores o iguales a 1000 son:";
    cout << suma;
    return 0;
}