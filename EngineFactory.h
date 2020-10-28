//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ENGINEFACTORY_H
#define PROJECT_ENGINEFACTORY_H

#include "HumanFactory.h"

class EngineFactory: public HumanFactory{
public:
    EngineFactory();
    virtual Human * makeEngineer() ;
    virtual Human * makePersonnel() ;
};

#endif //PROJECT_ENGINEFACTORY_H
