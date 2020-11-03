//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_PITCREW_H
#define PROJECT_PITCREW_H

#include "Personnel.h"

class PitCrew: public Personnel{
public:
    void handleRequest(string s);
    void changeTyre();
//    PitCrew();
    PitCrew(Team* team, Human * s);
};

#endif //PROJECT_PITCREW_H
