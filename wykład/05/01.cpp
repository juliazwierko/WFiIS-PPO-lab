#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    Point(double x = 0, double y = 0, string Opis = "") : _x(x), _y(y), _Opis(Opis), _cxx_11{1010}
    {
        Print();
    }
    void Print() const;
private:
    double _x = 0;
    double _y = 0;
    string _Opis;

    int _cxx_11 = 11; //standart c++11

    static double _s;
    double _d = _s;
};

/////////////////////////////////////////////////////////////////////////
void Point::Print() const{
    if(_Opis.length() > 0)
        cout << _Opis << "(x, y) = " << _x << ", " <<  _y << ", " <<  _cxx_11 << std::endl;
    else   
        cout << "<bez_nazwy> " << "(x, y) = " << _x << ", " <<  _y << ", " <<  _cxx_11 << std::endl;
}
/////////////////////////////////////////////////////////////////////////

double Point::_s = 7;

int main(int argc, char** argv){
    Point aPoint;
    cout << "\n";
    //<bez_nazwy> (x, y) = 0, 0, 1010

    Point bPoint {1, 1, "bPoint"};
    cout << "\n";
    //bPoint(x, y) = 1, 1, 1010

    Point cPoint = Point(2, 2, "cPoint");
    cout << "\n";
    //cPoint(x, y) = 2, 2, 1010

    Point dPoint(3, 3);
    cout << "\n";
    //<bez_nazwy> (x, y) = 3, 3, 1010

    // int* a = new int;

    aPoint.Print();
    cout << "\n";
    //<bez_nazwy> (x, y) = 0, 0, 1010

    bPoint.Print();
    cout << "\n";
    //bPoint(x, y) = 1, 1, 1010

    cPoint.Print();
    cout << "\n";
    //cPoint(x, y) = 2, 2, 1010

    dPoint.Print();
    cout << "\n";
    //<bez_nazwy> (x, y) = 3, 3, 1010
    return 0;
}
