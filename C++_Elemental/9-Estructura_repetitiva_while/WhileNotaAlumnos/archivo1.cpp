// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//     x = 2;
//     while (x <= 100)
//     {
//         cout << x;
//         cout << " - ";
//         x = x + 2;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, nota, mayores, menores;
    x = 1;
    mayores = 0;
    menores = 0;
    while (x <= 10)
    {
        cout << "Ingrese nota:";
        cin >> nota;
        if (nota >= 7)
        {
            mayores = mayores + 1;
        }
        else
        {
            menores = menores + 1;
        }
        x = x + 1;
    }
    cout << "Notas mayores o iguales a 7:";
    cout << mayores;
    cout << "\n";
    cout << "Notas menores a 7:";
    cout << menores;
    return 0;
}