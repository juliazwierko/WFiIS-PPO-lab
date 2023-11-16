#include "Point.h"

void Point::Presentation(){
    cout << "### Prezentacja punktu ###\n";
    cout << "Nazwa: " << _Name << endl;
    cout << "Wspolrzedna X: " << _x << endl;
    cout << "Wspolrzedna Y: " << _y << endl << endl;
}

void Point::SetName(const char* Name){
    _Name = new char[strlen(Name)+1];
    strcpy(const_cast<char*>(_Name), Name);     
}

void Point::SetX(double x){
    this->_x = x;
}
void Point::SetY(double y){
    this->_y = y;
}
