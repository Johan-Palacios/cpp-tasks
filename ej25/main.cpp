// Utilizando arreglos (tamaño 10) cree un programa que calcule la suma solo de
// los números que son pares.
#include <iostream>

using namespace std;

bool is_even(int number) { return number % 2 == 0; }

int main(int argc, char *argv[]) {
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int evenNumbers = 0;
  for (int i = 0; i < 10; i++) {
    if (is_even(numbers[i]))
      evenNumbers++;
  }
  cout << "Hay " << evenNumbers << " numeros pares\n";
  return 0;
}
