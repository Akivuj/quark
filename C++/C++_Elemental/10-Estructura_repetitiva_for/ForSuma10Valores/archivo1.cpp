// #include<iostream>

// using namespace std;

// int main()
// {
//     int f;
//     for(f=1; f <= 100 ;f++)
//     {
//         cout <<f;
//         cout <<"-";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, valor;
    float promedio, suma;
    suma = 0;
    promedio = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese un valor:";
        cin >> valor;
        suma = suma + valor;
    }
    promedio = suma / 10;
    cout << "La suma de los valores es:";
    cout << suma;
    cout << "\n";
    cout << "El promedio de los valores es:";
    cout << promedio;
    return 0;
}