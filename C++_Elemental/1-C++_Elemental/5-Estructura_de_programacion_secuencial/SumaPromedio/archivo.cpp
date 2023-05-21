// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1,num2,num3,num4,suma,promedio;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     cout <<"Ingrese tercer valor:";
//     cin >>num3;
//     cout <<"Ingrese cuarto valor:";
//     cin >>num4;
//     suma = num1 + num2 + num3 + num4;
//     promedio=suma/4;
//     cout <<"La suma de los cuatro valores es:";
//     cout <<suma;
//     cout <<"\n";
//     cout <<"El promedio es:";
//     cout <<promedio;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, num4, suma, promedio;
    cout << "Ingrese primer numero:";
    cin >> num1;
    cout << "Ingrese segundo numero:";
    cin >> num2;
    cout << "Ingrese tercer numero:";
    cin >> num3;
    cout << "Ingrese cuarto numero:";
    cin >> num4;
    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;
    cout << "La suma de los cuatro numeros es:";
    cout << suma;
    cout << "\n";
    cout << "El promedio de los cuatro numeros es:";
    cout << promedio;
    return 0;
}