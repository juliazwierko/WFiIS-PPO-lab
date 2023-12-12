#pragma once
#include <iostream>
#include <vector>
#include "ComplexNumber.h"


using namespace std;

class Vector{
public:
    Vector(Vector &&m);
    Vector() {}
    Vector& SetX(double a, double b);
    Vector& SetY(double a, double b);
    Vector& SetZ(double a, double b);
    void Print() const;

    ComplexNumber& X();
    const ComplexNumber& X() const;
    static const Vector *CreateConstVector(ComplexNumber X, ComplexNumber Y, ComplexNumber Z);
    void Cleanup();
private:
    ComplexNumber _X;
    ComplexNumber _Y;
    ComplexNumber _Z;
};