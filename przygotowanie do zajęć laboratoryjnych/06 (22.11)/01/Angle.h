#pragma once 
#include <iostream>
using namespace std;

class Angle{
public:
    Angle(){
        cout << "... creating angle from radians.\n";
        _kat = 0;
    }
    static Angle fromRadians(double kat);
    static Angle fromDegrees(double kat);
    void print() const ;
    Angle add(Angle);
    double toDeg() const;
private:
    double _kat;
};