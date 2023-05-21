// #include<iostream>

// using namespace std;

// int main()
// {
//     int nota1,nota2,nota3;
//     cout <<"Ingrese primer nota:";
//     cin >>nota1;
//     cout <<"Ingrese segunda nota:";
//     cin >>nota2;
//     cout <<"Ingrese tercer nota:";
//     cin >>nota3;
//     int promedio;
//     promedio = (nota1 + nota2 + nota3) / 3;
//     if (promedio >= 7)
//     {
//         cout <<"Promocionado";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, promedio;
    cout << "Ingrese la primer nota:";
    cin >> num1;
    cout << "Ingrese la segunda nota:";
    cin >> num2;
    cout << "Ingrese la tercer nota:";
    cin >> num3;
    promedio = (num1 + num2 + num3) / 3;
    if (promedio >= 7)
    {
        cout << "Promocionado";
    }
    else
    {
        cout << "No promocionado";
    }
    return 0;
}