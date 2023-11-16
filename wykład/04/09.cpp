#include <iostream>

//Deklaracja wyprzedzajπca.
class PointCollection;

class Point
{
public:
    friend class PointCollection;

    Point(){
        _x = 0.0;  
        _y = 0.0; 
    }

private:
    double _x;
    double _y;
};
/////////////////////////////////////////////////////////////////////////
class PointCollection
{
public:
    PointCollection(const int nSize)
    {   
        f = new Point[nSize];
        this->nSize = nSize; 
    }

    ~PointCollection(void)
    { 
        delete [] f; 
    }
    
    void Set(const double x, const double y);
    void print(void);

private:
    Point *f;
    int nSize;
};
/////////////////////////////////////////////////////////////////////////
void PointCollection::Set(const double x, const double y)
{
    for(int i=0; i < nSize; i++)
    {
        (f+i)->_x = x*i;
        (f+i)->_y = y*i;
    }
}
/////////////////////////////////////////////////////////////////////////
void PointCollection::print(void)
{
    for(int i=0; i < nSize; i++)
        std::cout << "_x = " << (f+i)->_x << ", _y = " <<  (f+i)->_y << std::endl;
}
/////////////////////////////////////////////////////////////////////////
int main()
{
    PointCollection aPointCollection(20);
    aPointCollection.Set(1, 2);
    aPointCollection.print();
}

// _x = 0, _y = 0
// _x = 1, _y = 2
// _x = 2, _y = 4
// _x = 3, _y = 6
// _x = 4, _y = 8
// _x = 5, _y = 10
// _x = 6, _y = 12
// _x = 7, _y = 14
// _x = 8, _y = 16
// _x = 9, _y = 18
// _x = 10, _y = 20
// _x = 11, _y = 22
// _x = 12, _y = 24
// _x = 13, _y = 26
// _x = 14, _y = 28
// _x = 15, _y = 30
// _x = 16, _y = 32
// _x = 17, _y = 34
// _x = 18, _y = 36
// _x = 19, _y = 38
