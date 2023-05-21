// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     if (num1 > num2)
//     {
//         cout <<num1;
//     }
//     else
//     {
//         cout <<num2;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero:";
    cin >> num1;
    cout << "Ingrese el segundo numero:";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "El primer numero es el mayor.";
    }
    else if (num1 == num2)
    {
        cout << "Los numeros son iguales.";
    }
    else
    {
        cout << "El segundo numero es el mayor.";
        return 0;
    }
}