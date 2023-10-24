#pragma once 
#include <iostream>

typedef float (*operacja)(const float* arr, const int size);

void Wypisz(const float* arr, const int size);

float Suma(const float* arr, const int size);
float Srednia(const float* arr, const int size);
    
float Wykonaj(operacja dzialanie,const float* arr, const int size);
