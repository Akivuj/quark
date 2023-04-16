// #include<iostream>

// using namespace std;

// int main()
// {
//     int nota1,nota2,nota3;
//     cout <<"Ingrese primer nota:";
//     cin >>nota1;
//     cout <<"Ingrese segunda nota:";
//     cin >>nota2;
//     cout <<"Ingrese tercer nota:";
//     cin >>nota3;
//     int promedio=(nota1 + nota2 + nota3) / 3;
//     if (promedio >= 7) 
//     {
//         cout <<"Promocionado";    
//     } 
//     else 
//     {
//         if (promedio >= 4) 
//         {
//             cout <<"Regular";
//         }
//         else 
//         {
//             cout <<"Reprobado";
//         }
//     }
//     return 0;
// }

#include<iostream>

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
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1;
        }
        else
        {
            cout << num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }
    return 0;
}