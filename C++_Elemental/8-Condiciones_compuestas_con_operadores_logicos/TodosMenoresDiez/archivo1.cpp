// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1,num2,num3;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     cout <<"Ingrese tercer valor:";
//     cin >>num3;
//     if (num1 > num2 && num1 > num3) 
//     {
//         cout <<num1;
//     }
//     else 
//     {
//         if (num2 > num3) 
//         {
//             cout <<num2;
//         }
//         else
//         {
//             cout <<num3;
//         }
//     }    
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout <<"Ingrese el primer numero:";
    cin >> num1;    
    cout <<"Ingrese el segundo numero:";
    cin >> num2;    
    cout <<"Ingrese el tercer numero:";
    cin >> num3;
    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        cout <<"Todos los numeros son menores a diez";
    }
    return 0;
}