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
    int f, suma, valor;
    suma = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese numero:";
        cin >> valor;
        if (f > 5)
        {
            suma = suma + valor;
        }
    }
    cout << "La suma de los ultimos 5 numeros ingresados es:";
    cout << suma;
    return 0;
}