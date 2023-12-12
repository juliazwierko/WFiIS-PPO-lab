#pragma once 
#include <iostream>
#include <cmath>

using namespace std;

class Vector;

class ComplexNumber{
public:
    friend class Vector;
    ComplexNumber() = default;
    ComplexNumber(double a, double b) : _a(a), _b(b) {}
    ~ComplexNumber() {}

    explicit operator double() const{
        double modul_1 = pow((pow(this->_a, 2.)+pow(this->_b, 2.)), 0.5);
        return modul_1;
    }
    void Print() const;
    static double Abs(ComplexNumber& cos){
        double modul_1 = static_cast<double>(cos);
        return modul_1;
    }

private:
    double _a;
    double _b;
};