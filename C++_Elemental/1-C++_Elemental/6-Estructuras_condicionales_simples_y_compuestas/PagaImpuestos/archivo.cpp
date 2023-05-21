// #include<iostream>

// using namespace std;

// int main()
// {
//     float sueldo;
//     cout <<"Ingrese el sueldo:";
//     cin >>sueldo;
//     if (sueldo>3000)
//     {
//         cout <<"Esta persona debe abonar impuestos";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int sueldo;
    cout << "Ingrese sueldo:";
    cin >> sueldo;
    if (sueldo > 3000)
    {
        cout << "Usted debe abonar impuestos.";
    }
    else
    {
        cout << "Usted no debe abonar impuestos.";
    }
    return 0;
}