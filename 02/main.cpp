// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
// - co to znaczy? 
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab02/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane (patrz przyklad w pliku List.h (format pod Doxygena))
// * do alokacji i dealokacji pamięci używaj operatorów: new i delete

#include <iostream>
#include "List.h"
using namespace std;


int main(int argc, char** argv) 
{
  slist List;
  slistEl* p; 
	
  init(&List);

  push_front(&List, 'a');

  push_back(&List, ' ');
  push_back(&List, 'm');
  push_back(&List, 'a');

  push_front(&List, 'l');
  
  p = find(&List, 'm');

  push_back(&List, ' ');
  push_back(&List, 'k');
  push_back(&List, 'o');
  push_back(&List, 't');
  push_back(&List, 'a');
  
  p = find(&List, 'k');

  push_front(&List, 'A');


  printl(&List);


  return 0;
}

/** Wynik dzialania programu:
Moja lista: <Ala ma kota>
*/
