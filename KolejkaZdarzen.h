//
// Created by Marta on 27.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_KOLEJKAZDARZEN_H
#define PROJEKTSEMESTRALNY_KOLEJKAZDARZEN_H

#include <queue>
#include <cassert>
#include "Zdarzenie.h"
#include "Compare.h"

class KolejkaZdarzen {
    std::priority_queue<const Zdarzenie*, std::vector<const Zdarzenie*>, Compare> zdarzenia;
    int czas;

public:
    KolejkaZdarzen();
    KolejkaZdarzen(KolejkaZdarzen&) = delete;
    KolejkaZdarzen&operator=(KolejkaZdarzen&) = delete;
    ~KolejkaZdarzen();

    void wstaw(const Zdarzenie* zdarzenie);
    void niechSieDzieje(int koniecSwiata);


};

#endif //PROJEKTSEMESTRALNY_KOLEJKAZDARZEN_H
