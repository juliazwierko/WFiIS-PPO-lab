#include "ciagi.h"

/**
 * @brief funkcja tworzaca statyczne tablice 
 * 
 * @param a - rozmiar tablicy 
 * @param b - roznica miedzy sasiednimi elementami 
 * @return float* 
 */
float* inicjalizujArytmetyczny(const int a, const float b){
    float *tab  = new float[a]; 

    float var = 0.0;
    for(unsigned int i = 0; i < a; i++){
        *(tab+i) = var;
        var += b;
    }
    return tab;
}


/**
 * @brief funkcja wypisujaca podany ciag 
 * 
 * @param a - rozmiar tablicy 
 * @param b - wskaznik na 1-szy element tablicy 
 */
void wypiszCiag(const int a, float *b){
    std::cout << "[";
    for(unsigned int i = 0; i < a-1; i++){
        std::cout << *(b+i) << ", ";
    }
    std::cout << *(b+a-1) <<"]" << std::endl;
}


/**
 * @brief funkcja wyliczajaca sume wszyztkich elementow ciagu
 * 
 * @param a - rozmziar tablicy 
 * @param b - wskaznik na 1-szy element tablicy 
 * @return float 
 */
float sumaCiagu(const int a, float *b){
    float suma = 0.0;
    for(unsigned int i = 0; i < a; i++){
        suma += *(b+i);
    }
    return suma;
}


/**
 * @brief funkcja tworzaca statyczne tablice
 * 
 * @param a - rozmiar tablicy 
 * @param b - wynik dzielenia sasiednich elementow 
 * @return float* 
 */
float* inicjalizujGeometyczny(const int a, const float b){
    float *tab = new float[a];
    *tab = 1.0;
    for(unsigned int i = 1; i < a-1; i++){
        *(tab+i) = *(tab+i-1) * b;
    }
    *(tab+a-1) = *(tab+a-2) * b;
    return tab;
}

/**
 * @brief funkcja szuka najmniejszy element w podanym ciagu
 * 
 * @param a - rozniar tablicy
 * @param b - wskaznik na pierwszy element tablicy 
 * @return float 
 */
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


/**
 * @brief funkcja szuka najwiekszy element w podanym ciagu
 * 
 * @param a - rozmiar tablicy
 * @param b - wskaznik na pierwszy element
 * @return float 
 */
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


/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @param c 
 * @return float* 
 */
float* dodajCiagi(const int a, float *b, float *c){
    float *tab = new float[a];
    for(unsigned int i = 0; i < a; i++){
        *(tab+i) = *(b+i) + *(c+i);
    }
    return tab;
}


/**
 * @brief funkcja sprawdza czy ciag jest arytmetyczny
 * 
 * @param a - rozmiar podanej tablicy 
 * @param b - wskaznik na pierwszy element tablicy
 * @return int = funkcja zwraca 0, jezeli ciag nie jest arytmetyczny i 1 w przeciwnym przypadku
 */
bool czyJestArytmetyczny(const int a, float *b){
    if(a < 2){
        return false; //za malo elementow dla tworzenia ciaga arytmycznego
    }
    int temp = *(b+1) - *(b);
    for(unsigned int i = 1; i < a-1; i++){
        if(*(b+i)-*(b+i-1) != temp)
            return false;
    }
    if(*(b+a-1)-*(b+a-2) != temp){
        return false;
    }
    return true;
}


/**
 * @brief funkcja zwalnia zaolokowana dynamiczne pamiec
 * 
 * @param a - wskaznik na pierwszy element tablicy
 */
void posprzatajCiag(float *a){
    delete [] a;
}