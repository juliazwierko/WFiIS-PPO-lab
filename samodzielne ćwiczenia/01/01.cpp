/**
Celem zadania jest napisanie prostych funkcji pomocnych w operacjach na bitach. 
Bity te znajduja sie w pojedynczym slowie unsigned (32 bitowym).

Funkcje iPrintBit drukuje wartosci bitow (0|1) a miedzy nimi co okreslony odstep znak specjalny polepszajacy czytelnosc.
Odstep i znak podane sa jako argumenty. Uwaga, na koncu linii ten znak specjalny nie jest wypisywany. Uzyj std::cout do wypisywania (lub printf). 
Dzialanie innych funkcji powinno byc jasne (iGetBit, iSetBit, iFlipBit)
iPullBit zwraca warosc ostaniego (najmniej znaczacego bitu) i jednoczesnie przesuwa wszystkie bity "w prawo"
iAppendBit przesuwa bity "w lewo" a warosc ostatniego ustawia zgodnie z drugim argumentem. 

Prosze napisac, w miare mozliwosci, prosty makefile, 
ktory po napisaniu "make" skompiluje program a po napisaniu "make clean" usunie program wykonywalny i zbedne pliki obiektowe.
Od przyszlych zajec makefile jest wymagany (jego brak bedzie jednoznaczny z tym ze program sie nie kompiluje.)

 */
#include <iostream>

#include "bitop.h"


int main() {
  const unsigned  orig = 0xf0f;
  iPrintBit(&orig, 4,'.');   std::cout << std::endl;
  iPrintBit(&orig, 8,'_');
  std::cout << std::endl;
  std::cout << "------- test operacji -------" << std::endl;
  unsigned optest = 0;
  iPrintBit(&optest, 4,'.');   std::cout << " bez zmian " << std::endl;
  
  iSetBit(&optest, 3, true); // ustawienie bitu 1 na pozycji 3 (liczymy od 0)
  iPrintBit(&optest, 4,'.');   std::cout << " po ustawieniu bitu 3 " << std::endl;

  iSetBit(&optest, 2, true); 
  iSetBit(&optest, 8, true); 
  iSetBit(&optest, 3, false); // ustawienie bitu 0 na pozycji 3 (liczymy od 0)
  iPrintBit(&optest, 4,'.');   std::cout << " po ustawieniu 3 na 0 a 2 i 8 na 1 " << std::endl;
  
  iFlipBit(&optest, 2 ) ; // obracamy bit na pozycji 2
  iFlipBit(&optest, 3 ) ; // obracamy bit na pozycji 3
  iPrintBit(&optest, 4,'.');   std::cout << " po obroceniu bitow na pozycji 2 i 3 " << std::endl;

  iAppendBit(&optest, true);
  iAppendBit(&optest, false);
  iAppendBit(&optest, true);
  iPrintBit(&optest, 4,'.');   std::cout << " po wsunieciu sekwencji bitow 101 " << std::endl;

  std::cout << "Wyciagniety ostatni bit " << iPullBit(&optest) << std::endl;
  std::cout << "Wyciagniety ostatni bit " << iPullBit(&optest) << std::endl;
  iPrintBit(&optest, 4,'.');   std::cout << " po wyjeciu dwoch bitow " << std::endl;
  
  std::cout << "Wartosc bitu na pozycji 2 " << iGetBit(&optest, 2) << std::endl;
  std::cout << "Wartosc bitu na pozycji 1 i 5 z pierwszej liczby " << iGetBit(&orig, 1) <<  " " << iGetBit(&orig, 5) << std::endl;
}
/* wynik
0000.0000.0000.0000.0000.1111.0000.1111
00000000_00000000_00001111_00001111
------- test operacji -------
0000.0000.0000.0000.0000.0000.0000.0000 bez zmian 
0000.0000.0000.0000.0000.0000.0000.1000 po ustawieniu bitu 3 
0000.0000.0000.0000.0000.0001.0000.0100 po ustawieniu 3 na 0 a 2 i 8 na 1 
0000.0000.0000.0000.0000.0001.0000.1000 po obroceniu bitow na pozycji 2 i 3 
0000.0000.0000.0000.0000.1000.0100.0101 po wsunieciu sekwencji bitow 101 
Wyciagniety ostatni bit 1
Wyciagniety ostatni bit 0
0000.0000.0000.0000.0000.0010.0001.0001 po wyjeciu dwoch bitow 
Wartosc bitu na pozycji 2 0
Wartosc bitu na pozycji 1 i 5 z pierwszej liczby 1 0
*/
