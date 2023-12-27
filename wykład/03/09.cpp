#include <iostream>
using namespace std;

int suma(int t[], const unsigned i = 10)
{
	int sum = 0;

	for(unsigned n = 0; n < i; n++)
		sum += t[n];
	
	return sum;
}

int main(int argc, char *argv[])
{
	const unsigned i = 10;
	int t[i];
	
	for(unsigned n = 0; n < i; n++)
	{
		t[n] = n+1;
		cout << t[n] << endl;
	}
	cout << "Suma elementow tablicy = " << suma(t, i) << endl;
}

// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// Suma elementow tablicy = 55
