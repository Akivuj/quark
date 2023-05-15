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
    float num1, num2, num3, num4, suma, promedio;
    cout <<"Ingrese primer numero:";
    cin >>num1;
    cout <<"Ingrese segundo numero:";
    cin >>num2;    
    cout <<"Ingrese tercer numero:";
    cin >>num3;    
    cout <<"Ingrese cuarto numero:";
    cin >>num4;
    suma = num1 + num2 + num3 + num4;
    promedio = suma/4;
    cout <<"La suma de los cuatro numeros es:";
    cout <<suma;
    cout <<"\n";
    cout <<"El promedio de los cuatro numeros es:";
    cout <<promedio;
    return 0;
}