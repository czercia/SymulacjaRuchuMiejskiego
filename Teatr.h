//
// Created by Marta on 29.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_TEATR_H
#define PROJEKTSEMESTRALNY_TEATR_H

#include <vector>
#include "Miejsce.h"
#include "Przystanek.h"
#include "Spektakl.h"

class Teatr : public Miejsce {
int pojemnosc;
std::vector<Spektakl> listaSpektakli;


public:
    Teatr(Przystanek*);
    Teatr(const Teatr&) = delete;
    Teatr&operator=(Teatr&) = delete;
    ~Teatr();



};


#endif //PROJEKTSEMESTRALNY_TEATR_H
