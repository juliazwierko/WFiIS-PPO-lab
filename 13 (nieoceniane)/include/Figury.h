#pragma once

#include "Figura.h"
#include <vector>

class Figury {
public:
    void DodajFigure(Figura*);
    void Rysuj() const;
private:
    std::vector<Figura*> figures;
};
