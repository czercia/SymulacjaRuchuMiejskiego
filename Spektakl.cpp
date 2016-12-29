//
// Created by Marta on 29.12.2016.
//

#include "Spektakl.h"

void Spektakl::zarezerwujMiejsce() {
    iloscZajetychMiejsc++;
}

bool Spektakl::czySaWolneMiejsca() {
    return iloscZajetychMiejsc < iloscMiejsc;
}

int Spektakl::getCzasRozpoczecia() const {
    return czasRozpoczecia;
}

int Spektakl::getCzasTrwania() const {
    return czasTrwania;
}

Spektakl::Spektakl(int czasRozpoczecia, int czasTrwania, int iloscMiejsc) : czasRozpoczecia(czasRozpoczecia),
                                                                            czasTrwania(czasTrwania),
                                                                            iloscMiejsc(iloscMiejsc) {
    iloscZajetychMiejsc = 0;
}

double Spektakl::zapelnienie() const {
    return ((double)iloscZajetychMiejsc)/((double)iloscMiejsc);
}
