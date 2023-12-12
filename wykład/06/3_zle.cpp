
#include <iostream>

/////////////////////////////////////////////////////////
class Point
{
public:
  double *b;
  double *a;

  Point(double a = 0, double b = 0);
  ~Point();

  // brak operatora przypisania
  // Point& operator=(const Point& K);
};
/////////////////////////////////////////////////////////
Point::Point(double aa, double bb)
{
  a = new double;
  b = new double;
  *a = aa;
  *b = bb;
}
/////////////////////////////////////////////////////////
Point::~Point()
{
  delete a;
  delete b;
}
/////////////////////////////////////////////////////////
int main()
{
  using namespace std;

  Point aPoint(10, 10);
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
// bPoint = 20, 20
// cPoint = 20, 20
// test(53442,0x1f6b86500) malloc: Double free of object 0x15ae06790
// test(53442,0x1f6b86500) malloc: *** set a breakpoint in malloc_error_break to debug
// zsh: abort      ./test
