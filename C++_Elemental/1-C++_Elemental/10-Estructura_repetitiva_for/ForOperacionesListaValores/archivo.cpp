// #include<iostream>

// using namespace std;

// int main()
// {
//     int f,valor,negativos,positivos,mult15,sumapares;
//     negativos=0;
//     positivos=0;
//     mult15=0;
//     sumapares=0;
//     for(f=1; f <= 10 ;f++)
//     {
//         cout <<"Ingrese valor:";
//         cin >>valor;
//         if (valor < 0)
//         {
//             negativos++;
//         }
//         else
//         {
//             if (valor>0)
//             {
//                 positivos++;
//             }
//         }
//         if (valor%15==0)
//         {
//             mult15++;
//         }
//         if (valor%2==0)
//         {
//             sumapares=sumapares+valor;
//         }
//     }
//     cout <<"Cantidad de valores negativos:";
//     cout <<negativos;
//     cout <<"\n";
//     cout <<"Cantidad de valores positivos:";
//     cout <<positivos;
//     cout <<"\n";
//     cout <<"Cantidad de valores múltiplos de 15:";
//     cout <<mult15;
//     cout <<"\n";
//     cout <<"Suma de los valores pares:";
//     cout <<sumapares;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
  int f, valor, negativos, positivos, multiplos, pares;
  negativos = 0;
  positivos = 0;
  multiplos = 0;
  pares = 0;
  for (f = 1; f <= 10; f++)
  {
    cout << "Ingrese valor numero ";
    cout << f;
    cout << ":";
    cin >> valor;
    if (valor < 0)
    {
      negativos++;
    }
    else
    {
      positivos++;
    }
    if (valor % 15 == 0)
    {
      multiplos++;
    }
    else
    {
      if (valor % 2 == 0)
      {
        pares++;
      }
    }
  }
  cout << "La cantidad de valores negativos es:" << negativos << "\n";
  cout << "La cantidad de valores positivos es:";
  cout << positivos;
  cout << "\n";
  cout << "La cantidad de valores multiplos de 15 es:";
  cout << multiplos;
  cout << "\n";
  cout << "La cantidad de valores pares es:";
  cout << pares;
  return 0;
}