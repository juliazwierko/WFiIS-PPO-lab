#include "Polygon.h"
#include "Point.h"

int Polygon::m = 0;

void Polygon::Presentation(){\
    cout << "\n### Prezentacja wielokata ###" << endl;
    if(m == 1){
        cout << "Nazwa:\n";
    } 
    if(m == 2){
        cout << "Nazwa: Zerokat\n";
    }
    if(m == 3){
        cout << "Nazwa: Nastepny zerokat\n";
    }
    cout << "Liczba wierzcholkow: " << _liczbawierzcholkow << endl;
    cout << "Wierzcholek - nazwa: A, " << "X = " << _x << ", Y = " << _y << endl;
}

void Polygon::SetName(const char* Nazwa){
    // _name = Name;
    m++;
}