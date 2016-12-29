//
// Created by Marta on 29.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_SPEKTAKL_H
#define PROJEKTSEMESTRALNY_SPEKTAKL_H


class Spektakl {
    int czasRozpoczecia;
    int czasTrwania;
    int iloscMiejsc;
    int iloscZajetychMiejsc;

public:
    Spektakl() = delete;

    Spektakl(int czasRozpoczecia, int czasTrwania, int iloscMiejsc);

    Spektakl(const Spektakl &) = delete;

    Spektakl &operator=(Spektakl &) = delete;

    ~Spektakl() = default;

    int getCzasTrwania() const;

    int getCzasRozpoczecia() const;

    bool czySaWolneMiejsca();

    void zarezerwujMiejsce();

    double zapelnienie() const;

};


#endif
//PROJEKTSEMESTRALNY_SPEKTAKL_H
