//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_AERODYNAMICS_H
#define PROJECT_AERODYNAMICS_H

#include "Engineering.h"

class AerodynamicsEngineer: public Engineering{
public:
    void handleRequest(string p);
    void changeShape();
//    AerodynamicsEngineer();
    AerodynamicsEngineer(Team* team, Human * s, TeamResources* tR);
};

#endif //PROJECT_AERODYNAMICS_H
