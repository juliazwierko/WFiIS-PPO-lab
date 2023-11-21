#include <iostream>
using namespace std;

class Point{
public:
  friend class PointCollection;
  Point(){
    _x = 0;
    _y = 0;
  }

private:    
  double _x;
  double _y;
};

class PointCollection{
public: 
  PointCollection(const int nSize){
    f = new Point[nSize];
    this->nSize = nSize;
  }
  ~PointCollection(){
    delete []f;
  }
  void Set(const double x, const double y){
    for(int i = 0; i < nSize; i++){
      (f+i)->_x = x*i;
      (f+i)->_y = y*i;
    }
  }
  void print(){
    for(int i = 0; i < nSize; i++){
      cout << (f+i)->_x << "___";
      cout << (f+i)->_y << endl;

    }
  }

private:
  Point *f;
  int nSize;
};

int main(int argc, char** argv){
  PointCollection aPointCollection(20);
  aPointCollection.Set(1, 2);
  aPointCollection.print();
  return 0;
}

// 0___0
// 1___2
// 2___4
// 3___6
// 4___8
// 5___10
// 6___12
// 7___14
// 8___16
// 9___18
// 10___20
// 11___22
// 12___24
// 13___26
// 14___28
// 15___30
// 16___32
// 17___34
// 18___36
// 19___38
