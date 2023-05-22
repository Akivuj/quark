// Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.

// #include<iostream>

// using namespace std;

// int main()
// {
//     int suma,valor;
//     suma=0;
//     do {
//         cout <<"Ingrese un valor:";
//         cin >>valor;
//         if (valor != 9999)
//         {
//             suma=suma+valor;
//         }
//     }while (valor != 9999);
//     cout <<"El valor acumulado es ";
//     cout <<suma;
//     cout <<"\n";
//     if (suma == 0)
//     {
//         cout <<"El valor acumulado es cero.";
//     }
//     else
//     {
//         if (suma > 0)
//         {
//             cout <<"El valor acumulado es positivo.";
//         }
//         else
//         {
//             cout <<"El valor acumulado es negativo";
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int valor, suma;
    suma = 0;
    do
    {
        cout << "Ingrese valor (9999 finaliza):";
        cin >> valor;
        if (valor != 9999)
        {
            suma += valor;
        }
    } while (valor != 9999);
    cout << "El valor acumulado es:";
    cout << suma;
    cout << "\n";
    if (suma = 0)
    {
        cout << "El valor acumulado es igual a 0";
    }
    else if (suma < 0)
    {
        cout << "El valor acumulado es menor a 0";
    }
    else
    {
        cout << "El valor acumulado es mayor a 0";
    }
    return 0;
}
