#include <iostream>
#include "Operacje.h"
#include "PolozeniePoczatkowe.h"
#include "Czas.h"
#include "Przyspieszenie.h"
#include "Predkosc.h"

float Polozenie(){
    float a = Przyspieszenie(); 
    int v = Predkosc();
    int r_0 = PolozeniePoczatkowe();
    float t = Czas();

    float var1 = Kwadrat(t);
    float var2 = Iloczyn(a, var1);

    float var3 = Iloczyn(v, t);

    float var4 = Suma(var2, var3);
    float var5 = Suma(var4,r_0);

    return var5;
}