#include <iostream>

class Point
{
public:
    Point(double x = 0.0, double y = 0.0)
    {_x = x;  _y = y; }
    
    void SetX(double x)
        {_x = x;}

    void SetY(double y)
        {_y = y;}

    double GetX() const
        { return _x; }

    double GetY() const
        { return _y; }

    void printOut() const
        {std::cout << _x << ", " << _y;}

private:
    double _x;
    double _y;
};
/////////////////////////////////////////////////////////////////////////
int main()
{
    using namespace std;

    const unsigned int n = 6;
    Point Tab1[n];

    //referencja do pierwszego elementu tablicy Tab1
    Point &Ref = Tab1[0];
    
    //wypelnienie Tab1
    for(unsigned int i = 0; i < n; ++i)
        Tab1[i].SetX(i), Tab1[i].SetY(i+1);

    cout << "------------- Tab1 -------------------\n";
    //wypisanie Tab1
    for(unsigned int i = 0; i < n; ++i)
    {
        cout << i << ": ";
        Tab1[i].printOut();
        cout << endl;
    }
    
    cout << "----------- Ref - Tab[0] -------------\n";

    //zmiania Tab1[0] przez referencje
    Ref.SetX(1.1);
    Ref.SetY(1.1);

    //wypisanie Tab1[0]
    Tab1[0].printOut();
    cout << "\n------------ Tab2 --------------------\n";

    //utworzenie Tab2 z jednoczesna inicjalizacjπ
    Point Tab2[n] = {Point(1, 1),Point(2, 2),Point(3, 3)};

    //wypisanie Tab2
    for(unsigned int i = 0; i < n; ++i)
    {
        cout << i << ": ";
        Tab2[i].printOut();
        cout << endl;
    }

    cout << "-------------- Tab3 ------------------\n";
    //utworzenie Tab3 z jednoczesnπ inicjalizacja
    //uzywajπc niejawnych wywolan konstruktorow
    Point Tab3[n] = {1, 1, 2, 2, 3, 3};

    //wypisanie Tab3
    for(unsigned int i = 0; i < n; ++i)
    {
        cout << i << ": ";
        Tab3[i].printOut();
        cout << endl;
    }
}

// OutPut:
// ------------- Tab1 -------------------
// 0: 0, 1
// 1: 1, 2
// 2: 2, 3
// 3: 3, 4
// 4: 4, 5
// 5: 5, 6
// ----------- Ref - Tab[0] -------------
// 1.1, 1.1
// ------------ Tab2 --------------------
// 0: 1, 1
// 1: 2, 2
// 2: 3, 3
// 3: 0, 0
// 4: 0, 0
// 5: 0, 0
// -------------- Tab3 ------------------
// 0: 1, 0
// 1: 1, 0
// 2: 2, 0
// 3: 2, 0
// 4: 3, 0
// 5: 3, 0
