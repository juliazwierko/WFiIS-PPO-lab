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
    cout<< "Identyfikator samochodu:" << _id << endl;
    if(_state == 1){
        cout << "Samochod wlaczony";
    }
    else{ 
        cout << "Samochod jest wylaczony" << endl;
    }
    cout << "Pojemnosc baku wynosi " << _tank_capacity << " litrow" << endl;
    cout << "Srednie spalanie wynosi " << _consumption << " litrow / 100 km" << endl;
    cout << "W baku jest " << _fuel << " litrow paliwa" << endl;
}
//////////////////////////////////////////////////////////////////////////////// line 54
void Car::Drive(int a){
    cout << endl <<"### Jazda ###" << endl;
    if(a<0){
        cout << "BLAD: Niepoprawny dystans" << endl; 
    }
    if(a>=0 && _state == false){
        cout << "BLAD: Wlacz silnik" << endl;
    }
    if (a>=0 && _state == true){
        cout << "Przejechales " << a << "km" << endl;   
    }
}
void Car::Start(){
    cout << endl <<"### Uruchomienie samochodu ###" << endl;
    _state = true;
    cout << "Silnik zostal wlaczony" << endl;
}
void Car::Refuel(int a){
    cout << endl << "### Tankowanie ###" << endl;
    if(_state == true){
        cout << "BLAD: Wylacz samochod przed tankowaniem" << endl;
    }
    else if(a<0){
        cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania" << endl;
    }
    else{
        _tank_capacity += a;
        cout << "Zatankowales " << a << " litrow" << endl;
    }
}
void Car::Stop(){
    cout << endl << "### Zatrzymanie samochodu ###" << endl;
    _state = false;
    cout << "Silnik zostal wylaczony" << endl;
}