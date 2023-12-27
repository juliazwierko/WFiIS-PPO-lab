#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	short a;
	int b;
	long c;
	float d;
	double e;

  cout << "short       " << sizeof(a) << endl;
  cout << "int         " << sizeof(b) << endl;
  cout << "long        " << sizeof(c) << endl;
  cout << "float       " << sizeof(d) << endl;
  cout << "double      " << sizeof(e) << endl;
  cout << "long double " << sizeof(long double) << endl;
  cout << "char        " << sizeof(char) << endl;
  cout << "int*        " << sizeof(int*) << endl;
  cout << "float*      " << sizeof(float*) << endl;
  cout << "bool        " << sizeof(bool) << endl << endl;

  double f = -13.13;
  cout << "f = " << f << " (int)f = " << (int)f << endl << endl;

  cout << "(1+1, 2+2, 2*f, 5+5) = " << (1+1, 2+2, 2*f, 5+5) << endl << endl;
  //OPERATOR PRZECINEK - ','
  //Stosowany kilku wyrażeń stojących obok siebie traktowanych jako jedno o wartości wyrażenia będącego najbardziej z prawej

  cout << "(3 > 2) ? 1 : 0 = " << ((3 > 2) ? 2 : 0) << endl;
} 

// short       2
// int         4
// long        8
// float       4
// double      8
// long double 8
// char        1
// int*        8
// float*      8
// bool        1

// f = -13.13 (int)f = -13

// (1+1, 2+2, 2*f, 5+5) = 10

// (3 > 2) ? 1 : 0 = 2
