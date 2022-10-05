#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  const int colum = 3;
  const int row = 2;
  float gradeCounter;
  float average;
  int grade = 0;
  int grades[row][colum];
  for (int i = 0; i < row; i++) {
    gradeCounter = 0;
    average = 0;
    cout << "grado No. " << (i + 1) << "\n";
    for (int j = 0; j < colum; j++) {
      cout << "Introduce la nota: \n--> ";
      cin >> grade;
      grades[i][j] = grade;
      gradeCounter += grade;
    }
    average = gradeCounter / colum;
    cout << "La nota del grado No." << (i + 1)
         << " tiene un promedio de: " << average << " pts. y un total de "
         << gradeCounter << " pts. por grado\n";
  }
  return 0;
}
