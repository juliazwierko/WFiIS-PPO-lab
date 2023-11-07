#include <iostream>
using namespace std;

class Punkt {
public:
    void SetX(double x);
    void SetY(double y);
    double GetX() const;
    double GetY() const;

private:
    double _x = 0;
    double _y = 0;
};

inline void Punkt::SetX(double x){
    _x = x;
}
inline void Punkt::SetY(double y){
    _y = y;
}
double Punkt::GetX() const{
    return _x;
}
double Punkt::GetY() const{
    return _y;
}


int main(int argc, char **argv){
    //const
    Punkt aPunkt;
    //wtedy zadziala to przypisanie, w orginale byl const wiec to nie zadzaiala.
    aPunkt.SetX(10.0);
	aPunkt.SetY(10.0);

    cout << "a._x, a._y = " << aPunkt.GetX() << ", " << aPunkt.GetX() << endl;
    return 0;
}

// a._x, a._y = 10, 10
