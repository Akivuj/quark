// #include<iostream>

// using namespace std;

// int main()
// {
//     char mes1[20]="enero";
//     char mes2[20]="febrero";
//     cout <<mes1;
//     cout <<"\n";
//     cout <<mes2;
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
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
