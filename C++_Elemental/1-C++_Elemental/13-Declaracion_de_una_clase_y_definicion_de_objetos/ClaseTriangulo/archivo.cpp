// Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos: inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero o no.

// #include<iostream>

// using namespace std;

// class Triangulo {
// private:
//     int lado1,lado2,lado3;
// public:
//     void inicializar();
//     void ladoMayor();
//     void esEquilatero();
// };

// void Triangulo::inicializar()
// {
//     cout <<"Ingrese primer lado:";
//     cin >>lado1;
//     cout <<"Ingrese segundo lado:";
//     cin >>lado2;
//     cout <<"Ingrese tercer lado:";
//     cin >>lado3;
// }

// void Triangulo::ladoMayor()
// {
//     cout <<"Lado mayor:";
//     if (lado1 > lado2 && lado1 > lado3)
//     {
//         cout <<lado1;
//     }
//     else
//     {
//         if (lado2 > lado3)
//         {
//             cout <<lado2;
//         }
//         else
//         {
//             cout <<lado3;
//         }
//     }
//     cout <<"\n";
// }

// void Triangulo::esEquilatero()
// {
//     if (lado1==lado2 && lado1==lado3)
//     {
//         cout <<"Es un triangulo equilatero";
//     }
//     else
//     {
//         cout <<"No es un triangulo equilatero";
//     }
//     cin.get();
//     cin.get();
// }

// int main()
// {
//     Triangulo triangulo1;
//     triangulo1.inicializar();
//     triangulo1.ladoMayor();
//     triangulo1.esEquilatero();
//     return 0;
// }

#include <iostream>

using namespace std;

class Triangulo
{
private:
    int a, b, c;

public:
    void inicializar();
    void imprimir();
    void comprobacion();
};

void Triangulo::inicializar()
{
    cout << "Ingrese el lado a del triangulo:";
    cin >> a;
    cout << "Ingrese el lado b del triangulo:";
    cin >> b;
    cout << "Ingrese el lado c del triangulo:";
    cin >> c;
}

void Triangulo::imprimir()
{
    if (a > b && a > c)
    {
        cout << "El lado mayor mide: ";
        cout << a;
    }
    else if (b > c)
    {
        cout << "El lado mayor mide: ";
        cout << b;
    }
    else
    {
        cout << "El lado mayor mide: ";
        cout << c;
    }
    cout << "\n";
}

void Triangulo::comprobacion()
{
    if (a == b && a == c)
    {
        cout << "El triangulo es equilatero.";
    }
    else
    {
        cout << "El triangulo no es equilatero.";
    }
}

int main()
{
    Triangulo triangulo1;
    triangulo1.inicializar();
    triangulo1.imprimir();
    triangulo1.comprobacion();
    return 0;
}
