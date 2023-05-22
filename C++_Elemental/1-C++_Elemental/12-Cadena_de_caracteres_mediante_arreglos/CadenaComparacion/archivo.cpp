// Confeccionar un programa que permita ingresar dos cadenas de caracteres por teclado y luego mostrar un mensaje indicando si: "son iguales", "la primer cadena ingresada es mayor alfabéticamente" o "la segunda cadena ingresada es mayor alfabéticamente".

// #include<iostream>

// using namespace std;

// int main()
// {
//     char cadena1[50];
//     char cadena2[50];
//     cout <<"Ingrese la primer cadena:";
//     cin.getline(cadena1,50);
//     cout <<"Ingrese la segunda cadena:";
//     cin.getline(cadena2,50);
//     if (strcmp(cadena1,cadena2)==0)
//     {
//         cout <<"son iguales";
//     }
//     else
//     {
//         if (strcmp(cadena1,cadena2)>0)
//         {
//             cout <<"la primer cadena ingresada es mayor alfabeticamente";
//         }
//         else
//         {
//             cout <<"la segunda cadena ingresada es mayor alfabéticamente";
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cadena1[40], cadena2[40];
    cout << "Ingrese la primer palabra:";
    cin.getline(cadena1, 40);
    cout << "Ingrese la segunda palabra:";
    cin.getline(cadena2, 40);
    if (strcmp(cadena1, cadena2) == 0)
    {
        cout << "Las dos palabras son iguales alfabeticamente.";
    }
    else if (strcmp(cadena1, cadena2) > 0)
    {
        cout << "Las primer palabra ingresada es mayor alfabeticamente.";
    }
    else
    {
        cout << "Las segunda palabra ingresada es mayor alfabeticamente.";
    }
    return 0;
}
