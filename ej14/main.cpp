// Cálculo del área de un rectángulo
#include <iostream>

using namespace std;

float getArea(float height, float width) { return height * width; }
int main(int argc, char *argv[]) {
  float height, width;
  cout << "Introduce la base y la altura -> ";
  cin >> height >> width;
  cout << "El área es de: " << getArea(height, width) << "m²\n";
  return 0;
}
