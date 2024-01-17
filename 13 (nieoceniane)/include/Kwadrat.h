#pragma once

using namespace std;
#include <iostream>

#include "Figura.h"

class Kwadrat : public Figura
{
public:
    void Rysuj() const override;
};
