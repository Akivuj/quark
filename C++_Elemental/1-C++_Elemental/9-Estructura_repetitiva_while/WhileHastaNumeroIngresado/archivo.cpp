// #include<iostream>

// using namespace std;

// int main()
// {
//     int n,x;
//     cout <<"Ingrese el valor final:";
//     cin >>n;
//     x=1;
//     while (x <= n)
//     {
//         cout <<x;
//         cout <<" - ";
//         x = x + 1;
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
        cout << " ";
        x++;
    }
    return 0;
}