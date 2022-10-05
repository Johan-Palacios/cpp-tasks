// Utilizando arreglos (tamaño 10) cree un programa que vaya verificando los
// números ingresados y que encuentre cuál es el mayor de todos
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int numbers[10] = {9, -10, 99990, 1000, 0, -1000, 2000000, 200, 101, 40};
  // se asume que el primer numero podría ser el mayor
  int maxNum = numbers[0];
  for (int i = 0; i < 10; i++) {
    maxNum = max(numbers[i], maxNum);
  }
  cout << maxNum << "\n";
  return 0;
}
