#include "Polygon.h"
#include "Point.h"
#include <cstring>

void Polygon::Presentation(){
    cout << "\n### Prezentacja wielokata ###\n";
    cout << "Nazwa: " << _Name2 << endl;
    cout << "Liczba wierzcholkow: " << _ilosc_wierzcholkow << endl ;
    if(_ilosc_wierzcholkow>0){
        for(size_t i = 0; i < _ilosc_wierzcholkow; i++){
            cout << "Wierzcholek - nazwa: " << punkty[i].GetName() << " X = " << punkty[i].GetX() << " ,Y = " << punkty[i].GetY()  <<  endl;
        }
    }
}

void Polygon::SetName(string Name){
    _Name2 = Name;
}

Point * Polygon::GetVertices(){
    return punkty;
}

void Polygon::SetVertice(int number, string name, double x, double y){
    if(number-1 < 0 or number-1 > _ilosc_wierzcholkow-1){
        return;
    }
    punkty[number-1].SetName(name);
    punkty[number-1].SetX(x);
    punkty[number-1].SetY(y);
}
