#pragma once 
#include <iostream> 
using namespace std;

class LPrint;
class LArray;

class Line{
public:
    friend class LPrint;    
    friend class LArray;
    Line() : _a(1), _b(1) {}
    Line(double a, double b) : _a(a), _b(b) {}
    Line(int num) : _a(num), _b(_a) {}
    ~Line() {}
    
    double operator()(double a) const;
    double X0() const;

private:
    double _a;
    double _b;

};

class LPrint{
public:
    void operator()(const Line&) const;
};

class LArray{
public:
    LArray();
    LArray(int size) : _size(size) {}
    ~LArray();
    void Add(Line&);
    void Add(int a);
    Line& operator[](int) const;
private:
    size_t _size;
    Line *_tab;
    int _count;
};