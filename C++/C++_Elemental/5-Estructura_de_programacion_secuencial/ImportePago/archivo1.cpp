// #include<iostream>

// using namespace std;

// int main()
// {
//     float horasTrabajadas;
//     float costoHora;
//     float sueldo;
//     cout <<"Ingrese Horas trabajadas por el operario:";
//     cin >>horasTrabajadas;
//     cout <<"Ingrese el pago por hora:";
//     cin >>costoHora;
//     sueldo = horasTrabajadas * costoHora;
//     cout <<"El sueldo total del operario es:";
//     cout <<sueldo;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main()
// {
//     int lado;
//     int superficie;
//     cout <<"Ingrese el valor del lado del cuadrado:";
//     cin >>lado;
//     superficie = lado * lado;
//     cout <<"La superficie del cuadrado es:";
//     cout <<superficie;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1, num2, suma, producto;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     suma = num1 + num2;
//     producto = num1 * num2;
//     cout <<"La suma de los dos valores es:";
//     cout <<suma;
//     cout <<"\n";
//     cout <<"El producto de los dos valores es:";
//     cout <<producto;
//     return 0;
// }

#include<iostream>

using namespace std;

int main()
{
    int precio, cantidad, abono;
    cout <<"Ingrese el precio del articulo:";
    cin >>precio;
    cout <<"Ingrese la cantidad de articulos:";
    cin >>cantidad;
    abono = precio * cantidad;
    cout <<"Total a pagar:";
    cout <<abono;
    return 0;
}