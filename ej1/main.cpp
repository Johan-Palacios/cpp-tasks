#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // Cálculo de area y perimetro de un rectángulo
  float base, altura, area, perimetro;
  cout << "Ingrese base: ";
  cin >> base;
  cout << "Ingrese altura: ";
  cin >> altura;
  area = base * altura;
  perimetro = 2 * (base + altura);
  cout << "El area del rectangulo es: " << area << "\n";
  cout << "El perimetro del rectangulo es: " << perimetro << "\n";
  return 0;
}
