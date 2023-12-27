#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    Point(){
        cout << "Wywolanie konstruktora Point...\n\n";
    }
    Point(string Name){
        cout << "Wywolanie konstruktora Point...\n\n";
        SetName(Name);
    }   
    Point(string Name, double x, double y){
        cout << "Wywolanie konstruktora Point...\n\n";
        SetName(Name);
        SetX(x);
        SetY(y);
    }
    ~Point(){
        cout << "Wywolanie destruktora Point...\n\n";
    }
    double GetX(){
        return _x;
    }
    double GetY(){
        return _y;
    }
    string GetName() const {
        return _Name;
    }
    void Presentation();
    void SetName(string Name);
    
    void SetX(double x);
    void SetY(double y);
private:
    double _x = 0;
    double _y = 0;
    string _Name;
};
