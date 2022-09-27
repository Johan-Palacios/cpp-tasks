#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int menu;
  float a, b, resultado;

  cout << "1. Suma\n2. Resta\n\n-> ";
  cin >> menu;

  switch (menu) {
  case 1:
    cout << "Ingresa los dos números para sumar [a b]: \n-> ";
    cin >> a >> b;
    cout << "El resultado es de: " << a + b << "\n";
    break;
  case 2:
    cout << "Ingresa los dos números para restar [a b]: \n-> ";
    cin >> a >> b;
    cout << "El resultado es de: " << a - b << "\n";
    break;
  default:
    cout << "Opción inválida\n";
    break;
  }

  return 0;
}
