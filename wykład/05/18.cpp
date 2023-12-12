#include <iostream>
#include <string>
// #include "Frac.h"

namespace OOP
{
    class Frac
    {
    public:
        explicit Frac(int l = 0, int m = 0, const std::string& Opis = "") : _l(l), _m(m), _Opis(Opis)
        {
            std::cout << "->Dziala<- \n";
        }

        void SetOpis(const std::string& Opis) const
        { _Opis = Opis; }

        //Tak byÊ nie moøe
        //void SetLM(int l, int m) const
        void SetLM(int l, int m)
        { _l = l; _m = m; }

        void printOut() const
        { std::cout << _Opis << "= " << _l << "/" << _m << std::endl; }

    private:
        int _l;
        int _m;
        mutable std::string _Opis;
    };
}//End of namespace OOP


/////////////////////////////////////////////////////////////////////////
int main()
{
    using namespace OOP;
    const Frac aFraction(1, 2, "aFraction");
    const Frac bFraction;

    aFraction.printOut();
    //aFraction= 1/2

    bFraction.SetOpis("bFraction"); //OK mimo iø obiekt sta≥y
    // bFraction.SetLM(1, 2); //Blad bo obiekt sta≥y

    bFraction.printOut();
    //aFraction= 1/2
}
