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
    int n, x;
    x = 1;
    cout << "Ingrese el numero:";
    cin >> n;
    while (x <= n)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }
    return 0;
}