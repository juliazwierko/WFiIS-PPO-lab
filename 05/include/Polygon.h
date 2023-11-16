#pragma once 
#include <iostream>
#include "Point.h"
using namespace std;

class Polygon{
public:
    Polygon(){
        cout << "Wywolanie konstruktora Polygon...\n";
        const char* temp = "";
        _Name2 = new char[strlen(temp)+1];
        strcpy(const_cast<char*>(_Name2), temp); 
        this->_ilosc_wierzcholkow = 0;
    }
    Polygon(const char* Name){
        cout << "\nWywolanie konstruktora Polygon...\n";
        _Name2 = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name2), Name); 
        this->_ilosc_wierzcholkow = 0;
    }
    Polygon(const char* Name, Point a, Point b, Point c){
        cout << "\nWywolanie konstruktora Polygon...\n\n";
        _Name2 = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name2), Name); 
        //
        Point new_a;
        Point new_b;
        Point new_c;  
        new_a = a; new_b =b; new_c = c;      
        //
        this->_ilosc_wierzcholkow = 3;
    }
    Polygon(const char* Name, Point a, Point b, Point c, Point d){
        cout << "\nWywolanie konstruktora Polygon...\n\n";
        _Name2 = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name2), Name); 
        //
        Point new_aa;
        Point new_bb;
        Point new_cc;  
        Point new_dd;
        new_aa = a; new_bb =b; new_cc = c; new_dd = d;      
        //
        this->_ilosc_wierzcholkow = 4;
    }
    Polygon(const char* Name, double number, Point tab[]){
        _Name2 = new char[strlen(Name)+1];
        strcpy(const_cast<char*>(_Name2), Name); 
        //
        _ilosc_wierzcholkow = number;
        //
    }
    void Presentation();
    void SetName(const char* Name);
    
private:
    const char* _Name2;
    int _ilosc_wierzcholkow;
};

// Wywolanie konstruktora Polygon...

// ### Prezentacja wielokata ###
// Nazwa: Nastepny zerokat
// Liczba wierzcholkow: 0
