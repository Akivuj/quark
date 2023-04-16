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
    float num1, num2, num3, promedio;
    cout <<"Ingrese la primer nota:";
    cin >>num1;
    cout <<"Ingrese la segunda nota:";
    cin >>num2;  
    cout <<"Ingrese la tercer nota:";
    cin >>num3;
    promedio = (num1 + num2 + num3)/3;
    if (promedio >= 7)
    {
        cout <<"Promocionado";
    }
    return 0;
}