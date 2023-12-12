#include <iostream>

/////////////////////////////////////////////////////////
class Point
{
public:
  double *b;
  double *a;

  Point(double a = 0, double b = 0);
  ~Point();

  const Point &operator=(const Point &K);
};
/////////////////////////////////////////////////////////
Point::Point(double aa, double bb)
{
  a = new double(aa);
  b = new double(bb);
}
/////////////////////////////////////////////////////////
Point::~Point()
{
  delete a;
  delete b;
}

/////////////////////////////////////////////////////////
const Point &Point::operator=(const Point &K)
{
  // sprawdzenie czy nie jest wywo³anie np: a = a;
  if (&K == this)
    return *this;

  // czeœæ destruktorowa
  delete a;
  delete b;

  // czeœæ konstruktorwa
  a = new double(*K.a);
  b = new double(*K.b);

  // pozwala na wielokrotne wywo³anie operatora,
  // poniewa¿ zwaraca referencjê do obiektu
  // na rzecz którego operator zosta³ wywo³any
  return *this;
}

/////////////////////////////////////////////////////////
int main()
{
  using namespace std;

  const Point aPoint(10, 10);
  Point bPoint;
  Point cPoint;

  cPoint = bPoint = aPoint; // Point.operator=(bPoint.operator=(aPoint));

  cout << "aPoint = " << (*aPoint.a) << ", " << (*aPoint.b) << endl;
  cout << "bPoint = " << (*bPoint.a) << ", " << (*bPoint.b) << endl;
  cout << "cPoint = " << (*cPoint.a) << ", " << (*cPoint.b) << endl << endl;

  (*aPoint.a) = (*aPoint.b) = 20;

  cout << "aPoint = " << (*aPoint.a) << ", " << (*aPoint.b) << endl;
  cout << "bPoint = " << (*bPoint.a) << ", " << (*bPoint.b) << endl;
  cout << "cPoint = " << (*cPoint.a) << ", " << (*cPoint.b) << endl;
}

// aPoint = 10, 10
// bPoint = 10, 10
// cPoint = 10, 10

// aPoint = 20, 20
// bPoint = 10, 10
// cPoint = 10, 10
