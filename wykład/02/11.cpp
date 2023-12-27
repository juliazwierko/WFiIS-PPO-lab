#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int silnia = 1, i = 1, n;
  cout << "Podac liczbe naturalna n: ";
  cin >> n;

  while (i < n)
  {
    i++;
    silnia = silnia * i;
  }
	cout << "Silnia liczby " << n << " wynosi: " << silnia << endl;
} 

// Podac liczbe naturalna n: 3
// Silnia liczby 3 wynosi: 6
