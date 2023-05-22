// Confeccionar un programa que defina una cadena de caracteres para almacenar el nombre y apellido de una persona. La carga del dato hacerla por teclado.// #include<iostream>

// #include <iostream>

// using namespace std;

// int main()
// {
//     char nombre[40];
//     cout <<"Ingrese su nombre:";
//     cin.getline(nombre,40);
//     cout <<"El nombre ingresado es:";
//     cout <<nombre;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    char nombre[40], apellido[40];
    cout << "Ingrese el nombre de la persona:";
    cin.getline(nombre, 40);
    cout << "Ingrese el apellido de la persona:";
    cin.getline(apellido, 40);
    cout << "El nombre completo de la persona es:";
    cout << nombre;
    cout << " ";
    cout << apellido;
    return 0;
}
