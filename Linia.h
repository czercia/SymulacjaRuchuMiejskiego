//
// Created by Marta on 28.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_LINIA_H
#define PROJEKTSEMESTRALNY_LINIA_H

#include <vector>
#include "Pojazd.h"
#include "Przystanek.h"

class Linia {
    int numer;
    int dlugoscKursu; //czas calego kursu: tam+postoj+powrot+postoj
    std::vector<Przystanek *> listaPrzystankow;
    std::vector<int> czasyPrzejazdow;
    Przystanek *zaj1;
    Przystanek *zaj2;

    //Flota
    int iloscPojazdow;
    int iloscPojazdowZaj1;
    int iloscPojazdowZaj2;
    std::vector<Pojazd> listaPojazdowZaj1; //w zajezdni pierwszej
    std::vector<Pojazd> listaPojazdowZaj2; //w zajezdni drugiej


public:
    //Konstruktorki, destruktorki itp
    Linia() = delete;

    Linia(int nr, std::vector<int> czasyPrzej, std::vector<Przystanek *> listaPrzyst, int iloscPoj);

    Linia(const Linia &) = delete;

    Linia &operator=(Linia &) = delete;

    //
    void wczytajTrase();
};


#endif //PROJEKTSEMESTRALNY_LINIA_H
