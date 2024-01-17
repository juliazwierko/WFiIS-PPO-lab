#pragma once 
using namespace std;
#include <iostream>

#include "Figura.h"

class Okrag : public Figura
{
public:
    void Rysuj() const override;
};
