#include <iostream>
#include <string>


int main(int argc, char *argv[]) {

  // Definir un string de nombre name
  std::string name = "Pricila Barielle";
  std::string anotherName = "Rias Gremory";

  // Para saber el largo de una cadena se usa el metodo length()
  std::cout << "length " << name.length() << "\n";

  // Agregar un string,  indicando el inicio del string y el final con su indice
  name.append(anotherName, 4, 2);
  std::cout << "name es = " << name << "\n";

  // Permite borrar un rango del string, con un indice de inicio y fin
  name.erase(4, 9);
  std::cout << "El name es ahora: " << name << "\n";

  // Permite remplazar en un rango un string
  name.replace(0, 2, "Hola :D ");
  std::cout << "El name es ahora: " << name << "\n";

  // permite insertar un string en una posición
  name.insert(8, "Emanuel ");
  std::cout << "El name es ahora: " << name << "\n";

  // Extracción de subcadena
  std::string subcadena;
  subcadena = name.substr(0, 8);
  std::cout << "La subcadena es: " << subcadena << "\n";

  // Assign
  name.assign(anotherName, 0, 7);
  std::cout << "El name es ahora: " << name << "\n";

  // Swap
  name.swap(anotherName);
  std::cout << "El name es ahora: " << name << "\n";

  // Find
  bool valor = name.find("Pricila");
  if (valor)
    std::cout << "Valor no encontrado\n";
  else
    std::cout << "Se encontro subcadena\n";

  // Compare
  int comparation = name.compare(anotherName);
  if (comparation == 0)
    std::cout << "Iguales\n";
  else
    std::cout << "No Iguales\n";

  // Lectura de cadenas
  getline(std::cin, name);
  std::cout << name << "\n";
  return 0;
}
