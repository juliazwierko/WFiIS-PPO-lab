#include "Polygon.h"
#include "Point.h"
#include <cstring>

void Polygon::Presentation(){
    cout << "\n### Prezentacja wielokata ###\n";
    cout << "Nazwa: " << _Name2 << endl;
    cout << "Liczba wierzcholkow: " << _ilosc_wierzcholkow << endl ;
    if(_ilosc_wierzcholkow == 3){
        // cout << "Wierzcholek - nazwa: " << Point::GetName(Point a); 
    }
}

void Polygon::SetName(const char* Name){
    _Name2 = new char[strlen(Name)+1];
    strcpy(const_cast<char*>(_Name2), Name); 
}
// ### Prezentacja wielokata ###
// Nazwa:
// Liczba wierzcholkow: 0
