// Se pide un numero y se escribe en pantalla si es positivo o no

#include <iostream>

using namespace std;

// @param any float number
bool isPositive(float number) { return number > 0; }

int main(int argc, char *argv[]) {
  int number;
  cout << "Ingrese un numero: ";
  cin >> number;
  if (isPositive(number))
    cout << "Es positivo\n";
  else
    cout << "No es positivo\n";
  return 0;
}
