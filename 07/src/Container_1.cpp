#include "Container_1.h"
using namespace std;
 
/**

    poprzednnie
    [0,1,2,3] size--
    print 0-size: 0,1,2
    teraz te laby
    1,2,3
 */

/*
    int Container_1::Delete(){
    if(!IsEmpty()){
        int new_tab[4];
        for(int i = 1; i < size; i++){
            new_tab[i-1] = tab[i];
        }
        
        for(int i = 0; i < size-1; i++){
            tab[i] = new_tab[i];
        }

        return tab[size--];
    }
*/

int Container_1::Delete(){
    if(!IsEmpty()){
        int old_val = tab[0];
        for(int i = 1; i < size; i++){
            tab[i-1] = tab[i];
        }
        size--;
        return old_val;
    }
    else{
        cout << "#BLAD: Obiekt pusty\n";
        return -1;
    }
}

bool Container_1::IsEmpty() const{
    return size == 0;
}

bool Container_1::IsFull() const{
    return size == capacity;
}

void Container_1::Add(int number){
    if(!(IsFull())){
        tab[size++] = number;
    }
    else{
        cout << "#BLAD: Obiekt zapelniony\n";
    }

}

void Container_1::Print() const{
    cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < size; i++){
        cout << tab[i] << ",";
    }
    cout << endl;
}

int Container_1::Size(){
    return size;
}

void Container_1::Clear(){
    size = 0;
}

