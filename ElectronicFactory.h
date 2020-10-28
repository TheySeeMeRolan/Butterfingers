//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ELECTRONICFACTORY_H
#define PROJECT_ELECTRONICFACTORY_H

#include "HumanFactory.h"

class ElectronicFactory: public HumanFactory{
public:
    ElectronicFactory();
    virtual Human * makeEngineer() ;
    virtual Human * makePersonnel() ;
};

#endif //PROJECT_ELECTRONICFACTORY_H
