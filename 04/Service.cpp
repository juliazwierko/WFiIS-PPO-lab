#include "Service.h"
#include <iostream>

using namespace std;

void Service::TestCopy(Car car, int distance){
    cout << "#############################################################\n";
    cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n\n";
    TestCar(&car, distance);
}

void Service::Test(Car * pcar, int distance){
    cout << "#############################################################\n";
    cout << "### Test serwisowy ###\n\n";
    TestCar(pcar, distance);
}

void TestCar(Car *pcar, int distance){
    cout << "1. Tankowanie do pelna:\n";
    pcar->Refuel(1000);
    cout << "2. Jazda testowa: " << distance << " km:\n";
    pcar->Start();
    pcar->Drive(distance);
    pcar->Stop();

    cout << "### Koniec testu serwisowego ###\n";
    cout << "#############################################################\n\n";
}
