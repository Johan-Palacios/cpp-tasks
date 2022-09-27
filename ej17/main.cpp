// Promedio de notas.

#include <iostream>

using namespace std;

float getGrades(int numberGrades) {
  float grade, total = 0;
  for (int i = 0; i < numberGrades; i++) {
    cout << "Introduce la nota -> ";
    cin >> grade;
    total += grade;
  }
  return total;
}

float average(float total, float numberGrades) { return total / numberGrades; }

int main(int argc, char *argv[]) {
  int numberGrades;
  cout << "Introduce el numero de notas a ingresar --> ";
  cin >> numberGrades;
  float total = getGrades(numberGrades);
  cout << "El promedio es: " << average(total, numberGrades) << "\n";
  return 0;
}
