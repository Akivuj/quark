// #include<iostream>

// using namespace std;

// int main()
// {
//     int dia,mes,año;
//     cout <<"Ingrese nro de día:";
//     cin >>dia;
//     cout <<"Ingrese nro de mes:";
//     cin >>mes;
//     cout <<"Ingrese nro de año:";
//     cin >>año;
//     if (mes == 12 && dia == 25)
//     {
//         cout <<"La fecha ingresada corresponde a navidad.";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int dia, mes, ano;
    cout << "Ingrese el numero de dia:";
    cin >> dia;
    cout << "Ingrese el numero de mes:";
    cin >> mes;
    cout << "Ingrese el numero de año:";
    cin >> ano;
    if (dia == 24 && mes == 12)
    {
        cout << "Es navidad";
    }
    else
    {
        cout << "No es navidad";
    }
    return 0;
}