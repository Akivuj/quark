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
#include <cstring>

using namespace std;

int main() {
    char cadena1[40], cadena2[40];
    cout << "Ingrese la primer palabra:";
    cin.getline(cadena1, 40);
    cout << "Ingrese la segunda palabra:";
    cin.getline(cadena2, 40);
    if (strcmp(cadena1, cadena2) == 0) {
        cout << "Las dos palabras son iguales alfabeticamente.";
    } else if (strcmp(cadena1, cadena2) > 0) {
        cout << "Las primer palabra ingresada es mayor alfabeticamente.";
    } else {
        cout << "Las segunda palabra ingresada es mayor alfabeticamente.";
    }
    return 0;
}
