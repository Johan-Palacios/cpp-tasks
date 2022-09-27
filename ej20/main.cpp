// •	Un programa que lea 10 números enteros y luego indique cuantos fueron pares y cuantos fueron impares.
#include <iostream>

using namespace std;

bool isEven(int number) { return number % 2 == 0; }

int main(int argc, char const *argv[])
{
    int number;
    int evenNumbers = 0;
    int oddNumbers = 0;
    for (int i = 1; i < 11; i++)
    {
        cout << "Introuduce el numero " << i << "\n--> ";
        cin >> number;
        if (isEven(number))
            evenNumbers++;
        else
            oddNumbers++;
    }
    cout << "Fueron " << evenNumbers << " numeros pares\n";
    cout << "Fueron " << oddNumbers << " numeros inpares\n";
    return 0;
}
