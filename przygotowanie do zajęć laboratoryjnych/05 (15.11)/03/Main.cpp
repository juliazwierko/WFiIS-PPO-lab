// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod, bez powielania kodu - D.R.Y)
//
//  Celem zadania jest napisanie małej klasy modelujac kąt.
//  Jak wiemy, kąt może zmieniac się jedynie w przedziale od 0 do 2PI, 
//  Wszystkie kąty mniejsze niż 0 i wieksze niz 2PI sa tożsame z jakimś katem z przedziału od 0 od 2PI.
//  Kąty spoza przediałlu 0-2PI sprowadza się do przedziału 0-2PI poprzez dodanie/odjęcie wielokrotnosci 2PI.

// Wartość kąta w jednostkach SI podawana jest w radianach czyli jest liczbą rzeczywistą z zakresy 0 do 2PI.
// Jednak w praktyce bardzo często używa się miary stopniowej i wtedy przydatny jest odpowiedni konstruktor 
// i metoda dostępowa. Współistnienie tych dwóch systemów miary kąta jest na tyle problematyczne że klasa Angle
// musi uniemożliwic konstruckcje bez zdefiniowanych jednostek.
// Biblioteka matematyczna (cmath) definiuje stala M_PI, którą należy użyć zamiast 3.14.
// Dla ćwiczenia, stosujemy głośne konstruktory.
//
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz CMakeLists.txt, chyba że polecenie stanowi inaczej)
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli katalog z plikami i Main.cpp należy wgrać do UPEL jako archiwum tar.gz
// UWAGA:
// * pliku Main.cpp w końcowym rozwiazaniu powinien być nie zmieniony
// * archiwum tar.gz nie powinno zawierać katalogu build/
// * brak wysłanego rozwiązania (bez względu na jego ukończenie),
//   jest tożsame z brakiem obecności na zajęciach.

#include "Angle.h"

int main() {
  Angle phi0(0.45,RADIAN);
  const Angle phi1(11.45,RADIAN); // po podaniu kąta powyżej 2PI
  //                              // i mniejszego niż 0 nastapic ma obrót do przedzialu (0, 2PI):
  //                              // angle -= 2PI lub angle += 2PI odpowiednio (wielokrotnie)
  const Angle phi2(-715,DEGREE);  // tak samo tutaj z jednoczesną konwersją na radiany:
  //                              // x * 2PI/360
  
  double realphi1 = phi1.toRad();
  double realphi2 = phi2.toRad();
  std::cout << "Angles[rad]: phi1=" << realphi1 << " phi2=" << realphi2 << std::endl;

  realphi1 = phi1.toDeg(); // konwersja na stopnie, transformacja odwrotna do tej zdef. w linii 40
  realphi2 = phi2.toDeg();
  std::cout << "Angles[deg]: phi1=" << realphi1 << " phi2=" << realphi2 << std::endl;

  phi0.add(phi2);
  std::cout << "Sum[deg]: phi0=" << phi0.toDeg() << std::endl;
}
/* wynik dzialania
... creating angle from radians.
... creating angle from radians.
... creating angle from degrees.
Angles[rad]: phi1=5.16681 phi2=0.0872665
Angles[deg]: phi1=296.037 phi2=5
Sum[deg]: phi0=312.262
 */