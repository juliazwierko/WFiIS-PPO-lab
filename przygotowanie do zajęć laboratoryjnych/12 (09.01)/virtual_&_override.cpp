#include <iostream> 
#include <string>
using namespace std;

class Gun{
public:
    virtual void Shoot(){
        cout << "Bang!\n";
    }
};

class SubmachineGun : public Gun{
public:
    void Shoot() override{
        cout << "BANG! BANG! BANG!\n";
    }
};

int main(){
    Gun gun;
    SubmachineGun machinegun;

    Gun *weapon = &gun;
    weapon->Shoot();

    weapon = &machinegun;
    weapon->Shoot();
    return 0;
}
