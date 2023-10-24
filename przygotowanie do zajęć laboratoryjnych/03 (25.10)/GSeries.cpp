#include "GSeries.h"

using namespace std;

float *globArr[2];

unsigned int licznik = 0;

float* InicjalizujCiagGeometryczny(const int size, const float iloczyn){
    float* arr = new float[size];
    arr[0] = 1.0;
    for(unsigned int i = 1; i < size; i++){
        arr[i] = arr[i-1] * iloczyn;
    }
    globArr[licznik] = arr;
    licznik++;
    return arr;
}

void UsunCiagi(){
    delete[] globArr[0];
    delete[] globArr[1];
}