#include "Array.h"
using namespace std;

int* InitArray(int size){
    int* tab = new int[size];
    return tab;
}

void CreateSequence(int* tab, int size){
    if(size<0){
        cout << "Tablica jest pusta, albo podan zly size" << endl;
    }
    if(size == 1){
        tab[0] = 1;
    }
    else{
        tab[0] = 1;
        tab[1] = 1;
        int temp = 2;
        for(int i=2; i<size; i++){
            tab[i] = temp * tab[i-1];
            temp++;
            // cout << tab[i] << endl;
        }
    }
}

void DeleteArray(int* tab){
    delete [] tab;
}
