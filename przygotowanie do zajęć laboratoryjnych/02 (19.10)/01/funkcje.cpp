#include "funkcje.h"

int wczytajLiczbeWyrazow(void){
    int a;
    std::cout << "Podaj n: ";
    std::cin >> a;

    return a;
}


void wypiszBinarnie(const int a){
    int temp = a;
    int licz = 0;
    while(temp > 0){
        temp /= 2;
        licz ++;
    }
    int temp3 = licz;

    temp = a;
    int temp2 = 0;
    int *tab = new int[licz]; 
    for(unsigned int i = 0; i < licz; i++){
        temp2 = temp%2;
        temp = temp/2;
        licz--;
        *(tab + licz) = temp2; 
        // std::cout << "tab[" << licz << "] = " << *(tab+licz) << std::endl;
    }
    *(tab) = temp;

    for(int i=0; i<temp3; i++){
        std::cout << *(tab+i);
    }
    delete [] tab;
}


const int* inicjalizujCiagFibonacciego(const int a){
    if (a<0){
        return nullptr;
    }
    int *tab = new int[a+1];
    tab[0] = 0;
    if(a > 0){
        tab[1] = 1;
        for(unsigned int i = 2; i <= a; i++){
            tab[i] = tab[i-1] + tab[i-2];
        }
    }
    return tab;
}


void wypisz(const int* tab,const int a){
    std::cout << "(";
    for(unsigned int i = 0; i < a; i++){
        std::cout << *(tab+i) << ", ";
    }
    std::cout << *(tab+a) << ")" << std::endl;
}


void suma(const int* tab, const int a){
    int suma = 0;
    for(unsigned int i = 0; i < a; i++){
        suma += *(tab+i);
    }
    suma += *(tab+a);
    std::cout << "suma: " << suma << std::endl;
}


void iloczyn(const int* tab, const int a){
    int iloczyn = 1;
    for(unsigned int i = 1; i < a; i++){
        iloczyn *= *(tab+i);
    }
    iloczyn *= *(tab+a);
    std::cout << "iloczyn: " << iloczyn << std::endl;
}


void suma(const int* tab1, const int a, const int* tab2, const int b){
    int suma = 0;
    for(unsigned int i = 0; i < a; i++){
        suma += *(tab1+i);
    }
    for(unsigned int i = 0; i < b; i++){
        suma += *(tab2+i);
    }
    suma += *(tab1+a) + *(tab2+b);
    std::cout << "suma dwoch ciagow: " << suma << std::endl;
}

void max(const int* tab1, const int a, const int* tab2, const int b){
    int temp1 = *tab1;
    for(unsigned int i = 0; i < a; i++){
        if(temp1 < *(tab1+i)){
            temp1 = *(tab1+i);
        }
    }
    if(temp1 < *(tab1+a))
        temp1 = *(tab1+a);

    int temp2 = *tab2;
    for(unsigned int i = 0; i < b; i++){
        if(temp2 < *(tab2+i)){
            temp2 = *(tab2+i);
        }
    }
    if(temp2 < *(tab2+b))
        temp2 = *(tab2+b);

    if(temp1 < temp2){
        std::cout << "maximum = " << temp2 << " (ciag1)" << std::endl;
    }
    else{
        std::cout << "maximum = " << temp1 << " (ciag0)" << std::endl;
    }
}


void  UsunCiag(const int *a){
    delete [] a;
}
