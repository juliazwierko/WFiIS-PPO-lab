#include <iostream>
 
class Person
{
public:
    // конструктор копирования класса Person
    Person(const Person& person)
    {
        name = person.name;
        age = person.age;
    }
    Person(std::string name, unsigned age)
    {
        this->name = name;
        this->age = age;
    }
    void print() const
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
private:
    std::string name;
    unsigned age;
};
class Employee: public Person
{
public:
    Employee(std::string name, unsigned age, std::string company): Person(name, age)
    {
        this->company = company;
    }
    // конструктор копирования класса Employee
    // вызываем конструктор копирования базового класса
    Employee(const Employee& employee): Person(employee)
    { 
        company=employee.company;
    }
private:
    std::string company;
};
 
int main()
{
    Employee tom{"Tom", 38, "Google"};
    Employee tomas{tom};    // вызываем конструктор копирования
    tomas.print();  // Name: Tom       Age: 38
}
