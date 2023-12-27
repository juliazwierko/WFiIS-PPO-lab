#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int k = 10, l = 5;
	
	cout << "k = " << k << ", l = " << l << endl << endl;

  cout << "(k > l) = " << (k > l) << endl;
	cout << "(k < l) = " << (k < l) << endl;
	cout << "(k >= k) = " << (k >= k) << endl;
	cout << "(k <= l) = " << (k <= l) << endl;
	cout << "(k == l) = " << (k == l) << endl;
	cout << "!(k == l) = " << !(k == l) << endl << endl;
	
	cout << "(k == l) || !(k == l) = " << ((k == l) || !(k == l)) << endl;
	cout << "(k == l) && !(k == l) = " << ((k == l) && !(k == l)) << endl;
}

// k = 10, l = 5

// (k > l) = 1
// (k < l) = 0
// (k >= k) = 1
// (k <= l) = 0
// (k == l) = 0
// !(k == l) = 1

// (k == l) || !(k == l) = 1
// (k == l) && !(k == l) = 0
