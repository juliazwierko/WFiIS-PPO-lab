#pragma once 

#include <iostream> 
#include <cmath> 
using namespace std;

// to jest klasa samochod   
class Car{
public:
    //ustawienie numera id samochodu (a - index naszego samochodu)
    void SetID(int a);
    //ustawienie dotyczace wlaczenia i wylaczenia samochodu (a - znaczenie false(wyl)/true(wl))
    void SetState(bool a);
    //ustaweinie pojemnosci baku (a - pojemnosc baku)
    void SetTankCapacity(double a);
    //ustawienie znaczenia sredniego spalenia (a - wartosc tego znaczenia)
    void SetConsumption(double a);
    //ustawienie ilosci paliwa w baku (a - ilosc paliwa)
    void SetFuel(double a);
    //wypisanie wszystkich cech samochodu
    void Presentation();
    //line 54 starts here:
    //Jazda samochodu
    void Drive(int a);
    //Wlaczenie silnika 
    void Start();
    //Dodawanie ilosci paliwa (a - ilosc paliwa)
    void Refuel(int a);
    //Spynienie autka (wylaczenie Z ustawieniem na false)
    void Stop();
private:
    //numer samochodu
    int _id;
    //stan wlaczenia
    bool _state;
    //pojemnosc
    double _tank_capacity;
    //zatrtaty podczas jazdy
    double _consumption;
    //paliwo
    double _fuel;
};
