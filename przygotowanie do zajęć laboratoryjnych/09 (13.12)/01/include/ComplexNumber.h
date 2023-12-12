#pragma once 
#include <iostream>

using namespace std;

class Vector;

class ComplexNumber{
public:
    friend class Vector;
    ComplexNumber() = default;
    ComplexNumber(double a, double b) : _a(a), _b(b) {}
    ~ComplexNumber() {}
    void Print() const;
private:
    double _a;
    double _b;
};