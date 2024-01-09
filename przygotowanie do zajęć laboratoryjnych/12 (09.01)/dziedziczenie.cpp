#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Figura{
public:
    //pure virtual
    //rzeczy wirtualne (virtual!!!)
    virtual string Nazwa()=0;
    virtual float Pole()=0;
    virtual float Obwod()=0;
};

class Trojkat : public Figura{
public:
    string Nazwa() override{
        return "Trojkat";
    }
    float Pole() override{
        float p = (Obwod())/2;
        float S = sqrt(p*(p-_a)*(p-_b)*(p-_c));
        return S;
    }
    float Obwod() override{
        return _a+_b+_c;
    }
private:
    float _a = 0;
    float _b = 0;
    float _c = 0;
};

int main(int argc, char **argv){
    Figura *fig = new Trojkat();
    Trojkat *tro = new Trojkat();
    return 0;
}
