// #include<iostream>

// using namespace std;

// int main()
// {
//     float horasTrabajadas;
//     float costoHora;
//     float sueldo;
//     cout <<"Ingrese Horas trabajadas por el operario:";
//     cin >>horasTrabajadas;
//     cout <<"Ingrese el pago por hora:";
//     cin >>costoHora;
//     sueldo = horasTrabajadas * costoHora;
//     cout <<"El sueldo total del operario es:";
//     cout <<sueldo;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int horas;
    float sueldo, costo;
    cout << "Ingrese el costo por hora:";
    cin >> costo;
    cout << "Ingrese las horas trabajadas:";
    cin >> horas;
    sueldo = costo * horas;
    cout << "El sueldo del trabajador es:";
    cout << sueldo;
    return 0;
}