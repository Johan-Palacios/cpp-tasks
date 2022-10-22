#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  struct persona {
    string nombre;
    int edad;
  };
  persona alumno[2];

  struct date {
    int day;
    int month;
    int year;

  };
  struct people {
    string name;
    int edad;
    date bornYear;
  };
  people personita[2];

  // for (int i = 0; i < 2; i++) {
  //   cout << "Ingrese el nombre: ";
  //   fflush(stdin);
  //   getline(cin, alumno[i].nombre);
  //   cout << "Igrese la edad: ";
  //   cin >> alumno[i].edad;
  // }

  for (int i = 0; i < 2; i++) {
    cout << "Ingrese el nombre persona: ";
    getline(cin,personita[i].name);
    cout << "Igrese la edad: ";
    cin >> personita[i].edad;
    cout << "día de nacimiento: ";
    cin >> personita[i].bornYear.day;
    cout << "Mes de nacimiento: ";
    cin >> personita[i].bornYear.month;
    cout << "Año de nacimiento: ";
    cin >> personita[i].bornYear.year;
    cin.ignore();
  }

  for (int i = 0; i < 2; i++) {
    cout << personita[i].name << "\n" << personita[i].edad << personita[i].bornYear.day << "\n";
  }
  return 0;
}
