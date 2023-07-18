// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.
//
// Prosze napisac funkcje wykonujace zwracające odpowiednie wartości lub
// wykonujące proste operacje. 
// Deklaracja każdej funkcji ma znajdować
// się w osobnym pliku nagłówkowym, a definicja w plikach .cpp
//
// Odpowiednie wartości zwracane proszę
// wywnioskować z załączonego wyniku na końcu tego pliku.
//
// UWAGA: Implementacja fukcji Polozenie() powinna zawierać funkcje Kwadrat(), Iloczyn() i Suma()
//        zdefiniowane w osobnym pliku Operacje.h (.cpp)
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.
//
// Proces kompilacji proszę wykonać w dowolny sposób (z / lub bez makefile)

// Skonczone zadanie nalezy wyslac na UPEL w formie spakowanego katalogu (Lab02)
// do archiwum Lab02.tar.gz
// tar -czvf Lab02.tar.gz ~/oop/Lab02

#include<iostream>
#include"Polozenie.h"
#include"PolozeniePoczatkowe.h"
#include"Czas.h"
#include"Przyspieszenie.h"
#include"Predkosc.h"

using namespace std;

int main () {
  
  cout<<"a = "  <<Przyspieszenie()<<"\n"; 
  cout<<"v = "  <<Predkosc()<<"\n";
  cout<<"r_0 = "<<PolozeniePoczatkowe()<<"\n";
  cout<<"t = "  <<Czas()<<"\n";

  cout<<"r = a*t^2/2 + v*t + r_0 = "<<Polozenie()<<"\n";

  return 0;
}

/* 
brachwal@vbox:[Lab2]$ ./run 
a = 9.8
v = 333
r_0 = 22
t = 1.4
r = a*t^2/2 + v*t + r_0 = 495.06
