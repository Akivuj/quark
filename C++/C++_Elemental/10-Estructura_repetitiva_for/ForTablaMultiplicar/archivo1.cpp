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
    int f, n, multiplicacion;
    cout << "Ingrese numero:";
    cin >> n;
    for (f = 1; f <= 12; f++)
    {
        multiplicacion = n * f;
        cout << multiplicacion;
        cout << " ";
    }
    return 0;
}