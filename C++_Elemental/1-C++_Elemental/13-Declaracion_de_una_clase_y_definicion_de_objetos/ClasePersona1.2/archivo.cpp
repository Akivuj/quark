// Confeccionar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no

// #include <iostream>

// using namespace std;

// class Persona {
// private:
//     char nombre[40];
//     int edad;
// public:
//     void inicializar();
//     void imprimir();
//     void esMayorEdad();
// };

// void Persona::inicializar()
// {
//     cout <<"Ingrese nombre:";
//     cin.getline(nombre,40);
//     cout <<"Ingrese edad:";
//     cin >>edad;
// }

// void Persona::imprimir()
// {
//     cout <<"Nombre:";
//     cout <<nombre;
//     cout <<"\n";
//     cout <<"Edad:";
//     cout <<edad;
//     cout <<"\n";
// }

// void Persona::esMayorEdad()
// {
//     if (edad>=18)
//     {
//         cout <<"Es mayor de edad.";
//     }
//     else
//     {
//         cout <<"No es mayor de edad.";
//     }
//     cin.get();
//     cin.get();
// }

// int main()
// {
//     Persona persona1;
//     persona1.inicializar();
//     persona1.imprimir();
//     persona1.esMayorEdad();
//     return 0;
// }

#include <iostream>

using namespace std;

class Persona
{
private:
    char nombre[40];
    int edad;

public:
    void inicializar();
    void imprimir();
    void esmayordeedad();
};

void Persona::inicializar()
{
    cout << "Ingrese el nombre de la persona:";
    cin.getline(nombre, 40);
    cout << "Ingrese la edad de la persona:";
    cin >> edad;
}

void Persona::imprimir()
{
    cout << "El nombre de la persona es: ";
    cout << nombre;
    cout << "\n";
    cout << "La edad de la persona es: ";
    cout << edad;
    cout << "\n";
}

void Persona::esmayordeedad()
{
    if (edad >= 18)
    {
        cout << "La persona es mayor de edad";
    }
    else
    {
        cout << "La persona es menor de edad";
    }
}

int main()
{
    Persona persona1;
    persona1.inicializar();
    persona1.imprimir();
    persona1.esmayordeedad();
    return 0;
}
