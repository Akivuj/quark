// #include <iostream>

// using namespace std;

// int main()
// {
//     int f;
//     for (f = 1; f <= 100; f++)
//     {
//         cout << f;
//         cout << "-";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, n, cantidad;
    float superficie, base, altura;
    cantidad=0;
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
        if (superficie>12)
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
    cout<<"La cantidad de triangulos cuya superficie es mayor a 12 es:";
    cout<<cantidad;
    return 0;
}