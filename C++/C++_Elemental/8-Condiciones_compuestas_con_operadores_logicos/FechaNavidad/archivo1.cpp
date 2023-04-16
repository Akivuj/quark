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

#include<iostream>

using namespace std;

int main()
{
    int dia, mes, ano;
    cout <<"Ingrese el numero de dia:";
    cin >> dia;
    cout <<"Ingrese el numero de mes:";
    cin >> mes;
    cout <<"Ingrese el numero de año:";
    cin >> ano;
    if (dia == 24 && mes == 12)
    {
        cout <<"Es navidad";
    }
    else
    {
        cout <<"No es navidad";
    }
    return 0;
}