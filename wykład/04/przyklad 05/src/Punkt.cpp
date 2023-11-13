#include "Punkt.h"
#include <iostream>

using namespace std;

Punkt::Punkt(){
    _x = 0;
    _y = 0;
    cout << "Dziala konstruktor\n";
}

Punkt::Punkt(double x, double y){
    _x = x;
    _y = y;
    cout << "Dziala konstruktor z inicjalizacja "
		   << "m_x, m_y = " << _x << ", " << _y << endl;
}

Punkt::~Punkt(){
    cout << "Dziala destruktor "
		   << "m_x, m_y = " << _x << ", " << _y << endl;
}

double Punkt::GetX() const{
    return _x;
}
double Punkt::GetY() const{
    return _y;
}

// Dziala konstruktor
// Dziala konstruktor
// Dziala destruktor m_x, m_y = 0, 0
// a.m_x, a.m_y = 10, 10

// Dziala konstruktor z inicjalizacja m_x, m_y = 10, 20
// Dziala destruktor m_x, m_y = 10, 20
// Dziala destruktor m_x, m_y = 10, 10