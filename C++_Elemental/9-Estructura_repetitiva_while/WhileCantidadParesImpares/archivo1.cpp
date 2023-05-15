// #include<iostream>

// using namespace std;

// int main()
// {
//     int x;
//     x = 1;
//     while (x <= 100)
//     {
//         cout <<x;
//         cout <<" - ";
//         x = x + 1;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, n, numero, pares, impares;
    x = 1;
    pares = 0;
    impares = 0;
    cout << "Ingrese cantidad de numeros a analizar:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese numero:";
        cin >> numero;
        if (numero % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        x = x + 1;
    }
    cout << pares;
    cout << " numeros fueron pares";
    cout << "\n";
    cout << impares;
    cout << " numeros fueron impares";
    return 0;
}