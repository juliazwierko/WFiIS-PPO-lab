#include <iostream>
#include <string>
// #include "Fraction.h"

//////// <---------
class Fraction
{
public:
   friend std::ostream& operator<< (std::ostream& o, const Fraction& K);
   friend std::istream& operator>> (std::istream& i, Fraction& K);

    Fraction(int l = 0, int m = 1) : _l(l), _m(m)
        {}
    int getL() const
    { return _l; }

    int getM() const
    { return _m; }

    void setL(int l)
    { _l = l;}
    
    void setM(int m)
    { _m = m;}

    //funkcja konwertujπca do float
    float toFloat() const
    { return (float)_l/(float)_m; }

private:
    int _l;
    int _m;
};

/////////////////////////////////////////////////////////////////////////
inline std::ostream& operator<< (std::ostream& o, const Fraction& K)
{
    return o << K._l << "/" << K._m;
}

/////////////////////////////////////////////////////////////////////////
inline std::istream& operator>> (std::istream& i, Fraction& K)
{
    char tmp;
    return i >> K._l >> tmp >> K._m;
}

//////// <-------



/////////////////////////////////////////////////////////////////////////
Fraction operator*(const Fraction &K1, const Fraction &K2)
{
    return Fraction(K1.getL() * K2.getL(), K1.getM() * K2.getM());
}

/////////////////////////////////////////////////////////////////////////
Fraction operator-(const Fraction &K)
{
    return Fraction(-K.getL(), K.getM());
}

/////////////////////////////////////////////////////////////////////////
Fraction operator-(const Fraction &K1, const Fraction &K2)
{
    return Fraction(K1.getL()*K2.getM() - K1.getM()*K2.getL(),
                    K1.getM()*K2.getM());
}

/////////////////////////////////////////////////////////////////////////
int main()
{
    using namespace std;
    
    Fraction aFraction;
    Fraction bFraction;

    cout << "Podaj aFraction: ";
    cin >> aFraction;

    cout << "Podaj bFraction: ";
    cin >> bFraction;

    cout << "aFraction * bFraction = " << aFraction * bFraction << endl;
    cout << "-bFraction = " << -bFraction << endl;

    cout << "aFraction - bFraction = " << aFraction - bFraction << endl;
    cout << "1 - bFraction = " << 1 - bFraction << endl;
    cout << "bFraction - 1 = " << bFraction - 1 << endl;

    cout << "2 * bFraction = " << 2 * bFraction << endl;
    cout << "bFraction * 2 = " << bFraction * 2 << endl;
}

// Podaj aFraction: 1
// 2
// 3
// Podaj bFraction: 4
// 5
// 6
// aFraction * bFraction = 4/18
// -bFraction = -4/6
// aFraction - bFraction = -6/18
// 1 - bFraction = 2/6
// bFraction - 1 = -2/6
// 2 * bFraction = 8/6
// bFraction * 2 = 8/6
