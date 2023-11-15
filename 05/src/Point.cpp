#include "Point.h"

void Point::Presentation(){
    cout << "### Prezentacja punktu ###\n";
    if(n == 1){
        cout << "Nazwa: A\n";
    }
    else if(n == 2){
        cout << "Nazwa B\n";
    }
    else if(n == 3){
        cout << "Nazwa C\n";
    }
    else if(n == 4){
        cout << "Nazwa D\n";
    }
    else if(n == 5){
        cout << "Nazwa E\n";
    }
    else if(n == 6){
        cout << "Nazwa F\n";
    }
    cout << "Wspolrzedna X: " << _x << endl;
    cout << "Wspolrzedna Y: " << _y << endl;
}

void Point::SetName(const char* Name){
    // _name = Name;
    //urzylam statycznej zmiennei n dla przepisania name ^_^ 
}

void Point::SetX(double x){
    _x = x;
}

void Point::SetY(double y){
    _y = y;
}

int Point::n = 0;