// Cálculo del área de un triángulo.
#include <iostream>

using namespace std;

float getArea(float base, float height) { return (base * height) / 2; }

int main(int argc, char *argv[]) {
  float base, height;
  cout << "Introduce la base y la altura del triangulo --> ";
  cin >> base >> height;
  cout << "El área es de: " << getArea(base,height) << "m²\n";
  return 0;
}
