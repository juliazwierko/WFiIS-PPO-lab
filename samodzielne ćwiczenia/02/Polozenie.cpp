#include"Polozenie.h"

float Polozenie(){
    float a = Przyspieszenie(); 
    int v = Predkosc();
    int r_0 = PolozeniePoczatkowe();
    float t = Czas();
    float r = (a*pow(t,2))/2 + (v*t) + r_0;
    return r;
}