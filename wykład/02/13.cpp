#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  int suma = 0, i, n;
  cout << "Podaj liczbe naturalna\n";
  cout << "n = ";
  cin >> n;
  
	for(i = 1; i <= n; i++)
		suma = suma + i;

	cout << "Suma " << n << " kolejnych liczb naturalnych wynosi: " << suma << endl;
}

// Podaj liczbe naturalna
// n = 3 
// Suma 3 kolejnych liczb naturalnych wynosi: 6
