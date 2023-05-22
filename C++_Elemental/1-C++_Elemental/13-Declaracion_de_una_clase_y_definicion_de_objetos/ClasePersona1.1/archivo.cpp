// Confeccionar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no

// #include <iostream>

// using namespace std;

// int main() {
//     char nombre[40];
//     int  edad;
//     cout << "Ingrese nombre:";
//     cin.getline(nombre, 40);
//     cout << "Ingrese edad:";
//     cin >> edad;
//     cout << "Nombre:";
//     cout << nombre;
//     cout << "\n";
//     cout << "Edad:";
//     cout << edad;
//     cout << "\n";
//     if (edad >= 18) {
//         cout << "Es mayor de edad.";
//     } else {
//         cout << "No es mayor de edad.";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    char nombre[40];
    int edad;
    cout << "Ingrese el nombre de la persona:";
    cin.getline(nombre, 40);
    cout << "Ingrese la edad de la persona:";
    cin >> edad;
    cout << "El nombre de la persona es:";
    cout << nombre;
    cout << "\n";
    cout << "La edad de la persona es:";
    cout << edad;
    cout << "\n";
    if (edad >= 18)
    {
        cout << "La persona es mayor de edad.";
    }
    else
    {
        cout << "La persona es menor de edad.";
    }
    return 0;
}
