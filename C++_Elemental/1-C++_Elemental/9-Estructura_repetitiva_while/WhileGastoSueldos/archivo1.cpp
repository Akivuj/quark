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
    int x, n, sueldo, menos, mas, suma;
    x = 1;
    menos = 0;
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
            menos = menos + 1;
        }
        else
        {
            mas = mas + 1;
        }
        suma = suma + sueldo;
        x = x + 1;
    }
    cout << menos;
    cout << " empleados cobran entre 100 y 300.";
    cout << "\n";
    cout << mas;
    cout << " empleados cobran mas de 300.";
    cout << "\n";
    cout << "El gasto de la empresa en sueldos es:";
    cout << suma;
    return 0;
}