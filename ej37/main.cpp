#include <iostream>

int factorial(int n) {
  if (n > 1)
    // Recursividad, se llama la función a sí misma durante su ejecución
    return n * factorial(n - 1);
  else
    return 1;
}

int main(int argc, char *argv[]) {
  int number = 4;
  // Se usa la fución
  factorial(number);
  return 0;
}
