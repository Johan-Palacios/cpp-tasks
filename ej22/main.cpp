// •	Un programa que esté pidiendo números positivos hasta que se ingrese un -1
// (señal de fin de ciclo). Antes de terminar debe indicar el promedio de los números ingresados.

#include <iostream>

using namespace std;

bool isPositive(float number) { return number > 0; }
bool isExit(int number) { return number == -1; }

int main(int argc, char const *argv[])
{
    int number;
    float numbers;
    float totalNumbers = 0;
    float average;
    while (true)
    {
        cout << "Introduce el numero\n--> ";
        cin >> number;
        if (!isExit(number))
        {
            if (isPositive(number))
            {
                totalNumbers++;
                numbers += number;
            }
        }
        else
        {
            average = numbers / totalNumbers;
            cout << "El promedio de numeros es: " << average << "\n";
            break;
        }
    }
    return 0;
}
