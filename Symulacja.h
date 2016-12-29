//
// Created by Marta on 27.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_SYMULACJA_H
#define PROJEKTSEMESTRALNY_SYMULACJA_H

#include <vector>
#include <queue>
#include "KolejkaZdarzen.h"


class Symulacja {
    KolejkaZdarzen *kolejkaZdarzen;
    int czasTrwania; //czas trwania symulacji w minutach
    std::vector<Przystanek> listaPrzystankow;
    std::vector<Teatr> listaTeatrow;

public:

    Symulacja(const Symulacja&) = delete;
    ~Symulacja();
    void start();



};


#endif //PROJEKTSEMESTRALNY_SYMULACJA_H
