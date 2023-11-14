#pragma once 
#include <iostream>
#include <cmath>
using namespace std;

#define RADIAN 0
#define DEGREE 1

class Angle{
public:
    Angle(double kat, double typ);

    double toRad() const;
    double toDeg() const;
    void add(Angle kat);
private:
    double _kat;
    int _typ;
};
