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

int main ()
{
    int sueldo, antiguedad;
    cout << "Ingrese sueldo actual:";
    cin >> sueldo;    
    cout << "Ingrese antiguedad en años:";
    cin >> antiguedad;
    if (sueldo < 500 && antiguedad >= 10)
    {
        sueldo = 500 * 1.20;
        cout << "El sueldo actualizado es:";
        cout << sueldo;
    }
    else
    {
        if (sueldo < 500 && antiguedad < 10)
        {
            sueldo = 500 * 1.05;
            cout << "El sueldo actualizado es:";
            cout << sueldo;
        }
        else
        {
            cout << "El sueldo actualizado es:";
            cout << sueldo;
        }
    }
    return 0;
}