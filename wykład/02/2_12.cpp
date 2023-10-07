#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  double suma = 0.0, a;
  cout << "Podaj liczby (0 oznacza koniec)\n";
  
  do
  {
    cout << "a = ";
    cin >> a;
    suma = suma + a;
  }
  while (a);
  cout << "Suma: " << suma << endl;
}

Podaj liczby (0 oznacza koniec)
// a = 12
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 2
// a = 212
// a = 12
// a = 0
// Suma: 266
