#include "Car.h"
using namespace std;

void Car::SetID(int a){
    _id = a;
}
void Car::SetState(bool a){
    _state = a;
}
void Car::SetTankCapacity(double a){
    _tank_capacity = a;
}
void Car::SetConsumption(double a){
    _consumption=a;
}
void Car::SetFuel(double a){
    _fuel = a;
}
void Car::Presentation(){
    cout<< endl << "### Prezentacja ###" << endl;
    cout<< "Identyfikator samochodu: " << _id << endl;
    if(_state == 1){
        cout << "Samochod wlaczony";
    }
    else{ 
        cout << "Samochod jest wylaczony" << endl;
    }
    cout << "Pojemnosc baku wynosi " << _tank_capacity << " litrow" << endl;
    cout << "Srednie spalanie wynosi " << _consumption << " litrow / 100 km" << endl;
    cout << "W baku jest " << _fuel << " litrow paliwa";
}
//////////////////////////////////////////////////////////////////////////////// line 54
void Car::Drive(int distance){
    cout << "\n\n### Jazda ###\n";

    if (distance < 0){
        cout << "BLAD: Niepoprawny dystans\n";
        return; 
    }

    if (!_state){
        cout << "BLAD: Wlacz silnik\n";
        return;
    }

    int maxDistance = _fuel / _consumption * 100;

    if (distance >= maxDistance){
        distance = maxDistance;
    }

    _fuel -= distance * _consumption / 100;
    cout << "Przejechales " << distance << " km";
}

void Car::Refuel(int fuel){
    cout << "\n\n### Tankowanie ###\n";

    if (_state){
        cout << "BLAD: Wylacz samochod przed tankowaniem\n";
        return;
    }

    if (fuel < 0){
        cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania\n";
        return;
    }

    float maxRefuel = _tank_capacity - _fuel;
    float fuelToTank = fuel;

    if (fuel > maxRefuel){
        fuelToTank = maxRefuel;
    }

    _fuel += fuelToTank;
    cout << "Zatankowales " << fuelToTank << " litrow";
}

void Car::Start(){
    cout << "\n\n### Uruchomienie samochodu ###" << endl;

    if(_fuel <= 0){
       cout << "BLAD: Brak paliwa, zatankuj\n"; 
       return;
    }
    SetState(true);
    cout << "Silnik zostal wlaczony" << endl;
}

void Car::Stop(){
    cout << "\n\n### Zatrzymanie samochodu ###\n";
    _state = false;
    cout << "Silnik zostal wylaczony" << endl;
}
