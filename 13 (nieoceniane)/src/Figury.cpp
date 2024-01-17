#include "Figury.h"

void Figury::DodajFigure(Figura* f) {
    figures.push_back(f);
}

void Figury::Rysuj() const {
    for (Figura* f : figures) {
        f->Rysuj();
    }
}