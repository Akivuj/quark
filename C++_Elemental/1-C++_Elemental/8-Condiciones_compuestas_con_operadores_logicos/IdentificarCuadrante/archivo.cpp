// #include<iostream>

// using namespace std;

// int main()
// {
//     int x, y;
//     cout <<"Ingrese coordenada x:";
//     cin >>x;
//     cout <<"Ingrese coordenada y:";
//     cin >>y;
//     if (x > 0 && y > 0)
//     {
//         cout <<"Se encuentra en el primer cuadrante";
//     }
//     else
//     {
//         if (x < 0 && y > 0)
//         {
//             cout <<"Se encuentra en el segundo cuadrante";
//         }
//         else
//         {
//             if (x < 0 && y < 0)
//             {
//                 cout <<"Se encuentra en el tercer cuadrante";
//             }
//             else
//             {
//                 cout <<"Se encuentra en el cuarto cuadrante";
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese la coordenada en x:";
    cin >> x;
    cout << "Ingrese la coordenada en y:";
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