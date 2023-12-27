#include <iostream>

using namespace std;

void licz_wywolania(void);
void licz_wywolania_static(void);

int main(int argc, char * argv[])
{
	licz_wywolania();
	licz_wywolania_static();
    cout << endl;

	licz_wywolania();
	licz_wywolania_static();
    cout << endl;


	licz_wywolania();
	licz_wywolania_static();
    cout << endl;


	licz_wywolania();
	licz_wywolania_static();
    cout << endl;


	licz_wywolania();
	licz_wywolania_static();
    cout << endl;
}

void licz_wywolania(void)
{
	unsigned int i = 0;
	i = i + 1;
	cout << "(auto)   i = " << i << endl;
}

void licz_wywolania_static(void)
{
	static unsigned int i = 0;
	i = i + 1;
	cout << "(static) i = " << i << endl;
}

// (auto)   i = 1
// (static) i = 1

// (auto)   i = 1
// (static) i = 2

// (auto)   i = 1
// (static) i = 3

// (auto)   i = 1
// (static) i = 4

// (auto)   i = 1
// (static) i = 5
