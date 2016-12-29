//
// Created by Marta on 29.12.2016.
//

#ifndef PROJEKTSEMESTRALNY_COMPARE_H
#define PROJEKTSEMESTRALNY_COMPARE_H

#include"Zdarzenie.h"


class Compare {

public:
    bool operator()(const Zdarzenie* z1, const Zdarzenie* z2);
};


#endif //PROJEKTSEMESTRALNY_COMPARE_H
