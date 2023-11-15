#pragma once
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

class Polygon{
public:
    /**
     * konstruktor bezparametrowy
    */
    Polygon(){
        m++;
        cout <<"\nWywolanie konstruktora Polygon...\n\n";
        _x = 0;
        _y = 0;
        _z = 0;
        _liczbawierzcholkow = 0;
    }
    /**
     * konstruktor z parametrem Name
    */
    Polygon(const char *Nazwa){
        cout << "Wywolanie konstruktora Polygon...\n\n";
        _liczbawierzcholkow = 0;
        m++;
    }
    /**
     * konstruktor z parametrami name, oraz elementami klasy Point- punktu a, b i c
    */
    Polygon(const char *Nazwa, ::Point a, ::Point b, ::Point c){
        m++;
        cout <<"\nWywolanie konstruktora Polygon...\n";
        cout <<"\nWywolanie konstruktora Point...\n";
        cout <<"\nWywolanie konstruktora Point...\n";
        cout <<"\nWywolanie konstruktora Point...\n";
    }
    Polygon(const char *Nazwa, ::Point a, ::Point b, ::Point c, ::Point d){

    }
    Polygon(const char *Nazwa, int liczba, ::Point* tab){

    }
    // Polygon(const char *Nazwa, int liczba, ::Point tab){

    // }
   

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
    void SetName(const char* Nazwa);
    Point* GetVertices(){
        Point *tab;
        return tab;
    }
    /**
     * @brief Funkcja ustawienia imiona. ilosci wierzcholkow oraz parametrow
     * 
     * funkcja przepisuje nowemu obiektowi imie, ilosc wierzcholkow oraz przypisuje warosci
     * 
     * @param[in] liczba - ilosc wierzcholkow. name - nazwa, a i b - parametry
     * @return nic nie zwraca 
    */
    void SetVertice(int liczba, const char *name, double a, double b){
        _liczbawierzcholkow = liczba;
        _x = a;
        _y = b;
    }
    void SetNewVertices(double a, ::Point *tab){

    }
private:
    const char* Name;
    double _x;
    double _y;
    double _z;
    double _liczbawierzcholkow;
    static int m;
};