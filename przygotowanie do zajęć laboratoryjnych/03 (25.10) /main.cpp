// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Ostateczny program powinien byc przyjazny dla programisty (miec czytelny 
// i dobrze napisany kod, bez powielania kodu - D.R.Y)
//
// Prosze napisac funkcje tworzace i operaujace na ciagach. 
// Należy utworzyć ciągi geometryczne o pierwszym wyrazie 1 i zadanym ilorazie:
// wynik[i] = wynik[i-1]*iloraz;
// Oprocz tego należy obliczyc sume oraz średnią arytmetyczną wszystkich elementów
// Prosze zadbać o dobre zarządzanie pamiecią (valgrind jest pomocny), gdzie do 
// alokacji i dealokacji pamieci wykorzystywane są new i delete
// 
// Proszę zdefiniować w CMakeLists.txt odpowiednie definicje zmiennej LONG_LOOP
// tak aby program kompilował się i wykonywał w zależności od jej wartości, którą
// odpowiednio możemy modyfikować za pomocą wykonania cmake:
// cmake ../ -DPERFORME_LONG_LOOP=0 -> tożsame z camke ../
// cmake ../ -DPERFORME_LONG_LOOP=1
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli katalog z plikami i Main.cpp należy wgrać do UPEL jako archiwum tar.gz
// UWAGA:
// * pliku Main.cpp w końcowym rozwiazaniu powinien być nie zmieniony
// * archiwum tar.gz nie powinno zawierać katalogu build/
// * brak wysłanego rozwiązania (bez względu na jego ukończenie),
//   jest tożsame z brakiem obecności na zajęciach.

#include "GSeries.h"
#include "GOperations.h"
#include "GOperations.h" // To nie pomyłka, ponowne include
#include <chrono>
#define LONG_LOOP 1

int main ()
{
  // Get starting timepoint
  // auto start = std::chrono::high_resolution_clock::now();

  const rozmiarCiagu rozmiar = 4;
  const float iloraz = 2;
  
  // pierwszy element ciagu to 1
  const ciag geometryczny = InicjalizujCiagGeometryczny (rozmiar, iloraz);
  Wypisz(geometryczny, rozmiar);
  printf("Suma: %.2f\n",Suma(geometryczny, rozmiar));


  if(LONG_LOOP){ // Zmienna zdefiniowana na poziomie CMakeLists.txt
    const rozmiarCiagu rozmiar = 100000;
    const float iloraz = 1.0005;
    const ciag geometryczny = InicjalizujCiagGeometryczny (rozmiar, iloraz);
    // Wypisz(geometryczny, rozmiar);

    const char* op_nazwa [] = {"Suma", "Srednia"};
    operacja op [] = {Suma, Srednia};

    const int ileOperacji = sizeof(op)/sizeof(operacja);

    for (int i = 0; i < ileOperacji; ++i)
      //printf("%s: %.2f\n",op_nazwa[i], Wykonaj(op[i],geometryczny, rozmiar));
      std::cout << op_nazwa[i] << ": " << Wykonaj(op[i],geometryczny, rozmiar) <<std::endl;
  }

  UsunCiagi();

  // auto stop = std::chrono::high_resolution_clock::now();
  // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  // std::cout << "Czas wykonania main: "
  //        << duration.count() << " mikrosekund" << endl;
}
/* wynik dzialania programu (ostatnia linia oczywiście będzie się różnić wartością)
(1, 2, 4, 8)
Suma: 15.00
Suma: 1.02043e+25
Srednia: 1.02043e+20
Czas wykonania main: 897 mikrosekund
*/
