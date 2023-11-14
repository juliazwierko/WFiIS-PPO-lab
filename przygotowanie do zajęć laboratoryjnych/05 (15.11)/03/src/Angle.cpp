#include "Angle.h"

Angle::Angle(double kat, double typ){
    _typ = typ;
    _kat = kat;
    if (typ == 0)
        cout << "... creating angle from radians.\n"; 
    
    if (typ == 1)
        cout << "... creating angle from degrees.\n";
}

double Angle::toRad() const{
    double temp = _kat;
    
    if(_typ == 1){
        temp *= 2*M_PI/360;
    }

    if(temp>2*M_PI){
        while(temp>2*M_PI){
            temp -= 2*M_PI;
        }
    }
    else if(temp<0){
        while(temp<0){
            temp += 2*M_PI;
        }
    }
    return temp;
}

double Angle::toDeg() const{
    double temp = _kat;
    
    if(_typ == 1){
        temp *= 2*M_PI/360;
    }

    if(temp>2*M_PI){
        while(temp>2*M_PI){
            temp -= 2*M_PI;
        }
    }
    else if(temp<0){
        while(temp<0){
            temp += 2*M_PI;
        }
    }
    return temp*360/2/M_PI;
}

void Angle::add(Angle kat){
    if(kat._typ == 1){
        double temp = kat.toDeg();
        double sum = temp + _kat;
        _kat = sum;
    }
    else{
        _kat += kat._kat;
    }
}
