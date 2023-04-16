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
    int f, n, a, b, c, equi, iso, esc, cantidad;
    equi = 0;
    iso = 0;
    esc = 0;
    cout << "Ingrese el numero de triangulos a analizar:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese el primer lado del triangulo:";
        cin >> a;
        cout << "Ingrese el segundo lado del triangulo:";
        cin >> b;
        cout << "Ingrese el tercer lado del triangulo:";
        cin >> c;
        if (a == b && a == c)
        {
            cout << "El triangulo es equilatero";
            equi = equi + 1;
        }
        else
        {
            if (a == b || a == c || b == c)
            {
                cout << "El triangulo es isosceles";
                iso = iso + 1;
            }
            else
            {
                cout << "El triangulo es escaleno";
                esc = esc + 1;
            }
        }
        cout << "\n";
    }
    cout << "Cantidad de triangulos equilateros:";
    cout << equi;
    cout << "\n";
    cout << "Cantidad de triangulos isosceles:";
    cout << iso;
    cout << "\n";
    cout << "Cantidad de triangulos escalenos:";
    cout << esc;
    cout << "\n";
    if (equi < iso && equi < esc)
    {
        cout << "Los de tipo equilatero son los menos";
    }
    else
    {
        if (iso < equi && iso < esc)
        {
            cout << "Los de tipo isosceles son los menos";
        }
        else
        {
            cout << "Los de tipo escaleno son los menos";
        }
    }
}