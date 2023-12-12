#include "Vector.h"

static Vector *ToBeRemoved = nullptr;
static Vector v;

Vector::Vector(Vector &&m) : _X(std::move(m._X)), _Y(std::move(m._Y)), _Z(std::move(m._Z)) {
m.SetX(0, 0);
m.SetY(0, 0);
m.SetZ(0, 0);
ToBeRemoved = &m;
}

Vector& Vector::SetX(double a, double b){
    _X._a = a;
    _X._b = b;
    return *this;
}

Vector& Vector::SetY(double a, double b){
    _Y._a = a;
    _Y._b = b;
    return *this;
}

Vector& Vector::SetZ(double a, double b){
    _Z._a = a;
    _Z._b = b;
    return *this;
}

void Vector::Print() const {
    cout << "[";
    cout << "(" << _X._a << ", " << _X._b << ")";
    cout << " (" << _Y._a << ", " << _Y._b << ")";
    cout << " (" << _Z._a << ", " << _Z._b << ")";
    cout << "]";
    cout << "\n";
}

ComplexNumber& Vector::X(){
    return _X;
}
const ComplexNumber& Vector::X() const{
    return _X;
}

const Vector * Vector::CreateConstVector(ComplexNumber X, ComplexNumber Y, ComplexNumber Z){
    static Vector v;
    v._X = X;
    v._Y = Y;
    v._Z = Z;
    return &v;
}

void Vector::Cleanup(){
    if (ToBeRemoved)
    {
        delete ToBeRemoved;
        ToBeRemoved = nullptr;
    }
}