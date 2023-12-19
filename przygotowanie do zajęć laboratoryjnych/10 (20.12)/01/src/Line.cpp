#include "Line.h"

double Line::operator()(double a) const{
    return (_a*a + _b);
}

double Line::X0() const{
    return (_b*(-1))/_a;
}

void LPrint::operator()(const Line &obj) const{
    cout<<"y = "<<obj._a<<"* x + "<<obj._b<<"\tx0 = "<<obj.X0()<<std::endl;
}

void LArray::Add(int a) {
    _tab[_count]._a=a;
    _tab[_count]._b=a;
    _count++;
}

void LArray::Add(Line& obj) {
    _tab[_count]=obj;
    _count++;
}

LArray::~LArray() {delete []_tab;}

Line& LArray::operator[](int i) const{
    return _tab[i];
}