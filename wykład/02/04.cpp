#include <iostream>

using namespace std;

int k = 13;
int main(int argc, char *argv[]){
    cout << "k (globalne) = " << k << endl;

    int k = 1;
    cout << "k = " << k << endl;

    {
        int k = 1313;
        cout << "k (lokalne) = " << k << endl;
        cout << "k (globalne z bloku lokalnego) = " << ::k << endl;
    }
    cout << "k (po bloku lokalnym) = " << k << endl;
}
// k (globalne) = 13
// k = 1
// k (lokalne) = 1313
// k (globalne z bloku lokalnego) = 13 (W 15 linijce kodu, ::k oznacza odwołanie do zmiennej k znajdującej się na poziomie globalnym, poza jakimkolwiek zakresem funkcji czy bloku.)
// k (po bloku lokalnym) = 1
