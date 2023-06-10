// Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos: cargar el valor de su lado, imprimir su perímetro y su superficie.

// #include<iostream>

// using namespace std;

// class Cuadrado {
// private:
//     int lado;
// public:
//     void inicializar();
//     void imprimirPerimetro();
//     void imprimirSuperficie();
// };

// void Cuadrado::inicializar()
// {
//     cout <<"Ingrese el valor del lado:";
//     cin >>lado;
// }

// void Cuadrado::imprimirPerimetro()
// {
//     int perimetro;
//     perimetro=lado*4;
//     cout <<"El perimetro es ";
//     cout <<perimetro;
//     cout <<"\n";
// }

// void Cuadrado::imprimirSuperficie()
// {
//     int superficie;
//     superficie=lado*lado;
//     cout <<"La superficie es ";
//     cout <<superficie;
// }

// int main()
// {
//     Cuadrado cuadrado1;
//     cuadrado1.inicializar();
//     cuadrado1.imprimirPerimetro();
//     cuadrado1.imprimirSuperficie();
//     return 0;
// }

#include <iostream>

using namespace std;

class Cuadrado
{
private:
    int lado, perimetro, superficie;

public:
    void inicializar();
    void imprimir();
};

void Cuadrado::inicializar()
{
    cout << "Ingrese el lado del cuadrado:";
    cin >> lado;
    perimetro = lado * 4;
    superficie = lado * lado;
}

void Cuadrado::imprimir()
{
    cout << "El perimetro del cuadrado es: ";
    cout << perimetro;
    cout << "\n";
    cout << "La superficie del cuadrado es: ";
    cout << superficie;
}

int main()
{
    Cuadrado cuadrado;
    cuadrado.inicializar();
    cuadrado.imprimir();
    return 0;
}
