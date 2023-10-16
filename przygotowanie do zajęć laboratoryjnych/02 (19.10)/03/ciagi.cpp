#include "ciagi.h"

float* inicjalizujArytmetyczny(const int a, const float b){
    float *tab  = new float[a]; 

    float var = 0.0;
    for(unsigned int i = 0; i < a; i++){
        *(tab+i) = var;
        var += b;
    }
    return tab;
}

void wypiszCiag(const int a, float *b){
    std::cout << "[";
    for(unsigned int i = 0; i < a-1; i++){
        std::cout << *(b+i) << ", ";
    }
    std::cout << *(b+a-1) <<"]" << std::endl;
}

float sumaCiagu(const int a, float *b){
    float suma = 0.0;
    for(unsigned int i = 0; i < a; i++){
        suma += *(b+i);
    }
    return suma;
}

float* inicjalizujGeometyczny(const int a, const float b){
    float *tab = new float[a];
    *tab = 1.0;
    for(unsigned int i = 1; i < a-1; i++){
        *(tab+i) = *(tab+i-1) * b;
    }
    *(tab+a-1) = *(tab+a-2) * b;
    return tab;
}

float minimumCiagu(const int a, float *b){
    float temp = *b;
    for(unsigned int i = 0; i < a; i++){
        (temp < *(b+i)) ? temp = *(b+i) : temp;
    }   
    if(temp > *(b+a-1)){
        return *(b+a-1);
    }
    return temp;
}

float maximumCiagu(const int a, float *b){
    float temp = *b;
    for(unsigned int i = 0; i < a; i++){
        (temp > *(b+i)) ? temp : temp = *(b+i) ;
    }   
    if(temp < *(b+a-1)){
        return *(b+a-1);
    }
    return temp;
}

float* dodajCiagi(const int a, float *b, float *c){
    float *tab = new float[a];
    for(unsigned int i = 0; i < a; i++){
        *(tab+i) = *(b+i) + *(c+i);
    }
    return tab;
}

bool czyJestArytmetyczny(const int a, float *b){
    if(a < 2){
        return false; //za malo elementow dla tworzenia ciaga arytmycznego
    }
    float temp = *(b+1) - *(b);
    for(unsigned int i = 1; i < a-1; i++){
        if(*(b+i)-*(b+i-1) - temp > 0.0001)
            return false;
    }
    if(*(b+a-1)-*(b+a-2) - temp > 0.0001){
        return false;
    }
    return true;
}

void posprzatajCiag(float *a){
    delete [] a;
}