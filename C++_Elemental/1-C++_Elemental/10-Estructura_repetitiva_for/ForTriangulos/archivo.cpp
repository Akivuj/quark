// Realizar un programa que lea los lados de n triángulos, e informar:
// a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
// b) Cantidad de triángulos de cada tipo.
// c) Tipo de triángulo que posee menor cantidad.// #include<iostream>

// #include

// using namespace std;

// int main()
// {
//     int x, n;
//     int ladoA = 0, ladoB = 0, ladoC = 0, cantEqui = 0, cantIso = 0, cantEsca = 0;

//     cout << "Ingrese la cantidad de triangulos a procesar: ";
//     cin >> n;

//     for (x = 1; x <= n; x++)
//     {
//         cout << "\nIngrese el valor del Lado A: ";
//         cin >> ladoA;
//         cout << "Ingrese el valor del Lado B: ";
//         cin >> ladoB;
//         cout << "Ingrese el valor del Lado C: ";
//         cin >> ladoC;
//         if (ladoA == ladoB && ladoA == ladoC)
//         {
//             cout << "El triangulo procesado es Equilatero: " << "\n";
//             cantEqui++;
//         }
//         else
//         {
//             if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
//             {
//                 cout << "El triangulo procesado es Isosceles: " << "\n";
//                 cantIso++;
//             }
//             else
//             {
//                 cout << "El triangulo procesado es Escaleno: " << "\n";
//                 cantEsca++;
//             }
//         }
//     }
//     cout << "\n" << "Cantidad de triangulos Equilateros procesados: " << cantEqui << "\n";
//     cout << "Cantidad de triangulos Isosceles procesados: " << cantIso << "\n";
//     cout << "Cantidad de triangulos Escalenos procesados: " << cantEsca << "\n\n";

//     // Evaluar la triple igualdad
//     if (cantEqui == cantEsca && cantEqui == cantIso) cout << "\n" << "Tanto los triangulos Equilateros, Isosceles y Escaleno poseen la misma cantidad de triangulos";

//     // Evaluar la triple desigualdad
//     else if (cantEqui != cantEsca && cantEqui != cantIso && cantEsca != cantIso)
//     {
//         if (cantEqui < cantEsca && cantEqui < cantIso) cout << "Hay menos cantidad de triangulos Equilateros";
//         else if (cantEsca < cantIso) cout << "Hay menos cantidad de triangulos Escalenos";
//         else cout << "Hay menos cantidad de triangulos Isosceles";
//     }

//     // Evaluar igualdad parcial
//     else
//     {
//         if (cantEqui == cantEsca)
//         {
//             if (cantEqui < cantIso) cout << "La cantidad de triangulos Equilateros y Escalenos es igual y es la menor cantidad";
//             else cout << "Hay menos cantidad de triangulos Isosceles";
//         }
//         else if (cantEqui == cantIso)
//         {
//             if (cantEqui < cantEsca) cout << "La cantidad de triangulos Equilateros e Isosceles es igual y es la menor cantidad";
//             else cout << "Hay menos cantidad de triangulos Escalenos";
//         }
//         else
//         {
//             if (cantEsca < cantEqui) cout << "La cantidad de triangulos Escalenos e Isosceles es igual y es la menor cantidad";
//             else cout << "Hay menos cantidad de triangulos Equilateros";
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n, i, a, b, c, equi, esca, iso;
    equi = 0;
    esca = 0;
    iso = 0;
    cout << "Ingrese el numero de triangulos a analizar:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Ingrese el lado a del triangulo ";
        cout << i;
        cout << ":";
        cin >> a;
        cout << "Ingrese el lado b del triangulo ";
        cout << i;
        cout << ":";
        cin >> b;
        cout << "Ingrese el lado c del triangulo ";
        cout << i;
        cout << ":";
        cin >> c;
        if (a == b && a == c)
        {
            equi++;
            cout << "El triangulo es de tipo equilatero.";
            cout << "\n";
        }
        else if (a == b || a == c)
        {
            iso++;
            cout << "El triangulo es de tipo isosceles.";
            cout << "\n";
        }
        else
        {
            esca++;
            cout << "El triangulo es de tipo escaleno.";
            cout << "\n";
        }
    }
    cout << "Hay ";
    cout << equi;
    cout << " triangulos equilateros.";
    cout << "\n";
    cout << "Hay ";
    cout << iso;
    cout << " triangulos isosceles.";
    cout << "\n";
    cout << "Hay ";
    cout << esca;
    cout << " triangulos escalenos.";
    cout << "\n";
    if (equi == iso && equi == esca)
    {
        cout << "Hay la misma cantidad de triangulos equilateros, isosceles y escalenos.";
    }
    else if (equi < iso && equi < esca)
    {
        cout << "Hay menor cantidad de triangulos equilateros.";
    }
    else if (iso < esca)
    {
        cout << "Hay menor cantidad de triangulos isosceles.";
    }
    else
    {
        cout << "Hay menor cantidad de triangulos escalenos.";
    }
    return 0;
}
