#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 20;
	int *c, *d, *tmp;
	
	c = &a;
	d = &b;

	cout << "a, b = " << a << ", " << b << endl;
	cout << "*c, *d = " << *c << ", " << *d << endl;
	cout << "c, d (adresy)= " << c << ", " << d << endl << endl;
    //&a, &b = 0x16d55b33c, 0x16d55b338

	tmp = c;
	c = d;
	d = tmp;

	cout << "Po zamianie wskaznikow" << endl;
	cout << "a, b = " << a << ", " << b << endl;
	cout << "*c, *d = " << *c << ", " << *d << endl;
	cout << "c, d (adresy)= " << c << ", " << d << endl << endl;

	*c = -10;
	*d = -100;

	cout << "Po przypisaniu wartosci do wskaznikow (*c = -10, *d = -100) " << endl;
	cout << "a, b = " << a << ", " << b << endl;

}

// a, b = 0, 20
// *c, *d = 0, 20
// c, d (adresy)= 0x16cf8733c, 0x16cf87338

// Po zamianie wskaznikow
// a, b = 0, 20
// *c, *d = 20, 0
// c, d (adresy)= 0x16cf87338, 0x16cf8733c

// Po przypisaniu wartosci do wskaznikow (*c = -10, *d = -100) 
// a, b = -100, -10
