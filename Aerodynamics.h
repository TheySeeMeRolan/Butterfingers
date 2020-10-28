//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_AERODYNAMICS_H
#define PROJECT_AERODYNAMICS_H

#include "Engineering.h"

class Aerodynamics: public Engineering{
public:
    void handleRequest();
    void changeShape();
    Aerodynamics();
    Aerodynamics(Team* team);
};

#endif //PROJECT_AERODYNAMICS_H
