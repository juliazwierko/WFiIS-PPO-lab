#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
    float r1 = 10;
    float r2 = 1e1; 
    // 1e1 
    // 1
    // e = 10, a liczba po e - potega dziesiatki
    // czyli mamy 1 * 10^1 = 10;

    cout << "1e1 = " << r2 << endl << endl;

    cout << "Obwod (r1=10) = " << 2 * r1 * M_PI << endl;
    cout << "Pole (r1=10) = " << r1 * r1 * M_PI << endl << endl;

    cout << "Obwod (r2=1e1) = " << 2 * r2 * M_PI << endl;
    cout << "Pole (r2=1e1) = " << r2 * r2 * M_PI << endl; 
    return 0;
}

// Output
// 1e1 = 10

// Obwod (r1=10) = 62.8319
// Pole (r1=10) = 314.159

// Obwod (r2=1e1) = 62.8319
// Pole (r2=1e1) = 314.159
