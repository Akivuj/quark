// #include<iostream>

// using namespace std;

// int main()
// {
//     int num;
//     cout <<"Ingrese un valor:";
//     cin >>num;
//     if (num == 0)
//     {
//         cout <<"Se ingresó el cero";
//     }
//     else
//     {
//         if (num > 0)
//         {
//             cout <<"Se ingresó un valor positivo";
//         }
//         else
//         {
//             cout <<"Se ingresó un valor negativo";
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero entero:";
    cin >> num;
    if (num > 0)
    {
        cout << "El numero es positivo";
    }
    else
    {
        if (num < 0)
        {
            cout << "El numero es negativo";
        }
        else
        {
            cout << "El numeros es nulo";
        }
    }
    return 0;
}