//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_PITCREW_H
#define PROJECT_PITCREW_H

#include "Personnel.h"

class PitCrew: public Personnel{
public:
    void handleRequest();
    void changeTyre();
    PitCrew();
    PitCrew(Team* team);
};

#endif //PROJECT_PITCREW_H
