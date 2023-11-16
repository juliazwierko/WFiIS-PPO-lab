#include <iostream>
class Port
{
public:
	unsigned read : 1;
	unsigned status : 1;
	unsigned data : 6;
};
/////////////////////////////////////////////////////////////////////////
class PortInt
{
public:
	unsigned read;
	unsigned status;
	unsigned data;
};
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	Port aPort;
	aPort.read = 1;
	aPort.status = 0;
	aPort.data = 63;	
	cout << aPort.read << ", " << aPort.status << ", " << aPort.data << endl;

	aPort.read = 0;
	aPort.status = 2;
	aPort.data = 562;	
	cout << aPort.read << ", " << aPort.status << ", " << aPort.data << endl;

	cout << "sizeof(Port)    = " << sizeof(Port) << endl;
	cout << "sizeof(PortInt) = " << sizeof(PortInt) << endl;
}
// 1, 0, 63
// 0, 0, 50
// sizeof(Port)    = 4
// sizeof(PortInt) = 12

// Wynik dla aPort.read = 1; aPort.status = 0; aPort.data = 63;:
// read ma 1 bit, więc może przyjąć wartości 0 lub 1. W tym przypadku, przypisujesz mu wartość 1.
// status również ma 1 bit, więc może przyjąć wartości 0 lub 1. W tym przypadku, przypisujesz mu wartość 0.
// data ma 6 bitów, co pozwala na przechowywanie liczby od 0 do 63. W tym przypadku, przypisujesz mu wartość 63.
// Wynik wypisuje: 1, 0, 63.
// Wynik dla aPort.read = 0; aPort.status = 2; aPort.data = 562;:
// read ma 1 bit, więc możesz przypisać mu wartość 0 lub 1. W tym przypadku, przypisujesz mu wartość 0.
// status również ma 1 bit, więc możesz przypisać mu wartość 0 lub 1. W tym przypadku, przypisujesz mu wartość 2, ale z powodu ograniczenia do 1 bitu, uzyskujesz resztę z dzielenia przez 2. Dlatego wynik to 2 mod 2 = 0.
// data ma 6 bitów, co pozwala na przechowywanie liczby od 0 do 63. W tym przypadku, przypisujesz mu wartość 562, ale z powodu ograniczenia do 6 bitów, uzyskujesz resztę z dzielenia przez 64. Dlatego wynik to 562 mod 64 = 50.
// Wynik wypisuje: 0, 0, 50.

// sizeof(Port) wynosi 4, co jest nieco zaskakujące z uwagi na bitowe pola, ale związane jest to z ułożeniem w pamięci i optymalizacjami, które kompilator może wprowadzić, aby ułatwić dostęp do poszczególnych pól.
// sizeof(PortInt) wynosi 12, co jest oczekiwane, ponieważ każde z trzech pól ma pełne 4 bajty, co daje łącznie 12 bajtów.
