// #include<iostream>

// using namespace std;

// int main()
// {
//     int f,valor;
//     cout <<"Ingrese un valor entre 1 y 10:";
//     cin >>valor;
//     for(f=valor; f <= valor*12 ;f=f+valor)
//     {
//         cout <<f;
//         cout <<"-";
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