// Conversor de divisas a Quetzal
// Euro, dollar,yuan, yen
#include <iostream>

using namespace std;

void displayMenu()
{
    cout << "1. Quetzal a Euro\n2.Quetzal a Dolar\n3.Quetzal a yuan\n4. Quetzal a Yen\n5. Salir\n--> ";
}

float quetzalToEuro(float quetzal) { return quetzal * 7.67; }
float quetzalToDollar(float quetzal) { return quetzal * 7.81; }
float quetzalToYuan(float quetzal) { return quetzal * 1.11; }
float quetzalToYen(float quetzal) { return quetzal * 18.48; }

int main(int argc, char const *argv[])
{
    float amount;
    int option;
    displayMenu();
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Introduce la cantidad a convertir: ";
        cin >> amount;
        cout << "La Cantidad es de: " << quetzalToEuro(amount) << "\n";
        break;
    case 2:
        cout << "Introduce la cantidad a convertir: ";
        cin >> amount;
        cout << "La Cantidad es de: " << quetzalToDollar(amount) << "\n";
        break;
    case 3:
        cout << "Introduce la cantidad a convertir: ";
        cin >> amount;
        cout << "La Cantidad es de: " << quetzalToYuan(amount) << "\n";
        break;
    case 4:
        cout << "Introduce la cantidad a convertir: ";
        cin >> amount;
        cout << "La Cantidad es de: " << quetzalToYen(amount) << "\n";
        break;
    case 5:
        cout << "Saliendo del programa";
        exit(1);
        break;
    default:
        cout << "Opción fuera de rango";
        break;
    }
    return 0;
}
