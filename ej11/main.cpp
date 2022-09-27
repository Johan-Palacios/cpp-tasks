// Construya el programa de la Minicálculadora utilizando módulos en Lenguaje
// C++. Debe tener las opciones de sumar, restar, multiplicar, dividir, módulo y
// potenciación (el primer número es la base y el segundo el exponente).

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// @Math
float addNumbers(float a, float b) { return a + b; }
float subtractNumbers(float a, float b) { return a - b; }
float multiplyNumbers(float a, float b) { return a * b; }
float divideNubers(float a, float b) { return a / b; }
float moduleNumbers(int a, int b) { return a % b; }
float powerNumbers(int a, int b) { return pow(a, b); }

// @Cosmetics
void displayMenu() {
  cout << "1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Modulo\n6."
          "Potencia\n7.Salir\n-> ";
}

string getValue(int menuSelection, float a, float b) {
  if (menuSelection == 1)
    return to_string(addNumbers(a, b));
  else if (menuSelection == 2)
    return to_string(subtractNumbers(a, b));
  else if (menuSelection == 3)
    return to_string(multiplyNumbers(a, b));
  else if (menuSelection == 4)
    return to_string(divideNubers(a, b));
  else if (menuSelection == 5)
    return to_string(moduleNumbers(a, b));
  else if (menuSelection == 6)
    return to_string(powerNumbers(a, b));
  else if (menuSelection == 7)
    return "Saliendo del programa";
  else
    return "Opción fuera de rango";
}

int main(int argc, char *argv[]) {
  float a, b;
  int menuSelection;
  bool continuar = true;
  cout << "Introduce el número A y B\n-> ";
  cin >> a >> b;
  do {
    displayMenu();
    cin >> menuSelection;
    cout << "\n\n--> " << getValue(menuSelection, a, b) << "\n\n";
  } while (menuSelection != 7);
  return 0;
}
