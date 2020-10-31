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
    AerodynamicsFactory(Team* t);
    Human * makeEngineer();
    Human * makePersonnel();
};

#endif //PROJECT_AERODYNAMICSFACTORY_H
