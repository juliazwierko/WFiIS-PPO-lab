#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int var = 1.234;

    std::cout << "Test out: " << var << std::endl;

    std::cout << "Podaj liczbe: ";
    cin >> var;

    std::cout << "Test out: " << var << std::endl;
}

// Output:
// Test out: 1
// Podaj liczbe: 03.3
// Test out: 3
