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
    float num1, num2, suma, diferencia, producto, division;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
    if (num1 > num2)
    {
        suma = num1 + num2;
        diferencia = num1 - num2;
        cout <<"La suma de los dos valores es:";
        cout <<suma;
        cout <<"\n";
        cout <<"La diferencia de los dos valores es:";
        cout <<diferencia;
    }
    else
    {
        producto = num1 * num2;
        division = num1 / num2;
        cout <<"El producto de los dos valores es:";
        cout <<producto;
        cout <<"\n";
        cout <<"La division de los dos valores es:";
        cout <<division;
    }
    return 0;
}