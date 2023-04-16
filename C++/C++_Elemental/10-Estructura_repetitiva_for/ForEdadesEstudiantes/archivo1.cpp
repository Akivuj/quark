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
  int f, valor;
  float promedioma, promediota, promediono, manana, tarde, noche;
  manana = 0;
  tarde = 0;
  noche = 0;
  for (f = 1; f <= 5; f++) {
    cout << "Ingrese la edad de un estudiante del turno mañana:";
    cin >> valor;
    manana = manana + valor;
  }
  for (f = 6; f <= 11; f++) {
    cout << "Ingrese la edad de un estudiante del turno tarde:";
    cin >> valor;
    tarde = tarde + valor;
  }
  for (f = 12; f <= 23; f++) {
    cout << "Ingrese la edad de un estudiante del turno noche:";
    cin >> valor;
    noche = noche + valor;
  }
  promedioma = manana / 5;
  cout << "El promedio de edad del turno mañana es:";
  cout << promedioma;
  cout << "\n";
  promediota = tarde / 6;
  cout << "El promedio de edad del turno tarde es:";
  cout << promediota;
  cout << "\n";
  promediono = noche / 11;
  cout << "El promedio de edad del turno noche es:";
  cout << promediono;
  cout << "\n";
  if (promedioma > promediota && promedioma > promediono) {
    cout << "El turno mañana tiene el promedio de edades mayor";
  } else {
    if (promediota > promediono) {
      cout << "El turno tarde tiene el promedio de edades mayor";
    } else {
      cout << "El turno noche tiene el promedio de edades mayor";
    }
  }
  return 0;
}
