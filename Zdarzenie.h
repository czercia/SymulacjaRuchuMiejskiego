//
// Created by Marta on 29.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_ZDARZENIE_H
#define PROJEKTSEMESTRALNY_ZDARZENIE_H

#include <string>
//#include "KolejkaZdarzen.h"
#include "Obiekt.h"
#include "Compare.h"

class KolejkaZdarzen;

class Zdarzenie {
    int czasRozpoczecia;
    Obiekt &kto;
    KolejkaZdarzen &kolejka;
    std::string opis;

public:
    //konstruktorki itp
    Zdarzenie(int czasRozp, Obiekt &obiekt, KolejkaZdarzen &kolejkaZdarzen);

    Zdarzenie() = delete;

    Zdarzenie(Zdarzenie &) = delete;

    Zdarzenie &operator=(const Zdarzenie &) = delete;

    virtual ~Zdarzenie() = default;

    //get
    int getCzasRozpoczecia() const;

    const std::string &getOpis() const;

    //reszta
    virtual void amen() const;

};


#endif //PROJEKTSEMESTRALNY_ZDARZENIE_H
