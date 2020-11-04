//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_AERODYNAMICSFACTORY_H
#define PROJECT_AERODYNAMICSFACTORY_H

#include "HumanFactory.h"
#include "AerodynamicsEngineer.h"
#include "Driver.h"

class AerodynamicsFactory: public HumanFactory{
public:
    AerodynamicsFactory(Team* t,TeamResources* tR);
    Human * makeEngineer(Human * s);
    Human * makePersonnel(Human * s);
};

#endif //PROJECT_AERODYNAMICSFACTORY_H
