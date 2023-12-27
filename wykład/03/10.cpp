#include <iostream>
using namespace std;

void suma(const int t[][2], int size, int wynik[])
{
	wynik[1] = wynik[0] = 0;

	for(int i = 0; i < size; ++i)
	{
		wynik[0] += t[i][0];
		wynik[1] += t[i][1];
	}
}

int main(int argc, char *argv[])
{
	int t[10][2];
	int wynik[2];

	for(int i = 0; i < 10; ++i)
	{
		t[i][0] = i+1;
		t[i][1] = (i+1)*2;
	}

	for(int i = 0; i < 10; ++i)
		cout << t[i][0] << " " << t[i][1] << endl;

	suma(t, 10, wynik);

	cout << "Suma = " << wynik[0] << ", " << wynik[1] << endl;
}

// 1 2
// 2 4
// 3 6
// 4 8
// 5 10
// 6 12
// 7 14
// 8 16
// 9 18
// 10 20
// Suma = 55, 110
