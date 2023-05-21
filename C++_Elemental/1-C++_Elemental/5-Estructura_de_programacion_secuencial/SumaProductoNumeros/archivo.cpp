// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1,num2,num3,num4,suma,producto;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     cout <<"Ingrese tercer valor:";
//     cin >>num3;
//     cout <<"Ingrese cuarto valor:";
//     cin >>num4;
//     suma = num1 + num2;
//     producto = num3 * num4;
//     cout <<"La suma de los dos primero valores es:";
//     cout <<suma;
//     cout <<"\n";
//     cout <<"El producto del tercer y cuarto valor es:";
//     cout <<producto;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, suma, producto;
    cout << "Ingrese el primer numero:";
    cin >> num1;
    cout << "Ingrese el segundo numero:";
    cin >> num2;
    cout << "Ingrese el tercer numero:";
    cin >> num3;
    cout << "Ingrese el cuarto numero:";
    cin >> num4;
    suma = num1 + num2;
    producto = num3 * num4;
    cout << "La suma del primer y segundo numero es:";
    cout << suma;
    cout << "\n";
    cout << "El preducto del tercer y cuarto numero es:";
    cout << producto;
    return 0;
}