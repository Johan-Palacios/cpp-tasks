// Utilizando arreglos (tamaño 10)
// cree un programa que cuente cuantos números son positivos, cuantos negativos
// y cuantos son ceros.
#include <iostream>
#include <tuple>

using namespace std;

std::tuple<int, int, int> numberType(float numbers[10]) {
  int positiveNumbers = 0, negativeNumbers = 0, zero = 0;
  for (int i = 0; i < 10; i++) {
    if (numbers[i] > 0)
      positiveNumbers++;
    else if (numbers[i] < 0)
      negativeNumbers++;
    else
      zero++;
  }
  return std::make_tuple(positiveNumbers, negativeNumbers, zero);
}

int main(int argc, char *argv[]) {
  float numbers[10] = {1, 2, 3, -4, 0, 1, -20, 99, -2, 5};
  int positive, negative, zero;
  std::tie(positive, negative, zero) = numberType(numbers);
  cout << "Hay " << positive << " numeros positivos\nHay " << negative
       << " numeros negativos\nHay " << zero << " numeros iguales a cero\n";
  return 0;
}
