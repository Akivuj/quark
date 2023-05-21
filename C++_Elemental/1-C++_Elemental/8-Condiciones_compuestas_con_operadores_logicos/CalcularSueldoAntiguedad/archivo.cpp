// #include<iostream>

// using namespace std;

// int main()
// {
//     float sueldo;
//     int antiguedad;
//     cout <<"Ingrese sueldo del empleado:";
//     cin >>sueldo;
//     cout <<"Ingrese su antiguedad en años:";
//     cin >>antiguedad;
//     if (sueldo < 500 && antiguedad > 10)
//     {
//         float aumento=sueldo * 0.20f;
//         float sueldoTotal=sueldo+aumento;
//         cout <<"Sueldo a pagar:";
//         cout <<sueldoTotal;
//     }
//     else
//     {
//         if (sueldo < 500)
//         {
//             float aumento=sueldo * 0.05f;
//             float sueldoTotal=sueldo+aumento;
//             cout <<"Sueldo a pagar:";
//             cout <<sueldoTotal;
//         }
//         else
//         {
//             cout <<"Sueldo a pagar:";
//             cout <<sueldo;
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int sueldo, antiguedad;
    cout << "Ingrese sueldo actual:";
    cin >> sueldo;
    cout << "Ingrese antiguedad en años:";
    cin >> antiguedad;
    if (sueldo < 500 && antiguedad >= 10)
    {
        sueldo = 500 * 1.20;
        cout << "El sueldo actualizado es:";
        cout << sueldo;
    }
    else
    {
        if (sueldo < 500 && antiguedad < 10)
        {
            sueldo = 500 * 1.05;
            cout << "El sueldo actualizado es:";
            cout << sueldo;
        }
        else
        {
            cout << "El sueldo actualizado es:";
            cout << sueldo;
        }
    }
    return 0;
}