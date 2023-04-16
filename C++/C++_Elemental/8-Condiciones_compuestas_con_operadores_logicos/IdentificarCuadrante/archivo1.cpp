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
    int x, y;
    cout <<"Ingrese la coordenada en x:";
    cin >> x;
    cout <<"Ingrese la coordenada en y:";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "Primer cuadrante";
    }
    else
    {
       if (x > 0 && y < 0)
       {
        cout << "Segundo cuadrante";
       }
       else
       {
        if (x < 0 && y < 0)
        {
            cout << "Tercer cuadrante";
        }
        else
        {
            cout << "Cuarto cuadrante";
        }
       }
    }
    return 0;
}