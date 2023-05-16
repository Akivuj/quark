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
    int x, valor, lista1, lista2;
    x = 1;
    lista1 = 0;
    lista2 = 0;
    while (x <= 15)
    {
        cout << "Ingrese valor de lista uno:";
        cin >> valor;
        lista1 = lista1 + valor;
        x = x + 1;
    }
    while (x <= 30)
    {
        cout << "Ingrese valor de lista dos:";
        cin >> valor;
        lista2 = lista2 + valor;
        x = x + 1;
    }
    if (lista1 > lista2)
    {
        cout << "Lista 1 mayor";
    }
    else
    {
        if (lista1 < lista2)
        {
            cout << "Lista 2 mayor";
        }
        else
        {
            cout << "Listas iguales";
        }
    }
    return 0;
}