#include <iostream>

class Punkt
{
public:
    double x;
    double y;
};

int main(int argc, char **argv){
    using namespace std;

    //object klasy
    Punkt aPunkt;
    //wskaznik
    Punkt *fPunkt = new Punkt;
    //referencja
    Punkt &cPunkt = aPunkt;

    aPunkt.x = 1;
    aPunkt.y = 1;
    cout << "aPunkt.x, aPunkt.y = " << aPunkt.x << ", " << aPunkt.y << endl;

    fPunkt->x = 2;
    (*fPunkt).y = 2;
    cout << "fPunkt->x, fPunkt->y = " << (*fPunkt).x << ", " << fPunkt->y << endl;

    cPunkt.x = 3;
    cPunkt.y = 3;
    cout << "aPunkt.x, aPunkt.y = " << aPunkt.x << ", " << aPunkt.y << endl;

    delete fPunkt;
    return 0;
}

// aPunkt.x, aPunkt.y = 1, 1
// fPunkt->x, fPunkt->y = 2, 2
// aPunkt.x, aPunkt.y = 3, 3
