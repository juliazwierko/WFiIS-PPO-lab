#include <iostream>
  
class Person
{
public:
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
    std::string name;       //  имя
    unsigned age;           // возраст
};
class Employee: public Person
{
public:
    using Person::Person;   // подключаем конструктор базового класса
};
  
int main()
{
    Person person {"Tom", 38};
    person.print();     // Name: Tom       Age: 38
  
    Employee employee {"Bob", 42};
    employee.print();   // Name: Bob       Age: 42
}
