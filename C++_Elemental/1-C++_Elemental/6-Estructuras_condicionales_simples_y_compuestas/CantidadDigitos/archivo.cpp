// #include<iostream>

// using namespace std;

// int main()
// {
//     int num;
//     cout <<"Ingrese un valor entero de 1 o 2 dígitos:";
//     cin >>num;
//     if (num < 10)
//     {
//         cout <<"Tiene un dígito";
//     }
//     else
//     {
//         cout <<"Tiene dos dígitos";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Ingrese un numero entero positivo:";
    cin >> num1;
    if (num1 < 10)
    {
        cout << "El numero tiene un digito";
    }
    else if (num1 < 100)
    {
        cout << "El numero tiene dos digitos";
    }
    else
    {
        cout << "El numero tiene mas de dos digitos";
    }
    return 0;
}
