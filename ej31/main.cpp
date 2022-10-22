#include <exception>
#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

float combination(int n, int k) {
  if (n == 0) {
    throw;
  }
  return round(factorial(n) / (factorial(n - k) * factorial(k)));
}

float teoremaBinomio(int n, int k) { return (combination(n, k)); }

int potencia(int c, int n, int k) { return c * (n - (k)); }

int exponente(int d, int n, int k) { return d * (k); }

int main() {
  float a, b, t;
  int c = 1, d = 1, n, k;
  int s, m;
  cout << "ingrese el exponente a: ";
  cin >> a;
  cout << endl << "ingrese el exponente b: ";
  cin >> b;
  cout << endl << "ingrese el n: ";
  cin >> n;
  cout << endl << "ingrese el k: ";
  cin >> k;

  // Unico
  // Este fragmento solo muestra 1
  t = teoremaBinomio(n, k);
  s = potencia(c, n, k);
  m = exponente(d, n, k);
  cout << t << " x " << s << " y " << m << endl << endl;

  // Todos
  // Este fragmento muestra todos
  for (int k = 0; k < n + 1; k++) {
    t = teoremaBinomio(n, k);
    s = potencia(c, n, k);
    m = exponente(d, n, k);
    cout << t << " x " << s << " y " << m << endl;
  }

  return 0;
}
