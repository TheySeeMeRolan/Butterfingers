//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_AERODYNAMICSFACTORY_H
#define PROJECT_AERODYNAMICSFACTORY_H

#include "HumanFactory.h"

class AerodynamicsFactory: public HumanFactory{
public:
    AerodynamicsFactory();
    virtual Human * makeEngineer() ;
    virtual Human * makePersonnel() ;
};

#endif //PROJECT_AERODYNAMICSFACTORY_H
