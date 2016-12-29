//
// Created by Marta on 29.12.2016.
//

#include "Compare.h"

bool Compare::operator()(const Zdarzenie *z1, const Zdarzenie *z2) {
    return z1->getCzasRozpoczecia() > z2->getCzasRozpoczecia();
}
