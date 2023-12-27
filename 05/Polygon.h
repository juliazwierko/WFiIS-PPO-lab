#pragma once 
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class Polygon{
public:
    Polygon(){
        cout << "Wywolanie konstruktora Polygon...\n";
    }
    Polygon(string Name){
        cout << "\nWywolanie konstruktora Polygon...\n";
        SetName(Name);
        
    }
    Polygon(string Name, Point a, Point b, Point c){
        cout << "\nWywolanie konstruktora Polygon...\n\n";
        _ilosc_wierzcholkow = 3;
        punkty = new Point [3];

        punkty[0] = a;
        punkty[1] = b;
        punkty[2] = c;
    }
    Polygon(string Name, Point a, Point b, Point c, Point d){
        cout << "\nWywolanie konstruktora Polygon...\n\n";
        _ilosc_wierzcholkow = 4;
        punkty = new Point [4];
        
        punkty[0] = a;
        punkty[1] = b;
        punkty[2] = c;
        punkty[3] = d; 
    }
    Polygon(string Name, double number, Point tab[]){
        cout << "\nWywolanie konstruktora Polygon...\n\n";
        _Name2 = Name;
        _ilosc_wierzcholkow = number;
        
        punkty = new Point [_ilosc_wierzcholkow];
        for(int i = 0; i < _ilosc_wierzcholkow; i++){
            punkty[i] = tab[i];
        }
    }
    void SetNewVertices(int number, Point *a){
        _ilosc_wierzcholkow = number;
        delete [] punkty;
        punkty = new Point [_ilosc_wierzcholkow];
        for(int i = 0; i < _ilosc_wierzcholkow; i++){
            punkty[i] = *(a+i);
        }
    }
    ~Polygon(){
        cout << "\nWywolanie destruktora Polygon...\n";
        delete [] punkty;
    }
    void SetVertice(int number, string name, double x, double y);
    void Presentation();
    void SetName(string Name);
    Point * GetVertices();
private:
    string _Name2;
    int _ilosc_wierzcholkow = 0;
    Point *punkty = nullptr;
};
