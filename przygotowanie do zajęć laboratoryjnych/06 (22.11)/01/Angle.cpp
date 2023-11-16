#include "Angle.h"
#include <cmath>

Angle Angle::fromRadians(double kat){
    Angle new_phi; 
    // kat *= 2*M_PI/360;
    if(kat>2*M_PI){
        while(kat>2*M_PI){
            kat -= 2*M_PI;
        }
    }
    else if(kat<0){
        while(kat<0){
            kat += 2*M_PI;
        }
    }
    new_phi._kat = kat;
    return new_phi;
}

Angle Angle::fromDegrees(double kat){
    Angle new_phi;
    kat *= 2*M_PI/360;

    if(kat>2*M_PI){
        while(kat>2*M_PI){
            kat -= 2*M_PI;
        }
    }
    else if(kat<0){
        while(kat<0){
            kat += 2*M_PI;
        }
        
    }
    new_phi._kat = kat;
    return new_phi;
}

void Angle::print() const {
    cout << "Angle [rad]: " << _kat << endl;
}

Angle Angle::add(Angle phi){
    _kat += phi._kat;
    return *this;
}

double Angle::toDeg() const{
    return _kat*360/2*M_PI;
}   