#include "lab03.h"

const int* initFibonacci(const int a){
    if (a < 0)
        return nullptr;
    int *tab = new int[a+1];
    tab[0] = 0; 
    tab[1] = 1;
    for(unsigned int i = 2; i <= a; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }
    return tab;
}

void print(const int *tab, const int a){
    std::cout << "(";
    for(unsigned int i = 0; i < a; i++){
        std::cout << tab[i] << ", ";
    }
    std::cout << tab[a] << ")" << std::endl; 
}

void deleteSequence(const int *tab){
    delete [] tab;
}

/*
sequencesList - tablica zawierajaca ciagi Fibonacciego
sequencesLenght - tablica zawierajaca informacje o ilosci wyrazow w danym ciagu
numberOfSequences - aktualna ilosc ciagow
*/
void addSequence(int *numberOfSequences, int ***sequencesList, int **sequencesLenght, int a){
    ++*numberOfSequences;
    int **seqList = new int* [*numberOfSequences];
    int *seqLenght = new int [*numberOfSequences];

    for(int i = 0; i < (*(numberOfSequences)-1); i++){
        *(seqLenght + i) = **(sequencesLenght + i); // int = int
        *(seqList + i) = **(sequencesList + i); // int * = int *
    }

    *(seqLenght + *(numberOfSequences)-1) = abs(a)+1;
    *(seqList + *(numberOfSequences)-1) = (int *)initFibonacci(abs(a));

    if(*sequencesList != NULL){
        delete [] *sequencesList;
        delete [] *sequencesLenght;
    }
  

    // *sequencesList = seqList; // int*** = int**
    // *sequencesLenght = seqLenght;
}

//Wypisuje wszystkie ciagi:
//Ciag nr 0: (0, 1, 1, 2, 3, 5)
//Ciag nr 1: (0, 1, 1, 2, 3)
//Ciag nr 2: (0, 1, 1, 2, 3, 5, 8)
//Wypisuje wszystkie ciagi:
//Ciag nr 0: (0, 1, 1, 2, 3, 5)
//Ciag nr 1: (0, 1, 1, 2, 3, 5, 8)