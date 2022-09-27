// •	Un programa que lea 10 números enteros y luego indique la suma de los números positivos
#include <iostream>
#include <cmath>

using namespace std;

bool isPositive(float number) { return number > 0; }
int main(int argc, char const *argv[])
{
    float number;
    float additionNumbers = 0;
    for (int i = 1; i < 11; i++)
    {
        cout << "Introduce el numero " << i << "\n--> ";
        cin >> number;
        if (isPositive(number))
            additionNumbers += number;
    }
    cout << "El total de numeros es::  " << round(additionNumbers) << "\n";
    return 0;
}
