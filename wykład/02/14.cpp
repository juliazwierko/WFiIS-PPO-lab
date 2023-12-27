#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Podaj liczbe z zakresu [1,5]" << endl;
    cin >> a;

    switch(a){
        case 1:
            cout << "wybrales 1";
            break;
        case 2:
            cout << "Wybrales 2";
            break;
        case 3:
            cout << "Wybrales 3";
            break;
        case 4:
            cout << "Wybrales 4";
            break;
        case 5:
            cout << "Wybrales 5";
            break;
        default:
            cout << "Cos innego wybrales ;/";
            break;
    }
    cout << endl;
}

// Podaj liczbe z zakresu [1,5]
// 1
// wybrales 1
