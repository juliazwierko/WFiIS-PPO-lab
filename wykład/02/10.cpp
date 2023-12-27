#include<iostream>

#include<cmath>
using namespace std;

int main(int argc, char * argv[])
{
	double a, b, c, delta, x1, x2;

	cout << "Podaj wspolczynniki trojmianu ax^2 + bx + c\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	delta = b * b - 4.0 * a * c; 

	if(delta > 0.0)
	{
		x1 = (-b - sqrt(delta))/(2.0 * a);
		x2 = (-b + sqrt(delta))/(2.0 * a);
		cout << "Pierwiastkami sa liczby: " << x1 << ", " << x2 << endl;
	}
	else if(delta == 0.0)
	{
		x1 = (-b - sqrt(delta))/(2.0 * a);
		cout << "Podwojny pierwiastek rowny: " << x1 << endl;
	}
	else
		cout << "Trojmian nie ma pierwiastkow rzeczywistych\n";
}
