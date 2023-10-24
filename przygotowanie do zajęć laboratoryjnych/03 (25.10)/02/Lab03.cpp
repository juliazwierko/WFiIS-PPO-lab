#include "Lab03.h"
#include <cstring>

using namespace std;

void AddStudent(int* numberofstudents, char*** nameslist, int** yearlist, const char* name, const int year){
    ++(*numberofstudents);
    char** temp2 = new char* [*numberofstudents];
    int* temp = new int [*numberofstudents];

    if( (*numberofstudents)>1 ){
        for(int i = 0; i < *numberofstudents-1; i++){
            temp2[i] = new char [strlen((*nameslist)[i]+1)];
            strcpy(temp2[i], (*nameslist)[i]);
            delete [] (*nameslist)[i];
            temp[i] = (*yearlist)[i];
        }
        delete [] *nameslist;
        delete [] *yearlist;
    }
    temp2[*numberofstudents-1] = new char [strlen(name)+1];
    strcpy(temp2[*numberofstudents-1], name);
    temp[*numberofstudents-1] = year;
    *nameslist = temp2;
    *yearlist = temp;
}

void Cat(int numberofstudents, char** nameslist){
    for(int i = 0; i < numberofstudents; i++){
        cout << (nameslist)[i] << endl;
    }
}

void Cat(int numberofstudents, int* yearslist){
    for(int i = 0; i < numberofstudents; i++){
        cout << (yearslist)[i] << endl;
    }
}

void ClearList (int numberofstudents, char*** nameslist){
    for(int i = 0; i < numberofstudents; i++){
        delete [] (*nameslist)[i];
    }
    delete [] *nameslist;
    *nameslist = nullptr;
}

void ClearList (int numberofstudents, int** yearslist){
    delete [] *yearslist;
    *yearslist = nullptr;
}
