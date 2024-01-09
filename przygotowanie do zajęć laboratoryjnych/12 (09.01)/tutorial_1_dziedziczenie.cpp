#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    string name;
};

class Student : public Human{
public:
    // string name;
    string group;
    void Learn(){
        cout << "Ja sie ucze.\n";
    }
};

class Professor : public Human{
public:
    // string name;
    string subject;
};

class ExtramuralStudent : public Student{ //!!!
public:
    void Learn(){
        cout << "Bywam na uczelnie rzadziej niz zwykly student\n";
    }

private:
};

int main(){
    Student st;
    st.Learn();

    Professor pr;

    Human h;

    ExtramuralStudent extraSt;
    extraSt.Learn();
    return 0;
}

//Ja sie ucze.
//Bywam na uczelnie rzadziej niz zwykly student

