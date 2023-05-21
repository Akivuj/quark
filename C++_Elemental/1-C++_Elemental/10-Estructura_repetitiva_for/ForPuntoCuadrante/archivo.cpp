// #include<iostream>

// using namespace std;

// int main()
// {
//     int n,f,x,y,cant1,cant2,cant3,cant4;
//     cant1=0;
//     cant2=0;
//     cant3=0;
//     cant4=0;
//     cout <<"Cantidad de puntos:";
//     cin >>n;
//     for(f=1; f <= n ;f++)
//     {
//         cout <<"Ingrese coordenada x:";
//         cin >>x;
//         cout <<"Ingrese coordenada y:";
//         cin >>y;
//         if (x > 0 && y > 0)
//         {
//             cant1++;
//         }
//         else
//         {
//             if (x < 0 && y > 0)
//             {
//                 cant2++;
//             }
//             else
//             {
//                 if (x < 0 && y < 0)
//                 {
//                     cant3++;
//                 }
//                 else
//                 {
//                     if (x > 0 && y < 0)
//                     {
//                         cant4++;
//                     }
//                 }
//             }
//         }
//     }
//     cout <<"Cantidad de puntos en el primer cuadrante:";
//     cout <<cant1;
//     cout <<"\n";
//     cout <<"Cantidad de puntos en el segundo cuadrante:";
//     cout <<cant2;
//     cout <<"\n";
//     cout <<"Cantidad de puntos en el tercer cuadrante:";
//     cout <<cant3;
//     cout <<"\n";
//     cout <<"Cantidad de puntos en el cuarto cuadrante:";
//     cout <<cant4;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int f, n, x, y, primer, segundo, tercer, cuarto;
    primer = 0;
    segundo = 0;
    tercer = 0;
    cuarto = 0;
    cout << "Ingrese cantidad de puntos a procesar:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese coordenada x del punto ";
        cout << f;
        cout << ":";
        cin >> x;
        cout << "Ingrese coordenada y del punto ";
        cout << f;
        cout << ":";
        cin >> y;
        if (x > 0 && y > 0)
        {
            primer++;
        }
        else
        {
            if (x > 0 && y < 0)
            {
                segundo++;
            }
            else
            {
                if (x < 0 && y < 0)
                {
                    tercer++;
                }
                else
                {
                    cuarto++;
                }
            }
        }
    }
    cout << "Puntos ingresados en el primer cuadrante:";
    cout << primer;
    cout << "\n";
    cout << "Puntos ingresados en el segundo cuadrante:";
    cout << segundo;
    cout << "\n";
    cout << "Puntos ingresados en el tercer cuadrante:";
    cout << tercer;
    cout << "\n";
    cout << "Puntos ingresados en el cuarto cuadrante:";
    cout << cuarto;
    return 0;
}