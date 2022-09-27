#include <iostream>

using namespace std;

// @param grade:Integer positive
char gradeToLetter(int grade) {
  if (grade >= 90 && grade <= 100)
    return 'A';
  else if (grade >= 80 && grade < 90)
    return 'B';
  else if (grade >= 70 && grade < 80)
    return 'C';
  else if (grade >= 60 && grade < 70)
    return 'D';
  else if (grade >= 0 && grade < 60)
    return 'E';
  else
    cout << "Nota fuera de rango, ERR-";
    return 'I';
}

int main(int argc, char *argv[]) {
  float grade;
  cout << "Cual es tu nota? ";
  cin >> grade;
  cout << gradeToLetter(grade) << "\n";
  return 0;
}
