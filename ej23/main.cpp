// Cálculo del área de un triángulo.
#include <iostream>

using namespace std;

bool isPositive(float number) { return number > 0; }

int main(int argc, char *argv[]) {
  int counter = 0;
  float positiveNumbers[10] = {1, -10, 5, 10, 90, -10, 10, 11, -20, 1001};
  int size = sizeof(positiveNumbers) / sizeof(float);
  for (int i = 0; i < size; i++) {
    if (isPositive(positiveNumbers[i])) {
      counter += 1;
    }
  }
  cout << counter << "\n";
  return 0;
}
