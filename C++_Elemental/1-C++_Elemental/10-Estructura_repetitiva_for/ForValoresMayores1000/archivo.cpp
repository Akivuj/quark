// #include<iostream>

// using namespace std;

// int main()
// {
//     int cantidad,n,f,valor;
//     cantidad=0;
//     cout <<"Cuantos valores ingresará:";
//     cin >>n;
//     for(f=1; f <= n ;f++)
//     {
//         cout <<"Ingrese el valor:";
//         cin >>valor;
//         if (valor >= 1000)
//         {
//             cantidad=cantidad+1;
//         }
//     }
//     cout <<"La cantidad de valores ingresados mayores o iguales a 1000 son:";
//     cout <<cantidad;
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