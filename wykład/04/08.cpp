#include <iostream>
using namespace std;

class Punkt{
public:
    friend void raport(const Punkt& pPunkt){
        cout << "Prywatne skladowe Punkt: _x, _y = " << pPunkt._x;
        cout << ", " << pPunkt._y << std::endl;
    }

    Punkt(double a, double b){
        _x = a;
        _y = b;
    }

    void print() const;
    void move(double a, double b);
private:
    double _x, _y;
};

/////////////////////////////////
void Punkt::print() const{
    cout << "_x, _y = " << _x << ", " << _y << std::endl ;
}
void Punkt::move(double a, double b){
    _x = a;
    _y = b;
}
/////////////////////////////////


int main(int argc, char** argv){
    Punkt aPunkt(1,1);
    raport(aPunkt);
    aPunkt.print();

    cout << endl;

    aPunkt.move(10,10);
    raport(aPunkt);
    aPunkt.print();
    return 0;
}
// OutPut:
// Prywatne skladowe Punkt: _x, _y = 1, 1
// _x, _y = 1, 1
//
// Prywatne skladowe Punkt: _x, _y = 10, 10
// _x, _y = 10, 10
