#include <iostream>

using namespace std;

void dec2bin(int bin);

int main(int argc, char * argv[])
{
	int n = 8, m;

	cout << "n =           " << n << ", n(bin) = ";
	dec2bin(n);

	m = n << 1;
	cout << "m = n << 1 = " << m << ", m(bin) = ";
	dec2bin(m);	

	m = n >> 2;
	cout << "m = n >> 2 =  " << m << ", m(bin) = ";
	dec2bin(m);

	cout << endl;

	int k = 0xff0f;
	int l = 0x0ff0;

	cout << "k(bin) =       ";
	dec2bin(k);	

	cout << "l(bin) =       ";
	dec2bin(l);

	cout << "(k & l)(bin) = ";
	dec2bin(k & l);
	
	cout << "(k | l)(bin) = ";
	dec2bin(k | l);
	
	cout << "(k ^ l)(bin) = ";
	dec2bin(k ^ l);

	cout << "~k(bin) =      ";
	dec2bin(~k);	

	cout << endl;
}



void dec2bin(int bin)
{
	char str[17];
	unsigned i = 0;

  unsigned int mask;

	mask = 0x8000;

  while(mask)
  {
    if (bin & mask)
      str[i] = '1';
    else 
      str[i] = '0';
    i++;
    mask >>= 1;
  }
  str[i] = 0;

	cout << str << endl;
}

// n =           8, n(bin) = 0000000000001000
// m = n << 1 = 16, m(bin) = 0000000000010000
// m = n >> 2 =  2, m(bin) = 0000000000000010

// k(bin) =       1111111100001111
// l(bin) =       0000111111110000
// (k & l)(bin) = 0000111100000000
// (k | l)(bin) = 1111111111111111
// (k ^ l)(bin) = 1111000011111111
// ~k(bin) =      0000000011110000
