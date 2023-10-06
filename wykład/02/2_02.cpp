#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    a = 10;
    b = 010;
    c = 0x10;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl << endl;
    // a = 10 (int a = 10)
    // b = 8 (010 - system osemkowy, pow(8,1) = 8)
    // c = 16 (0X10 - system szesnastkowy, pow(16,1) = 16)

    cout << "a = " << oct << a << endl;
    cout << "b = " << oct << b << endl;
    cout << "c = " << oct << c << endl << endl;
    // a = 12 (konwertacja w system osemkowy, podzielilam 10 przez 8 i wypisalam reszte w kolejnosci odwrotnej)
    // b = 10 (To wydrukowanie wartości b w formacie ósemkowym. b było 8 w systemie ósemkowym, więc zostaje po prostu wydrukowane jako 10 w systemie ósemkowym.)
    // c = 20 (konwertacja w system osemkowy, podzielilam 16 przez 8 i wpisalam reste w kolejnosci odwrotnej)

    cout << "a = " << hex << a << endl;
    cout << "b = " << hex << b << endl;
    cout << "c = " << hex << c << endl << endl;
    // a = a (w systemie 16, liczba 10 == 'A')
    // b = 8 (podzielilam 8 przez 16 i wypisalam reszte)
    // c = 10 (wydrukowanie wartosci c w formacie szesnastkowym)
}
