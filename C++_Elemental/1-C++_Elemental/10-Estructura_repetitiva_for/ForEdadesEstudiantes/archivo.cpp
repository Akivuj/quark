// #include<iostream>

// using namespace std;

// int main()
// {
//     int f,edad,suma1,suma2,suma3,pro1,pro2,pro3;
//     suma1=0;
//     suma2=0;
//     suma3=0;
//     for(f=1; f <= 5 ;f++)
//     {
//         cout <<"Ingrese edad:";
//         cin >>edad;
//         suma1=suma1+edad;
//     }
//     pro1=suma1/5;
//     cout <<"Promedio de edades del turno mañana:";
//     cout <<pro1;
//     cout <<"\n";
//     for(f=1; f <= 6 ;f++)
//     {
//         cout <<"Ingrese edad:";
//         cin >>edad;
//         suma2=suma2+edad;
//     }
//     pro2=suma2/6;
//     cout <<"Promedio de edades del turno tarde:";
//     cout <<pro2;
//     cout <<"\n";
//     for(f=1; f <= 11 ;f++)
//     {
//         cout <<"Ingrese edad:";
//         cin >>edad;
//         suma3=suma3+edad;
//     }
//     pro3=suma3/11;
//     cout <<"Promedio de edades del turno noche:";
//     cout <<pro3;
//     cout <<"\n";
//     if (pro1 < pro2 && pro1 < pro3)
//     {
//         cout <<"El turno mañana tiene un promedio menor de edades.";
//     }
//     else
//     {
//         if (pro2 < pro3)
//         {
//             cout <<"El turno tarde tiene un promedio menor de edades.";
//         }
//         else
//         {
//             cout <<"El turno noche tiene un promedio menor de edades.";
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
  int f, valor;
  float promedioma, promediota, promediono, manana, tarde, noche;
  manana = 0;
  tarde = 0;
  noche = 0;
  for (f = 1; f <= 5; f++)
  {
    cout << "Ingrese la edad de un estudiante del turno mañana:";
    cin >> valor;
    manana = manana + valor;
  }
  for (f = 6; f <= 11; f++)
  {
    cout << "Ingrese la edad de un estudiante del turno tarde:";
    cin >> valor;
    tarde = tarde + valor;
  }
  for (f = 12; f <= 23; f++)
  {
    cout << "Ingrese la edad de un estudiante del turno noche:";
    cin >> valor;
    noche = noche + valor;
  }
  promedioma = manana / 5;
  cout << "El promedio de edad del turno mañana es:";
  cout << promedioma;
  cout << "\n";
  promediota = tarde / 6;
  cout << "El promedio de edad del turno tarde es:";
  cout << promediota;
  cout << "\n";
  promediono = noche / 11;
  cout << "El promedio de edad del turno noche es:";
  cout << promediono;
  cout << "\n";
  if (promedioma > promediota && promedioma > promediono)
  {
    cout << "El turno mañana tiene el promedio de edades mayor";
  }
  else
  {
    if (promediota > promediono)
    {
      cout << "El turno tarde tiene el promedio de edades mayor";
    }
    else
    {
      cout << "El turno noche tiene el promedio de edades mayor";
    }
  }
  return 0;
}
