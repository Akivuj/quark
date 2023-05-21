// #include<iostream>

// using namespace std;

// int main()
// {
//     int dia,mes,ano;
//     cout <<"Ingrese nro de día:";
//     cin >>dia;
//     cout <<"Ingrese nro de mes:";
//     cin >>mes;
//     cout <<"Ingrese nro de año:";
//     cin >>ano;
//     if (mes==1 || mes==2 || mes==3)
//     {
//         cout <<"Corresponde al primer trimestre";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int dia, mes, año;
    cout << "Ingrese el numero de dia:";
    cin >> dia;
    cout << "Ingrese el numero de mes:";
    cin >> mes;
    cout << "Ingrese el numero de año:";
    cin >> año;
    if (mes == 1 || mes == 2 || mes == 3)
    {
        cout << "Corresponde al primer trimestre del año.";
    }
    else
    {
        cout << "No corresponde al primer trimestre del año.";
    }
}
