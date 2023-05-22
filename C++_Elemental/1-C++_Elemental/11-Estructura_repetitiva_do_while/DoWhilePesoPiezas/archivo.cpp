// Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
// a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, cuántas con más de 10.2 Kg.? y cuántas con menos de 9.8 Kg.?
// b) La cantidad total de piezas procesadas.

// #include<iostream>

// using namespace std;

// int main()
// {
//     int cant1,cant2,cant3,suma;
//     float peso;
//     cant1=0;
//     cant2=0;
//     cant3=0;
//     do {
//         cout <<"Ingrese el peso de la pieza (0 pera finalizar):";
//         cin >>peso;
//         if (peso > 10.2)
//         {
//             cant1++;
//         }
//         else
//         {
//             if (peso >= 9.8)
//             {
//                 cant2++;
//             }
//             else
//             {
//                 if (peso > 0)
//                 {
//                     cant3++;
//                 }
//             }
//         }
//     } while(peso!=0);
//     suma=cant1+cant2+cant3;
//     cout <<"Piezas aptas:";
//     cout <<cant2;
//     cout <<"\n";
//     cout <<"Piezas con un peso superior a 10.2:";
//     cout <<cant1;
//     cout <<"\n";
//     cout <<"Piezas con un peso inferior a 9.8:";
//     cout <<cant3;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int menos, intermedio, mas, total;
    float peso;
    menos = 0;
    intermedio = 0;
    mas = 0;
    total = 0;
    do
    {
        cout << "Ingrese el peso de la pieza (0 para finalizar):";
        cin >> peso;
        if (peso != 0)
        {
            if (peso < 9.8)
            {
                menos++;
                total++;
            }
            else if (peso > 10.2)
            {
                mas++;
                total++;
            }
            else
            {
                intermedio++;
                total++;
            }
        }
    } while (peso != 0);
    cout << "Piezas que pesan menos de 9.8kg: ";
    cout << menos;
    cout << "\n";
    cout << "Piezas que pesan entre 9.8kg y 10.2kg: ";
    cout << intermedio;
    cout << "\n";
    cout << "Piezas que pesan mas de 10.2kg: ";
    cout << mas;
    cout << "\n";
    cout << "Piezas procesadas: ";
    cout << total;
    return 0;
}