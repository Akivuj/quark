// #include<iostream>

// using namespace std;

// int main()
// {
//     int f;
//     for(f=1; f <= 100 ;f++)
//     {
//         cout <<f;
//         cout <<"-";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, nota, aprobados, reprobados;
    aprobados = 0;
    reprobados = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese nota del alumno:";
        cin >> nota;
        if (nota >= 7)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }
    }
    cout << "Alumnos aprobados:";
    cout << aprobados;
    cout << "\n";
    cout << "Alumnos reprobados:";
    cout << reprobados;
    return 0;
}