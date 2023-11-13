#include <iostream>
#include "Punkt.h"
using namespace std;

int main(int argc, char * argv[])
{
   cout << "Punkt::n = " << Punkt::GetN() << endl;

   Punkt *f;
   f = new Punkt(10,20);

   cout << "Punkt::n = " << f->GetN() << endl;

   delete f;
   Punkt a[3];
   cout << "Punkt::n = "  << a[0].GetN() << endl;
   //a[0].n = 0; //BLAD bo n jest prywatne
}

// Punkt::n = -10
// Dziala konstruktor z inicjalizacja m_x, m_y = 10, 20
// Punkt::n = -9
// Dziala destruktor
// Dziala konstruktor
// Dziala konstruktor
// Dziala konstruktor
// Punkt::n = -7
// Dziala destruktor
// Dziala destruktor
// Dziala destruktor