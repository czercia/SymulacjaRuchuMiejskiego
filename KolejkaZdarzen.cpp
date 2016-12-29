//
// Created by Marta on 27.12.2016.
//
#include <iostream>
#include "KolejkaZdarzen.h"

//class Zdarzenie;


void KolejkaZdarzen::wstaw(const Zdarzenie *zdarzenie) {
    assert(czas <= zdarzenie->getCzasRozpoczecia());
    zdarzenia.push(zdarzenie);

}

void KolejkaZdarzen::niechSieDzieje(int koniecSwiata) {
//    while(!zdarzenia.empty() and czas<= koniecSwiata){
//        const Zdarzenie* zdarzenie = zdarzenia.top();
//        czas = zdarzenie->getCzasRozpoczecia();
//        std::cout << czas << ": " << zdarzenie->getOpis() << std::endl;
//        zdarzenie -> amen();
//        zdarzenia.pop();
//        delete zdarzenie;
//    }



}
