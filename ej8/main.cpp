#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // En esta parte de declaran las variables

  float nota, total, promedio;

  // Mensaje de bienvenida

  cout << "Promedio de notas C++\n";
  // En esta parte comienza el ciclo for para el registro de las 5 notas

  for (int i = 0; i < 5; i++) {
    // En esta parte se pide la nota del alumno

    cout << "Ingresa la nota " << (i + 1) << "\n";
    cout << "-> ";
    // Se lee la nota introducida por el usuario

    cin >> nota;
    // La nota se suma a la variable total

    total += nota;
  }

  // El calculo de promedio
  promedio = total / 5;

  // Se imprime directamente el resultado usando la fórmula de promedio,
  // se divide el total por el numero de notas registradas

  cout << "El promedio de notas es de " << promedio << "\n";

  return 0;
}
