#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//Klasa Point
class Point{
public:
    /**
     * To jest konstruktor bezparametrowy
    */
    Point(){
        cout << "\nWywolanie konstruktora Point...\n" << endl;
        n++;
        _x = 0;
        _y = 0;
    }
    /**
     * konstrukter z parametrem name
    */
    Point(const char* Name){
        n++;
        cout << "\nWywolanie konstruktora Point...\n" << endl;
        //_name = Name;
        _x = 0;
        _y = 0;
    }
    /**
     * konstruktor z parametrami name, oraz wspolrzednymi x a i
    */
    Point(const char* Name, double x, double y){
        n++;
        cout << "\nWywolanie konstruktora Point...\n" << endl;
        _x = x;
        _y = y;
    }
    ~Point(){
        cout << "\nWywolanie destruktora Point...\n";
    }
    /**
     * @brief funkcja reprezentacji wspolrzednych 
     * 
     * funkcja wypisuje wszystkie dane funkcji 
     * 
     * @param[in] nic nie przyjmuje 
     * @return void nic nie zwraca 
     * 
    */
    void Presentation();
    /**
     * @brief funkcja ustawia imie
     * 
     * funkcja istawia imie
     * 
     * @param[in] name - to wskaznik typu const chat - nasze imie
     * @return void nic nie zwraca 
     * 
    */
    void SetName(const char* Name);
    /**
     * @brief funkcja ustawia x wsp.
     * 
     * funkcja istawia x koordynate
     * 
     * @param[in] x - to double liczba
     * @return void nic nie zwraca 
     * 
    */
    void SetX(double x);
    /**
     * @brief funkcja ustawia y wsp.
     * 
     * funkcja istawia y koordynate
     * 
     * @param[in] y - to double liczba
     * @return void nic nie zwraca 
     * 
    */
    void SetY(double y);
private:
    const char* _name;
    double _x;
    double _y;
    static int n;
};