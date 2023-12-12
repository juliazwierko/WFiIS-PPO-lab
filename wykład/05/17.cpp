#include <iostream>
#include <string>
// #include "Frac.h"

namespace OOP {
    class Frac
    {
    public:
        friend Frac multi1(Frac *a, Frac *b);
        friend Frac multi2(Frac &a, Frac &b);

        Frac(int l = 0, int m = 1) : m_l(l), m_m(m){}
        
        //funkcja konwertujπca do float
        operator float() const
        {
            std::cout << "\nDziala funkcja konwertujaca do float." << std::endl;
            return (float)m_l/(float)m_m;
        }
        
        void print() const
        { std::cout << m_l << "/" << m_m << std::endl; }

    private:
        int m_l;
        int m_m;
    };
}//End of namespace OOP


namespace OOP {
    Frac multi1(Frac *a, Frac *b);
    Frac multi2(Frac &a, Frac &b);

namespace foo {
    namespace bar {
         namespace baz {
             struct A{};
         }
     }
 }

}//End of namespace OOP

/////////////////////////////////////////////////////////////////////////
int main()
{
    const OOP::Frac aFraction(1, 2);



    
    using OOP::Frac;
    Frac bFraction(1, 2);
    Frac cFraction;
    
    cFraction = OOP::multi1(const_cast<Frac*>(&aFraction), &bFraction);
    cFraction.print();
    // 1/4

    using namespace OOP;
    
    const Frac &dFraction = bFraction;

    //cFraction = multi2(dFraction, bFraction); //BLAD kompilacji
    cFraction = multi2(const_cast<Frac&>(dFraction), bFraction);
    cFraction.print();
    // 1/4
    
    namespace fbz = foo::bar::baz;
    fbz::A a;
    a = a;
}

/////////////////////////////////////////////////////////////////////////
namespace OOP {
    Frac multi1(Frac *a, Frac *b)
    {
        Frac tmp;
        tmp.m_l = a->m_l * b->m_l;
        tmp.m_m = a->m_m * b->m_m;
        return tmp;
    }

    /////////////////////////////////////////////////////////////////////////
    Frac multi2(Frac &a, Frac &b)
    {
        Frac tmp;
        tmp.m_l = a.m_l * b.m_l;
        tmp.m_m = a.m_m * b.m_m;
        return tmp;
    }
}//End of namespace OOP
