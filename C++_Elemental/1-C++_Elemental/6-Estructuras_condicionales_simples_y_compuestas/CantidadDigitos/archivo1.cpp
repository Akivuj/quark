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

#include<iostream>

using namespace std;

int main()
{
    int num1;
    cout <<"Ingrese un numero entero positivo:";
    cin >>num1;
    if (num1 < 10)
    {
        cout <<"El numero tiene un digito";
    }
    else if (num1 < 100)
    {
        cout <<"El numero tiene dos digitos";
    }
    else
    {
        cout <<"El numero tiene mas de dos digitos";
    }
    return 0;
}
