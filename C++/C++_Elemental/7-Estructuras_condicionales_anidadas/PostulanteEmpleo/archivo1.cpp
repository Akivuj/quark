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
    int preguntas, aciertos, porcentaje;
    cout <<"Ingrese el numero de preguntas:";
    cin >> preguntas;
    cout <<"Ingrese el numero de aciertos:";
    cin >> aciertos;
    porcentaje = (aciertos * 100)/preguntas;
    if (porcentaje >= 90)
    {
        cout <<"Nivel maximo";
    }
    else
    {
        if (porcentaje >= 75)
        {
            cout <<"Nivel medio";
        }
        else
        {
            if (porcentaje >= 50)
            {
                cout <<"Nivel regular";
            }
            else
            {
                cout <<"Fuera de nivel";
            }
        }
    }
    return 0;
}