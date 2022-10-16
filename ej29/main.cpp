#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string nombre = "Johan Palacios";
  cout << "El largo de la cadena es: " << nombre.length() << "\n";

  string otroNombre = "Pricila Barielle";
  // Append
  nombre.append(otroNombre, 4, 2);
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Erase
  nombre.erase(4, 9);
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Replace
  nombre.replace(0, 2, "Hola :D ");
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Insert
  nombre.insert(8, "Emanuel ");
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Extracción de subcadena
  string subcadena;
  subcadena = nombre.substr(0, 8);
  cout << "La subcadena es: " << subcadena << "\n";

  // Assign
  nombre.assign(otroNombre, 0, 7);
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Swap
  nombre.swap(otroNombre);
  cout << "El nombre 1 es ahora: " << nombre << "\n";

  // Find
  bool valor = nombre.find("Pricila");
  if (valor)
    cout << "Valor no encontrado\n";
  else
    cout << "Se encontro subcadena\n";

  // Compare
  int comparation = nombre.compare(otroNombre);
  if (comparation == 0)
    cout << "Iguales\n";
  else
    cout << "No Iguales\n";

  // Lectura de cadenas
  getline(cin, nombre);
  cout << nombre << "\n";
  return 0;
}
