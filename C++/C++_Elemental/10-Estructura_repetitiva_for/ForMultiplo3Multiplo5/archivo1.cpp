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
    int f, valor, _3, _5;
    _3 = 0;
    _5 = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese valor:";
        cin >> valor;
        if (valor % 3 == 0)
        {
            _3 = _3 + 1;
        }
        if (valor % 5 == 0)
        {
            _5 = _5 + 1;
        }
    }
    cout << "Los valores multiplos de 3 son:";
    cout << _3;
    cout << "\n";
    cout << "Los valores multiplos de 5 son:";
    cout << _5;
    return 0;
}