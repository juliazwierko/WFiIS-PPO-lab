#pragma once

#include <iostream>

float* inicjalizujArytmetyczny(const int a, const float b);
void wypiszCiag(const int a, float *b);
float sumaCiagu(const int a, float *b);

float* inicjalizujGeometyczny(const int a, const float b);
float minimumCiagu(const int a, float *b);
float maximumCiagu(const int a, float *b);

float* dodajCiagi(const int a, float *b, float *c);

bool czyJestArytmetyczny(const int a, float *b);

void posprzatajCiag(float *a);