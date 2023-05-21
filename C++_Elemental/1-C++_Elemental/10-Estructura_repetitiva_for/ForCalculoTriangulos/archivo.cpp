// #include<iostream>

// using namespace std;

// int main()
// {
//     int basetri,altura,superficie,cantidad,f,n;
//     cantidad=0;
//     cout <<"Cuantos triángulos procesará:";
//     cin >>n;
//     for(f=1; f <= n ;f++)
//     {
//         cout <<"Ingrese el valor de la base:";
//         cin >>basetri;
//         cout <<"Ingrese el valor de la altura:";
//         cin >>altura;
//         superficie=basetri*altura/2;
//         cout <<"La superficie es:";
//         cout <<superficie;
//         cout <<"\n";
//         if (superficie > 12)
//         {
//             cantidad=cantidad+1;
//         }
//     }
//     cout <<"La cantidad de triángulos con superficie superior a 12 son:";
//     cout <<cantidad;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, n, cantidad;
    float superficie, base, altura;
    cantidad = 0;
    cout << "Ingrese la cantidad de triangulos que analizara:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese la base del triangulo ";
        cout << f;
        cout << ":";
        cin >> base;
        cout << "Ingrese la altura del triangulo ";
        cout << f;
        cout << ":";
        cin >> altura;
        superficie = (base * altura) / 2;
        if (superficie > 12)
        {
            cantidad = cantidad + 1;
        }
        cout << "La base del triangulo ";
        cout << f;
        cout << " es:";
        cout << base;
        cout << "\n";
        cout << "La altura del triangulo ";
        cout << f;
        cout << " es:";
        cout << altura;
        cout << "\n";
        cout << "La superficie del triangulo ";
        cout << f;
        cout << " es:";
        cout << superficie;
        cout << "\n";
    }
    cout << "La cantidad de triangulos cuya superficie es mayor a 12 es:";
    cout << cantidad;
    return 0;
}