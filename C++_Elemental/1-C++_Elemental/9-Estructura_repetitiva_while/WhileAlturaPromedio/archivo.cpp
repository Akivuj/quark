// #include<iostream>

// using namespace std;

// int main()
// {
//     int n,x;
//     float altura,suma,promedio;
//     cout <<"Cuantas personas hay:";
//     cin >>n;
//     x=1;
//     suma=0;
//     while (x <= n)
//     {
//         cout <<"Ingrese la altura:";
//         cin >>altura;
//         suma=suma + altura;
//         x=x + 1;
//     }
//     promedio=suma/n;
//     cout <<"Altura promedio:";
//     cout <<promedio;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, n;
    float altura, suma, promedio;
    x = 1;
    suma = 0;
    cout << "Ingrese el numero de personas:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese altura:";
        cin >> altura;
        suma = suma + altura;
        x = x + 1;
    }
    promedio = suma / n;
    cout << "El promedio de las alturas es:";
    cout << promedio;
    return 0;
}