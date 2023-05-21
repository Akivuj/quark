// #include<iostream>

// using namespace std;

// int main()
// {
//     int x,termino;
//     x=1;
//     termino=11;
//     while (x <= 25)
//     {
//         cout <<termino;
//         cout <<" - ";
//         x=x + 1;
//         termino=termino + 11;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, producto;
    x = 1;
    while (x <= 25)
    {
        producto = 11 * x;
        cout << producto;
        cout << " ";
        x = x + 1;
    }
    return 0;
}