// #include<iostream>

// using namespace std;
// int main()
// {
//     int x, cantpersonas, cantsueldomayor, cantsueldomenor;
//     float promedio, sueldo, sumasueldo;
//     x = 1;
//     cantpersonas = 0;
//     cantsueldomayor = 0;
//     cantsueldomenor = 0;
//     sumasueldo = 0;
//     cout << "Ingrese cantidad de empleados a procesar: ";
//     cin >> cantpersonas;
//      while (x <=cantpersonas)
//     {
//         cout << "Ingrese el sueldo del empleado: ";
//         cin >> sueldo;
//         sumasueldo = sumasueldo + sueldo;
//         if (sueldo > 300)
//         {
//             cantsueldomayor = cantsueldomayor + 1;
//         }
//         else
//         {
//             if (sueldo >= 100)
//             {
//                 cantsueldomenor = cantsueldomenor + 1;
//             }
//         }
//          x = x + 1;
//     }
//     cout << "\n";
//     cout << "La cantidad de empleados que cobran un sueldo mayor a $300 son: ";
//     cout << cantsueldomayor;
//     cout << "\n";
//     cout << "La cantidad de empleados que cobran un sueldo entre $100 y $300 son: ";
//     cout << cantsueldomenor;
//     cout << "\n";
//     cout << "El importe total de sueldos erogado por la empresa es de: ";
//     cout << sumasueldo;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, n, sueldo, entre, mas, suma;
    x = 1;
    entre = 0;
    mas = 0;
    suma = 0;
    cout << "Ingrese el numero de empleados:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese el sueldo del empleado:";
        cin >> sueldo;
        if (sueldo >= 100 && sueldo <= 300)
        {
            entre = entre + 1;
        }
        else if (sueldo > 300)
        {
            mas = mas + 1;
        }
        suma = suma + sueldo;
        x = x + 1;
    }
    cout << entre;
    cout << " empleados cobran entre 100 y 300.";
    cout << "\n";
    cout << mas;
    cout << " empleados cobran mas de 300.";
    cout << "\n";
    cout << "El gasto de la empresa en sueldos es:";
    cout << suma;
    return 0;
}