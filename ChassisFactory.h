//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_CHASISFACTORY_H
#define PROJECT_CHASISFACTORY_H

#include "HumanFactory.h"
#include "Strategist.h"
#include "ChassisEngineer.h"

class ChassisFactory: public HumanFactory{
public:
    ChassisFactory(Team* t, TeamResources* tR);
    Human * makeEngineer(Human * s) ;
    Human * makePersonnel(Human * s) ;
};

#endif //PROJECT_CHASISFACTORY_H
