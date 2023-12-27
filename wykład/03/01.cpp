#include <iostream>
using namespace std;

void print();
int print2();

int main(int argc, char *argv[])
{
	print();
	print();
	print();
	print();
	print();

	print2();
	print2();
	print2();
	print2();
	cout << "Odebrana wartosc z 'print2' = " << print2() << endl;
} 

void print()
{
	static int i = 0;
	cout << "Funkcja 'print' wywolana: " << ++i << " raz" << endl;
}

int print2()
{
	static int i = 0;
	cout << "Funkcja 'print2' wywolana: " << ++i << " raz" << endl;
	return i;
}

// Funkcja 'print' wywolana: 1 raz
// Funkcja 'print' wywolana: 2 raz
// Funkcja 'print' wywolana: 3 raz
// Funkcja 'print' wywolana: 4 raz
// Funkcja 'print' wywolana: 5 raz
// Funkcja 'print2' wywolana: 1 raz
// Funkcja 'print2' wywolana: 2 raz
// Funkcja 'print2' wywolana: 3 raz
// Funkcja 'print2' wywolana: 4 raz
// Odebrana wartosc z 'print2' = Funkcja 'print2' wywolana: 5 raz
// 5
