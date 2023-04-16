// #include <iostream>

// using namespace std;

// int main()
// {
//     int f;
//     for (f = 1; f <= 100; f++)
//     {
//         cout << f;
//         cout << "-";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
  int f, valor, negativos, positivos, multiplos, pares;
  negativos = 0;
  positivos = 0;
  multiplos = 0;
  pares = 0;
  for (f = 1; f <= 10; f++) {
    cout << "Ingrese valor numero ";
    cout << f;
    cout << ":";
    cin >> valor;
    if (valor < 0) {
      negativos++;
    } else {
      positivos++;
    }
    if (valor % 15 == 0) {
      multiplos++;
    } else {
      if (valor % 2 == 0) {
        pares++;
      }
    }
  }
  cout << "La cantidad de volores negativos es:" << negativos << "\n";
  cout << "La cantidad de volores positivos es:";
  cout << positivos;
  cout << "\n";
  cout << "La cantidad de volores multiplos de 15 es:";
  cout << multiplos;
  cout << "\n";
  cout << "La cantidad de volores pares es:";
  cout << pares;
  return 0;
}