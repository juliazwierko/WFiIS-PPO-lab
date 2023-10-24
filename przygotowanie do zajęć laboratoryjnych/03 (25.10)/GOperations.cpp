#include "GOperations.h"

using namespace std;

void Wypisz(const float* arr, const int size){
    cout << "(";
    for(unsigned int i = 0; i<size - 1; i++){
        cout << *(arr+i) << " ";
    }
    cout << arr[size-1] << ")" << endl;
}

float Suma(const float* arr, const int size){
    float suma = 0;
    for(unsigned int i = 0; i < size; i++){
        suma += arr[i];
    }
    return suma;
}

float Srednia(const float* arr, const int size){
    return (Suma(arr, size))/size;
}

// typedef float (*operacja)(const float* arr, const int size);
float Wykonaj(operacja dzialanie,const float* arr, const int size){
    return dzialanie(arr, size);
}