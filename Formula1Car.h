//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_FORMULA1CAR_H
#define PROJECT_FORMULA1CAR_H

#include "Engine.h"
#include "Tyre.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Spoiler.h"

class Formula1Car{
private:
    Engine* engine;
    Tyre* tyres[4];
    Chasis* chasis;
    Electronics* electronics;
    Spoiler* spoiler;
};

#endif //PROJECT_FORMULA1CAR_H
