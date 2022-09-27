// Conversión de grados fahrenheit a centígrados.
#include <iostream>

using namespace std;

float toCelcius(float degrees) { return (degrees - 32) * 5 / 9; }
float toFareheit(float degrees) { return (degrees * 9 / 5) + 32; }
void displayMenu() {
  cout << "1.Convertir Fahrenheit a Grados Celcius\n2.Convertir Celcius a "
          "Fahrenheit\n3.Salir\n--> ";
}

int main(int argc, char *argv[]) {
  int option;
  float degrees;
  do {
    displayMenu();
    cin >> option;
    switch (option) {
    case 1:
      cout << "Ingrese los grados -> ";
      cin >> degrees;
      cout << "Resultado: " << toCelcius(degrees) << "\n";
      break;
    case 2:
      cout << "Ingrese los grados -> ";
      cin >> degrees;
      cout << "Resultado: " << toFareheit(degrees) << "\n";
      break;
    case 3:
      cout << "Saliendo...\n";
      break;
    default:
      cout << "Opción fuera de rango\n";
      break;
    }
  } while (option != 3);
  return 0;
}
