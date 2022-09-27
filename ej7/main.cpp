#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  float a, b, resultado;
  int menu;
  cout << "Calculadora C++ \n";
  cout << "Introduce el primer número\n-> ";
  cin >> a;
  cout << "Introduce el segundo número\n-> ";
  cin >> b;
  cout << "1. Suma\n2. Resta\n3. Multiplicación\n4. División\n-> ";
  cin >> menu;

  switch (menu) {
  case 1:
    resultado = a + b;
    cout << "El resultado de la suma es: " << resultado << "\n";
    break;
  case 2:
    resultado = a - b;
    cout << "El resultado de la resta es: " << resultado << "\n";
    break;
  case 3:
    resultado = a * b;
    cout << "El resultado de la multiplicación es: " << resultado << "\n";
    break;
  case 4:
    resultado = a / b;
    cout << "El resultado de la división es: " << resultado << "\n";
    break;
  default:
    cout << "Opción no válida\n";
    break;
  }
  return 0;
}
