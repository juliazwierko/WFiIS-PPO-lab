#pragma once 

#include <iostream> 
#include <cmath> 
using namespace std;
  
class Car{
public:
    void SetID(int a);
    void SetState(bool a);
    void SetTankCapacity(double a);
    void SetConsumption(double a);
    void SetFuel(double a);
    void Presentation();
    void Drive(int distance);
    void Refuel(int fuel);
    void Start();
    void Stop();
private:
    int _id;
    bool _state;
    double _tank_capacity;
    double _consumption;
    double _fuel;
};
