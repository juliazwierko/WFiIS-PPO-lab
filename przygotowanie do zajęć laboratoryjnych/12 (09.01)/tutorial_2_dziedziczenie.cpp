#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    Person(string name, unsigned age){
        this->name = name;
        this->age = age;
    }
    void print() const
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }

private:
    string name;
    unsigned age;
};

class Employee: public Person{
public:
    Employee(string name, int age, string company) : Person(name, age){
        this->company = company;
    }
private:
    string company;
};

int main(){
    Person person {"Julia", 18};
    person.print(); 

    Employee employee {"Pawel", 23, "Nokia"};
    employee.print();
    return 0;
}
