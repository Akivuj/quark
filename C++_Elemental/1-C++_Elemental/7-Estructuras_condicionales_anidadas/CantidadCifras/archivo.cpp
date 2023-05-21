// #include<iostream>

// using namespace std;

// int main()
// {
//     int num;
//     cout <<"Ingrese un valor de hasta tres dígitos positivo:";
//     cin >>num;
//     if (num < 10)
//     {
//         cout <<"Tiene un dígito";
//     }
//     else
//     {
//         if (num < 100)
//         {
//             cout <<"Tiene dos dígitos";
//         }
//         else
//         {
//             if (num < 1000)
//             {
//                 cout <<"Tiene tres dígitos";
//             }
//             else
//             {
//                 cout <<"Error en la entrada de datos.";
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero entero positivo:";
    cin >> num;
    if (num < 10)
    {
        cout << "El numero es de una cifra";
    }
    else
    {
        if (num < 100)
        {
            cout << "El numero es de dos cifras";
        }
        else
        {
            if (num < 1000)
            {
                cout << "El numero es de tres cifras";
            }
            else
            {
                cout << "Error";
            }
        }
    }
    return 0;
}