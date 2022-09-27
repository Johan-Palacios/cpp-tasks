// Conversión de dólares a quetzales.

#include <iostream>

using namespace std;

float toQuetzal(float amount) { return amount * 7.79; }
float toDollar(float amount) { return amount / 7.79; }
void displayMenu() {
  cout << "1.Convertir dollar a quetzal\n2.Convertir Queztal a "
          "Dollar\n3.Salir\n--> ";
}

int main(int argc, char *argv[]) {
  int option;
  float amount;
  do {
    displayMenu();
    cin >> option;
    switch (option) {
    case 1:
      cout << "Introduce la cantidad en $. ";
      cin >> amount;
      cout << "Q. " << toQuetzal(amount)<< "\n";
      break;
    case 2:
      cout << "Introduce la cantidad en Q. ";
      cin >> amount;
      cout << "$. " << toDollar(amount) << "\n";
      break;
    case 3:
      cout << "Saliendo ...\n";
      break;
    default:
      cout << "Opción fuera de rango\n";
      break;
    }
  } while (option != 3);
  return 0;
}
