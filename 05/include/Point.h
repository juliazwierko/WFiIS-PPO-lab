#pragma once
#include <iostream>
using namespace std;

class Point{
public:
    Point(){
        cout << "Wywolanie konstruktora Point...\n\n";
        const char* temp = "";
        _Name = new char[strlen(temp)+1];
        strcpy(const_cast<char*>(_Name), temp); 
        _x = 0;
        _y = 0;
    }
    Point(const char* Name){
        cout << "Wywolanie konstruktora Point...\n\n";
        _Name = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name), Name); 
        _x = 0;
        _y = 0;
    }   
    Point(const char* Name, double x, double y){
        cout << "Wywolanie konstruktora Point...\n\n";
        _Name = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name), Name); 
        _x = x;
        _y = y;
    }
    double GetX(){
        return _x;
    }
    double GetY(){
        return _y;
    }
    const char* GetName(Point a) const {
        return a._Name;
    }
    void Presentation();
    void SetName(const char* Name);
    void SetX(double x);
    void SetY(double y);
    const char* _Name;
private:
    double _x;
    double _y;
    // const char* _Name;
};
