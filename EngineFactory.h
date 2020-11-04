//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ENGINEFACTORY_H
#define PROJECT_ENGINEFACTORY_H

#include "HumanFactory.h"
#include "EngineEngineer.h"
#include "PitCrew.h"

class EngineFactory: public HumanFactory{
public:
    EngineFactory(Team* t,TeamResources* tR);
    Human * makeEngineer(Human *) ;
    Human * makePersonnel(Human *) ;
};

#endif //PROJECT_ENGINEFACTORY_H
