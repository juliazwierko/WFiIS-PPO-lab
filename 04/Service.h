#pragma once 
#include "Car.h"
#include <iostream>
#include <cmath> 
using namespace std;

//klasa service gdzie tworzymy zmiany w samochodzie
class Service{
public:
    void Test(Car *samochod, double a){
        cout << endl << "#############################################################"<<endl;
        cout << "### Test serwisowy ###" << endl << endl;
        cout << "1. Tankowanie do pelna:";
        (*samochod).SetState(false);
        (*samochod).Refuel(a);

        cout << "2. Jazda testowa: 10 km:";
        (*samochod).Start();

        (*samochod).Drive(a);

        (*samochod).Stop();

        cout << endl << "### Koniec testu serwisowego ###" << endl;
        cout << "#############################################################" << endl;
    }
    //
    void TestCopy(Car samochod, double a){

    }
};
